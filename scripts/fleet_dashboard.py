#!/usr/bin/env python3
"""
NRDAS Fleet Observability Dashboard.

Decoupled, read-only monitoring suite for multi-AMR fleet coordination.
Consumes ground-truth telemetry directly from ROS 2 topics and graph.

Exposes:
1. Zero-dependency Web Dashboard (http://localhost:8080) with 2D warehouse mini-map.
2. Rich Terminal TUI mode for live CLI telemetry.
3. REST JSON endpoint (/api/state) for external observability.
"""

import argparse
from datetime import datetime
import http.server
import json
import math
import os
import socketserver
import threading
import time
from typing import Any, Dict, List, Optional, Tuple
import yaml

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan
from rosgraph_msgs.msg import Clock

try:
    from amr_fleet_msgs.msg import (
        AisleBlockageEvent,
        CBBABid,
        CommunicationMetrics,
        CommunicationProfile,
        ConflictReport,
        CoordinationStatus,
        DeadlockEvent,
        RobotBundle,
        RobotHealth,
        RollingHorizonPlan,
        SpaceTimeReservation,
        TaskEvent as TaskEventMsg,
        TaskList,
    )
    HAVE_TASK_MSGS = True
except ImportError:
    HAVE_TASK_MSGS = False

try:
    from amr_fleet_msgs.srv import ControlTask, CreateTask
    HAVE_SRV_MSGS = True
except ImportError:
    HAVE_SRV_MSGS = False


class SystemMetricsReader:
    """Reads host CPU and memory usage from Linux /proc filesystem."""

    def __init__(self) -> None:
        self._prev_idle = 0
        self._prev_total = 0

    def read_cpu_percent(self) -> float:
        try:
            with open('/proc/stat', 'r', encoding='utf-8') as f:
                fields = [float(x) for x in f.readline().strip().split()[1:8]]
            idle = fields[3] + fields[4]
            total = sum(fields)
            diff_idle = idle - self._prev_idle
            diff_total = total - self._prev_total
            self._prev_idle = idle
            self._prev_total = total
            if diff_total == 0:
                return 0.0
            return max(0.0, min(100.0, (1.0 - diff_idle / diff_total) * 100.0))
        except Exception:
            return 0.0

    def read_ram_usage_mb(self) -> Dict[str, float]:
        try:
            mem_total = 0.0
            mem_avail = 0.0
            with open('/proc/meminfo', 'r', encoding='utf-8') as f:
                for line in f:
                    if line.startswith('MemTotal:'):
                        mem_total = float(line.split()[1]) / 1024.0
                    elif line.startswith('MemAvailable:'):
                        mem_avail = float(line.split()[1]) / 1024.0
            mem_used = mem_total - mem_avail
            return {
                'total_mb': round(mem_total, 1),
                'used_mb': round(mem_used, 1),
                'percent': round((mem_used / mem_total) * 100.0, 1) if mem_total > 0 else 0.0,
            }
        except Exception:
            return {'total_mb': 0.0, 'used_mb': 0.0, 'percent': 0.0}


class RobotTelemetryTracker:
    """Tracks live state, kinematics, and sensor health for a single AMR."""

    def __init__(
        self,
        robot_id: str,
        spawn_x: float = 0.0,
        spawn_y: float = 0.0,
        spawn_yaw: float = 0.0,
    ) -> None:
        self.robot_id = robot_id
        self.spawn_x = spawn_x
        self.spawn_y = spawn_y
        self.spawn_yaw = spawn_yaw
        self.x = spawn_x
        self.y = spawn_y
        self.yaw = spawn_yaw
        self.linear_speed = 0.0
        self.angular_speed = 0.0
        self.last_odom_time = 0.0
        self.total_distance = 0.0
        self._prev_x: Optional[float] = None
        self._prev_y: Optional[float] = None
        
        # Sensor
        self.lidar_count = 0
        self.lidar_rate_hz = 0.0
        self.min_scan_range = float('inf')
        self._last_scan_times: List[float] = []

        # M5 Rolling Horizon Plan
        self.current_plan: Dict[str, Any] = {
            'task_id': '',
            'sub_goal_type': 'NONE',
            'horizon_steps': 0,
            'execution_window': 0,
            'horizon_path': [],
            'execution_path': [],
            'replan_count': 0,
            'latency_ms': 0.0,
            'is_valid': False,
        }

        # Health & Fault Telemetry
        self.health_state = 'HEALTHY'
        self.uptime_sec = 0.0
        self.last_health_time = 0.0

    def update_health(self, msg: Any) -> None:
        self.health_state = getattr(msg, 'health_state', 'HEALTHY')
        self.uptime_sec = getattr(msg, 'uptime_sec', 0.0)
        self.last_health_time = time.time()

    def update_plan(self, msg: Any) -> None:
        horizon_pts = [[round(p.x, 2), round(p.y, 2)] for p in msg.horizon_path]
        exec_pts = [[round(p.x, 2), round(p.y, 2)] for p in msg.execution_path]
        self.current_plan = {
            'task_id': getattr(msg, 'current_task_id', getattr(msg, 'task_id', '')),
            'sub_goal_type': getattr(msg, 'current_phase', getattr(msg, 'sub_goal_type', 'NONE')),
            'horizon_steps': msg.horizon_steps,
            'execution_window': msg.execution_window,
            'horizon_path': horizon_pts,
            'execution_path': exec_pts,
            'replan_count': msg.replan_count,
            'latency_ms': round(msg.planning_latency_ms, 2),
            'is_valid': msg.is_valid,
        }

    def update_odometry(self, msg: Odometry) -> None:
        now = time.time()
        self.last_odom_time = now
        px = msg.pose.pose.position.x
        py = msg.pose.pose.position.y
        
        frame_id = msg.header.frame_id or ''
        # Orientation quaternion -> Yaw
        q = msg.pose.pose.orientation
        siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
        odom_yaw = math.atan2(siny_cosp, cosy_cosp)

        if 'map' in frame_id:
            curr_x = px
            curr_y = py
            self.yaw = (odom_yaw) % (2.0 * math.pi)
        else:
            self.yaw = (self.spawn_yaw + odom_yaw) % (2.0 * math.pi)
            cos_yaw = math.cos(self.spawn_yaw)
            sin_yaw = math.sin(self.spawn_yaw)
            curr_x = self.spawn_x + (px * cos_yaw - py * sin_yaw)
            curr_y = self.spawn_y + (px * sin_yaw + py * cos_yaw)

        # Cumulative distance
        if self._prev_x is not None and self._prev_y is not None:
            d = math.hypot(curr_x - self._prev_x, curr_y - self._prev_y)
            if 0.0001 < d < 2.0:  # ignore teleports
                self.total_distance += d
        self._prev_x = curr_x
        self._prev_y = curr_y

        self.x = round(curr_x, 2)
        self.y = round(curr_y, 2)
        self.linear_speed = math.hypot(msg.twist.twist.linear.x, msg.twist.twist.linear.y)
        self.angular_speed = msg.twist.twist.angular.z

    def update_scan(self, msg: LaserScan) -> None:
        now = time.time()
        self.lidar_count += 1
        self._last_scan_times.append(now)
        if len(self._last_scan_times) > 20:
            self._last_scan_times.pop(0)

        if len(self._last_scan_times) >= 2:
            dt = self._last_scan_times[-1] - self._last_scan_times[0]
            if dt > 0.0:
                self.lidar_rate_hz = round((len(self._last_scan_times) - 1) / dt, 1)

        valid_ranges = [r for r in msg.ranges if not math.isnan(r) and not math.isinf(r) and r > msg.range_min]
        self.min_scan_range = min(valid_ranges) if valid_ranges else float('inf')

    @property
    def status(self) -> str:
        if time.time() - self.last_odom_time > 3.0:
            return 'OFFLINE'
        if self.linear_speed > 0.02 or abs(self.angular_speed) > 0.05:
            return 'ACTIVE'
        return 'IDLE'

    def to_dict(self) -> Dict[str, Any]:
        dist_used = (self.total_distance * 0.4) % 85.0
        battery = max(18, min(100, int(100 - dist_used)))
        progress_pct = 0
        if self.current_plan and self.current_plan.get('task_id'):
            sub_type = self.current_plan.get('sub_goal_type', 'NONE')
            if sub_type == 'PICKUP':
                progress_pct = 35
            elif sub_type == 'DROPOFF':
                progress_pct = 75
            elif self.status == 'ACTIVE':
                progress_pct = 50
        elif self.status == 'ACTIVE':
            progress_pct = 20

        task_id = self.current_plan.get('task_id', '') if self.current_plan else ''

        return {
            'robot_id': self.robot_id,
            'status': self.status,
            'state': self.status,
            'health_state': self.health_state,
            'uptime_sec': round(self.uptime_sec, 1),
            'x': round(self.x, 2),
            'y': round(self.y, 2),
            'yaw': round(self.yaw, 4),
            'yaw_deg': round(math.degrees(self.yaw), 1),
            'linear_speed': round(self.linear_speed, 2),
            'angular_speed': round(self.angular_speed, 2),
            'distance_m': round(self.total_distance, 2),
            'lidar_hz': self.lidar_rate_hz,
            'min_obstacle_m': round(self.min_scan_range, 2) if self.min_scan_range != float('inf') else None,
            'last_update_sec_ago': round(time.time() - self.last_odom_time, 1) if self.last_odom_time > 0 else None,
            'plan': self.current_plan,
            'current_plan': self.current_plan,
            'current_task_id': task_id,
            'battery_pct': battery,
            'progress_pct': progress_pct,
        }


class FleetMonitorNode(Node):
    """ROS 2 Node collecting ground-truth multi-robot telemetry."""

    def __init__(self, target_robot_count: int = 10, world_name: str = 'warehouse_m9_v2') -> None:
        super().__init__('amr_fleet_monitor')
        self.target_robot_count = target_robot_count
        self.world_name = world_name
        self.robots: Dict[str, RobotTelemetryTracker] = {}
        self.metrics_reader = SystemMetricsReader()
        self.sim_time_sec = 0.0
        self.comm_log: List[Dict[str, Any]] = [
            {
                'time': datetime.now().strftime('%H:%M:%S'),
                'sim_time': 0.0,
                'sender': 'SYSTEM',
                'recipient': 'FLEET',
                'message': 'NRDAS Autonomous Fleet Command initialized. All systems nominal.',
                'type': 'SYSTEM',
            }
        ]
        self._last_cbba_bid_log_time = 0.0
        self._last_sim_time = 0.0
        self._last_wall_time = time.time()
        self.real_time_factor = 1.0

        # Load spawn configurations
        self.spawn_poses: Dict[str, Tuple[float, float, float]] = {}
        ws_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
        clean_world = world_name[:-4] if world_name.endswith('.sdf') else world_name
        tag = clean_world.replace('warehouse_', '')
        cfg_paths = [
            os.path.join(ws_root, 'config', 'robots', f'fleet_{self.target_robot_count}_robots_{tag}.yaml'),
            os.path.join(ws_root, 'config', 'robots', f'fleet_{self.target_robot_count}_robots_{clean_world}.yaml'),
            os.path.join(ws_root, 'config', 'robots', f'fleet_{self.target_robot_count}_robots.yaml'),
            os.path.join(ws_root, 'config', 'robots', 'fleet_5_robots.yaml'),
            os.path.join(ws_root, 'config', 'robots', 'fleet_default.yaml'),
        ]
        for cp in cfg_paths:
            if os.path.isfile(cp):
                try:
                    with open(cp, 'r', encoding='utf-8') as f:
                        cfg_data = yaml.safe_load(f)
                    for r_cfg in cfg_data.get('fleet', {}).get('robots', []):
                        r_id = r_cfg.get('id')
                        if r_id:
                            self.spawn_poses[r_id] = (
                                float(r_cfg.get('x', 0.0)),
                                float(r_cfg.get('y', 0.0)),
                                float(r_cfg.get('yaw', 0.0)),
                            )
                    if self.spawn_poses:
                        break
                except Exception:
                    pass

        # Load map metadata
        self.map_data: Dict[str, Any] = {
            'width': 32.0,
            'height': 32.0,
            'racks': [],
            'pickups': [],
            'dropoffs': [],
            'charging': [],
        }
        map_paths = [
            os.path.join(ws_root, 'config', 'maps', f'{clean_world}.yaml'),
            os.path.join(ws_root, 'config', 'maps', f'warehouse_{tag}.yaml'),
            os.path.join(ws_root, 'config', 'maps', 'warehouse_m9_v2.yaml'),
            os.path.join(ws_root, 'config', 'maps', 'warehouse_grid_small.yaml'),
        ]
        for mp in map_paths:
            if os.path.isfile(mp):
                try:
                    with open(mp, 'r', encoding='utf-8') as f:
                        m_cfg = yaml.safe_load(f)
                    dim = m_cfg.get('dimensions', {})
                    self.map_data['width'] = float(dim.get('x', 32.0))
                    self.map_data['height'] = float(dim.get('y', 32.0))
                    racks = []
                    for obs in m_cfg.get('obstacles', []):
                        cntr = obs.get('center', [0, 0])
                        sz = obs.get('size', [1.2, 3.0])
                        racks.append([float(cntr[0]), float(cntr[1]), float(sz[0]), float(sz[1])])
                    self.map_data['racks'] = racks

                    pickups = []
                    for p in m_cfg.get('pickup_stations', []):
                        if isinstance(p, dict):
                            coords = [float(p['coords'][0]), float(p['coords'][1])]
                            pickups.append({'id': p.get('id', 'P'), 'coords': coords})
                        elif isinstance(p, (list, tuple)):
                            pickups.append({'id': 'P', 'coords': [float(p[0]), float(p[1])]})
                    self.map_data['pickups'] = pickups

                    dropoffs = []
                    for d in m_cfg.get('dropoff_stations', []):
                        if isinstance(d, dict):
                            coords = [float(d['coords'][0]), float(d['coords'][1])]
                            dropoffs.append({'id': d.get('id', 'D'), 'coords': coords})
                        elif isinstance(d, (list, tuple)):
                            dropoffs.append({'id': 'D', 'coords': [float(d[0]), float(d[1])]})
                    self.map_data['dropoffs'] = dropoffs

                    charging = []
                    for c in m_cfg.get('charging_stations', []):
                        if isinstance(c, dict):
                            coords = [float(c['coords'][0]), float(c['coords'][1])]
                            charging.append({'id': c.get('id', 'C'), 'coords': coords})
                        elif isinstance(c, (list, tuple)):
                            charging.append({'id': 'C', 'coords': [float(c[0]), float(c[1])]})
                    self.map_data['charging'] = charging
                    break
                except Exception:
                    pass

        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=5,
        )
        self.qos_sensor = qos

        # Subscribe to simulation clock
        self.create_subscription(Clock, '/clock', self._clock_cb, self.qos_sensor)

        # M3 Task State Tracking
        self.tasks_data: Dict[str, Any] = {
            'status': 'AWAITING /tasks/all',
            'total': 0,
            'pending': 0,
            'assigned': 0,
            'in_progress': 0,
            'completed': 0,
            'failed': 0,
            'cancelled': 0,
            'tasks': [],
            'recent_events': [],
        }

        # CBBA State Tracking
        self.cbba_data: Dict[str, Any] = {
            'status': 'IDLE — Awaiting CBBA Auction',
            'is_converged': False,
            'bids_count': 0,
            'winning_allocations': {},
            'bids_by_task': {},
            'bundles': {},
            'makespan_sec': 0.0,
            'last_bid_time': 0.0,
        }
        self._bundle_subs: set = set()
        self._plan_subs: set = set()
        self._health_subs: set = set()

        if HAVE_SRV_MSGS:
            self.cli_create_task = self.create_client(CreateTask, '/tasks/create')
            self.cli_control_task = self.create_client(ControlTask, '/tasks/control')

        # M6 Multi-Agent Coordination Telemetry
        self.coord_data: Dict[str, Any] = {
            'status': 'ONLINE — M6 Coordination Active',
            'reservations_count': 0,
            'active_reservations': [],
            'conflicts_count': 0,
            'active_conflicts': [],
            'deadlocks_count': 0,
            'recent_deadlocks': [],
            'robot_coordination': {},
            'min_observed_distance_m': float('inf'),
            'e_stops_count': 0,
            'last_coord_time': time.time(),
        }

        # M7 Communication Degradation & Fleet Resilience Telemetry
        self.comm_data: Dict[str, Any] = {
            'profile_name': 'NORMAL',
            'enabled': False,
            'latency_ms': 0.0,
            'jitter_ms': 0.0,
            'loss_probability': 0.0,
            'burst_loss_probability': 0.0,
            'outage_duration_s': 0.0,
            'outage_active': False,
            'isolated_robots': [],
            'packets_sent': 0,
            'packets_delivered': 0,
            'packets_dropped': 0,
            'loss_rate': 0.0,
            'avg_latency_ms': 0.0,
            'p95_latency_ms': 0.0,
            'jitter_ms_measured': 0.0,
            'burst_events': 0,
            'stale_messages_count': 0,
            'expired_reservations_count': 0,
        }

        self.dynamic_obstacles: Dict[str, Dict[str, Any]] = {}

        if HAVE_TASK_MSGS:
            self.create_subscription(RobotHealth, '/fleet/robot_health', self._fleet_health_cb, 20)
            self.create_subscription(
                AisleBlockageEvent, '/environment/aisle_blockages', self._aisle_blockage_cb, 10
            )
            self.create_subscription(TaskList, '/tasks/all', self._tasks_cb, 10)
            self.create_subscription(TaskEventMsg, '/tasks/events', self._task_event_cb, 20)
            self.create_subscription(CBBABid, '/fleet/cbba_bids', self._cbba_bid_cb, 50)
            self.create_subscription(
                SpaceTimeReservation, '/fleet/reservations', self._reservation_cb, 50,
            )
            self.create_subscription(
                ConflictReport, '/fleet/conflicts', self._conflict_cb, 20,
            )
            self.create_subscription(
                DeadlockEvent, '/fleet/deadlocks', self._deadlock_cb, 20,
            )
            self.create_subscription(
                CoordinationStatus, '/fleet/coordination_status', self._fleet_coord_cb, 20,
            )
            self.create_subscription(
                CommunicationProfile, '/fleet/comm_profile', self._comm_profile_cb, 10,
            )
            self.create_subscription(
                CommunicationMetrics, '/fleet/comm_metrics', self._comm_metrics_cb, 10,
            )

        # Dynamic topic discovery timer
        self.create_timer(1.0, self._discover_fleet_topics)

    def _aisle_blockage_cb(self, msg: Any) -> None:
        """Track active dynamic aisle blockages."""
        b_id = getattr(msg, 'blockage_id', '')
        if not b_id:
            return
        if getattr(msg, 'is_blocked', False):
            self.dynamic_obstacles[b_id] = {
                'id': b_id,
                'min_x': float(getattr(msg, 'min_x', 0.0)),
                'max_x': float(getattr(msg, 'max_x', 0.0)),
                'min_y': float(getattr(msg, 'min_y', 0.0)),
                'max_y': float(getattr(msg, 'max_y', 0.0)),
            }
        else:
            self.dynamic_obstacles.pop(b_id, None)

    def _fleet_health_cb(self, msg: Any) -> None:
        """Process fleet-wide robot health update."""
        r_id = getattr(msg, 'robot_id', '')
        if r_id in self.robots:
            self.robots[r_id].update_health(msg)

    def _add_comm_log(
        self,
        sender: str,
        recipient: str,
        message: str,
        event_type: str = 'INFO',
    ) -> None:
        now_dt = datetime.now()
        time_str = now_dt.strftime('%H:%M:%S')
        entry = {
            'time': time_str,
            'sim_time': round(self.sim_time_sec, 1),
            'sender': sender.upper(),
            'recipient': recipient.upper(),
            'message': message,
            'type': event_type.upper(),
        }
        self.comm_log.insert(0, entry)
        if len(self.comm_log) > 80:
            self.comm_log.pop()

    def _tasks_cb(self, msg: 'TaskList') -> None:
        tasks_list = []
        pending = 0
        assigned = 0
        in_progress = 0
        completed = 0
        failed = 0
        cancelled = 0

        for t in msg.tasks:
            status = t.status.upper()
            if status == 'PENDING':
                pending += 1
            elif status == 'ASSIGNED':
                assigned += 1
            elif status == 'IN_PROGRESS':
                in_progress += 1
            elif status == 'COMPLETED':
                completed += 1
            elif status == 'FAILED':
                failed += 1
            elif status == 'CANCELLED':
                cancelled += 1

            tasks_list.append({
                'id': t.task_id,
                'pickup': [round(t.pickup_pose.x, 2), round(t.pickup_pose.y, 2)],
                'dropoff': [round(t.dropoff_pose.x, 2), round(t.dropoff_pose.y, 2)],
                'priority': t.priority,
                'status': t.status,
                'robot': t.assigned_robot_id or None,
                'requested_robot': getattr(t, 'requested_robot', '') or None,
            })

        self.tasks_data = {
            'status': 'ONLINE — M3 Lifecycle Active',
            'total': len(msg.tasks),
            'pending': pending,
            'assigned': assigned,
            'in_progress': in_progress,
            'completed': completed,
            'failed': failed,
            'cancelled': cancelled,
            'tasks': tasks_list,
            'recent_events': self.tasks_data.get('recent_events', []),
        }

    def _task_event_cb(self, msg: 'TaskEventMsg') -> None:
        ev = {
            'task_id': msg.task_id,
            'event': msg.event_type,
            'from': msg.previous_state,
            'to': msg.new_state,
            'robot': msg.robot_id or 'none',
            'details': msg.details,
        }
        recent = self.tasks_data.get('recent_events', [])
        recent.insert(0, ev)
        self.tasks_data['recent_events'] = recent[:5]
        snd = (msg.robot_id or 'SYSTEM').upper()
        txt = f"Task [{msg.task_id}] {msg.previous_state} -> {msg.new_state}. {msg.details or ''}".strip()
        self._add_comm_log(snd, 'FLEET', txt, 'TASK')

    def _cbba_bid_cb(self, msg: 'CBBABid') -> None:
        self.cbba_data['bids_count'] += 1
        self.cbba_data['last_bid_time'] = time.time()
        now_t = time.time()
        if now_t - self._last_cbba_bid_log_time > 1.0:
            self._last_cbba_bid_log_time = now_t
            snd = (msg.robot_id or 'AMR').upper()
            t_ids = ', '.join(msg.task_ids[:2])
            self._add_comm_log(snd, 'FLEET', f"Submitted bids for [{t_ids}]. Consensus in progress.", 'CBBA')
        for idx, t_id in enumerate(msg.task_ids):
            bid = msg.winning_bids[idx] if idx < len(msg.winning_bids) else 0.0
            winner = msg.winning_robots[idx] if idx < len(msg.winning_robots) else ''
            self.cbba_data['winning_allocations'][t_id] = {
                'winner': winner,
                'bid': round(bid, 2),
            }
            if t_id not in self.cbba_data['bids_by_task']:
                self.cbba_data['bids_by_task'][t_id] = {}
            if winner:
                self.cbba_data['bids_by_task'][t_id][winner] = round(bid, 2)
            if msg.robot_id and bid > 0.0:
                self.cbba_data['bids_by_task'][t_id][msg.robot_id] = round(bid, 2)

    def create_task_sync(self, data: Dict[str, Any]) -> Dict[str, Any]:
        """Send task creation request to /tasks/create and await response."""
        if not HAVE_SRV_MSGS or not hasattr(self, 'cli_create_task'):
            return {
                'accepted': False,
                'message': 'ROS 2 services unavailable in dashboard environment.',
            }

        if not self.cli_create_task.service_is_ready():
            if not self.cli_create_task.wait_for_service(timeout_sec=2.0):
                return {
                    'accepted': False,
                    'message': "Service '/tasks/create' unavailable. Is TaskManagerNode running?",
                }

        req = CreateTask.Request()
        req.task_id = str(data.get('task_id', '')).strip()
        try:
            req.pickup_x = float(data.get('pickup_x', 0.0))
            req.pickup_y = float(data.get('pickup_y', 0.0))
            req.dropoff_x = float(data.get('dropoff_x', 0.0))
            req.dropoff_y = float(data.get('dropoff_y', 0.0))
            req.priority = int(data.get('priority', 2))
            req.deadline = float(data.get('deadline', 0.0))
            req.requested_robot = str(data.get('requested_robot', '')).strip()
        except (ValueError, TypeError) as e:
            return {'accepted': False, 'message': f'Invalid numeric parameters: {e}'}

        future = self.cli_create_task.call_async(req)
        start_t = time.time()
        while not future.done() and (time.time() - start_t) < 3.0:
            time.sleep(0.05)

        if not future.done():
            return {
                'accepted': False,
                'message': 'Service call timed out waiting for TaskManagerNode.',
            }

        res = future.result()
        if res.accepted:
            alloc_type = f"DIRECT:{req.requested_robot}" if req.requested_robot else "AUTO (CBBA)"
            self._add_comm_log('OPERATOR', 'TASK_MGR', f"Task [{res.task_id}] created ({alloc_type})", 'TASK')
        return {
            'accepted': res.accepted,
            'task_id': res.task_id,
            'message': res.message,
        }

    def control_task_sync(self, task_id: str, action: str) -> Dict[str, Any]:
        """Send task control request to /tasks/control and await response."""
        if not HAVE_SRV_MSGS or not hasattr(self, 'cli_control_task'):
            return {
                'success': False,
                'message': 'ROS 2 services unavailable in dashboard environment.',
            }

        if not self.cli_control_task.service_is_ready():
            if not self.cli_control_task.wait_for_service(timeout_sec=2.0):
                return {
                    'success': False,
                    'message': "Service '/tasks/control' unavailable.",
                }

        req = ControlTask.Request()
        req.task_id = str(task_id).strip()
        req.action = str(action).strip().upper()

        future = self.cli_control_task.call_async(req)
        start_t = time.time()
        while not future.done() and (time.time() - start_t) < 3.0:
            time.sleep(0.05)

        if not future.done():
            return {'success': False, 'message': 'Service call timed out.'}

        res = future.result()
        if res.success:
            self._add_comm_log('OPERATOR', 'TASK_MGR', f"Task [{task_id}] action '{action}' executed", 'TASK')
        return {'success': res.success, 'message': res.message}

    def _bundle_cb(self, r_id: str, msg: 'RobotBundle') -> None:
        self.cbba_data['bundles'][r_id] = list(msg.task_ids)
        if msg.is_converged:
            self.cbba_data['is_converged'] = True
            self.cbba_data['status'] = 'CONVERGED (Consensus Reached)'
        else:
            self.cbba_data['status'] = 'NEGOTIATING (Bids Exchanging)'

    def _reservation_cb(self, msg: 'SpaceTimeReservation') -> None:
        """Cache live space-time reservations."""
        self.coord_data['reservations_count'] += 1
        res_info = {
            'robot_id': msg.robot_id,
            'from': [msg.from_x, msg.from_y],
            'to': [msg.to_x, msg.to_y],
            'time_step': msg.time_step,
            'is_edge': msg.is_edge,
            'priority': round(msg.priority, 1),
        }
        res_list = self.coord_data.get('active_reservations', [])
        res_list.insert(0, res_info)
        self.coord_data['active_reservations'] = res_list[:20]

    def _conflict_cb(self, msg: 'ConflictReport') -> None:
        """Cache live conflict reports."""
        self.coord_data['conflicts_count'] += 1
        conf_info = {
            'type': msg.conflict_type,
            'robot_a': msg.robot_a,
            'robot_b': msg.robot_b,
            'cell': [msg.cell_x, msg.cell_y],
            'time_step': msg.time_step,
            'resolved': msg.resolved,
        }
        conf_list = self.coord_data.get('active_conflicts', [])
        conf_list.insert(0, conf_info)
        self.coord_data['active_conflicts'] = conf_list[:10]
        status_txt = "Resolved" if msg.resolved else "Deconfliction active"
        self._add_comm_log(
            (msg.robot_a or 'AMR').upper(),
            (msg.robot_b or 'FLEET').upper(),
            f"Conflict {msg.conflict_type} at ({round(msg.cell_x, 1)}, {round(msg.cell_y, 1)}): {status_txt}",
            'PLAN'
        )
        status_txt = "Resolved" if msg.resolved else "Deconfliction active"
        self._add_comm_log(
            (msg.robot_a or 'AMR').upper(),
            (msg.robot_b or 'FLEET').upper(),
            f"Conflict {msg.conflict_type} at ({round(msg.cell_x, 1)}, {round(msg.cell_y, 1)}): {status_txt}",
            'PLAN'
        )
        status_txt = "Resolved" if msg.resolved else "Deconfliction active"
        self._add_comm_log(
            (msg.robot_a or 'AMR').upper(),
            (msg.robot_b or 'FLEET').upper(),
            f"Conflict {msg.conflict_type} at ({round(msg.cell_x, 1)}, {round(msg.cell_y, 1)}): {status_txt}",
            'PLAN'
        )

    def _deadlock_cb(self, msg: 'DeadlockEvent') -> None:
        """Cache live deadlock and recovery events."""
        self.coord_data['deadlocks_count'] += 1
        dl_info = {
            'cycle': list(msg.cycle_robot_ids),
            'action': msg.recovery_action,
            'duration_sec': round(msg.recovery_duration_sec, 2),
            'success': msg.recovery_success,
        }
        dl_list = self.coord_data.get('recent_deadlocks', [])
        dl_list.insert(0, dl_info)
        self.coord_data['recent_deadlocks'] = dl_list[:5]
        cycle_str = ', '.join(msg.cycle_robot_ids) if msg.cycle_robot_ids else 'AMR'
        self._add_comm_log(
            'SAFETY',
            'FLEET',
            f"WFG deadlock cycle [{cycle_str}]: Recovery '{msg.recovery_action}'",
            'SAFETY'
        )
        cycle_str = ', '.join(msg.cycle_robot_ids) if msg.cycle_robot_ids else 'AMR'
        self._add_comm_log(
            'SAFETY',
            'FLEET',
            f"WFG deadlock cycle [{cycle_str}]: Recovery '{msg.recovery_action}'",
            'SAFETY'
        )
        cycle_str = ', '.join(msg.cycle_robot_ids) if msg.cycle_robot_ids else 'AMR'
        self._add_comm_log(
            'SAFETY',
            'FLEET',
            f"WFG deadlock cycle [{cycle_str}]: Recovery '{msg.recovery_action}'",
            'SAFETY'
        )

    def _fleet_coord_cb(self, msg: 'CoordinationStatus') -> None:
        """Cache real-time coordination status per AMR."""
        self.coord_data['robot_coordination'][msg.robot_id] = {
            'priority': round(msg.priority, 1),
            'current_cell': [msg.current_cell_x, msg.current_cell_y],
            'target_cell': [msg.target_cell_x, msg.target_cell_y],
            'status': msg.status,
            'waiting_for': msg.waiting_for_robot,
            'time_step': msg.time_step,
        }

    def _comm_profile_cb(self, msg: 'CommunicationProfile') -> None:
        """Record active fleet communication degradation profile."""
        self.comm_data['profile_name'] = msg.profile_name
        self.comm_data['enabled'] = msg.enabled
        self.comm_data['latency_ms'] = float(msg.latency_ms)
        self.comm_data['jitter_ms'] = float(msg.jitter_ms)
        self.comm_data['loss_probability'] = float(msg.loss_probability)
        self.comm_data['burst_loss_probability'] = float(msg.burst_loss_probability)
        self.comm_data['outage_duration_s'] = float(msg.outage_duration_s)
        self.comm_data['isolated_robots'] = list(msg.isolated_robots)
        loss_pct = round(float(msg.loss_probability) * 100.0, 1)
        self._add_comm_log(
            'SYSTEM',
            'FLEET',
            f"Comm profile switched to {msg.profile_name} (Loss: {loss_pct}%, Lat: {msg.latency_ms}ms)",
            'SYSTEM'
        )
        loss_pct = round(float(msg.loss_probability) * 100.0, 1)
        self._add_comm_log(
            'SYSTEM',
            'FLEET',
            f"Comm profile switched to {msg.profile_name} (Loss: {loss_pct}%, Lat: {msg.latency_ms}ms)",
            'SYSTEM'
        )
        loss_pct = round(float(msg.loss_probability) * 100.0, 1)
        self._add_comm_log(
            'SYSTEM',
            'FLEET',
            f"Comm profile switched to {msg.profile_name} (Loss: {loss_pct}%, Lat: {msg.latency_ms}ms)",
            'SYSTEM'
        )

    def _comm_metrics_cb(self, msg: 'CommunicationMetrics') -> None:
        """Cache fleet communication metrics and stale status."""
        try:
            self.comm_data['packets_sent'] = getattr(msg, 'messages_sent', getattr(msg, 'packets_sent', 0))
            self.comm_data['packets_delivered'] = getattr(msg, 'messages_delivered', getattr(msg, 'packets_delivered', 0))
            self.comm_data['packets_dropped'] = getattr(msg, 'messages_dropped', getattr(msg, 'packets_dropped', 0))
            self.comm_data['loss_rate'] = round(float(getattr(msg, 'packet_loss_rate', getattr(msg, 'loss_rate', 0.0))), 3)
            self.comm_data['avg_latency_ms'] = round(float(getattr(msg, 'avg_latency_ms', 0.0)), 2)
            self.comm_data['p95_latency_ms'] = round(float(getattr(msg, 'p95_latency_ms', 0.0)), 2)
            self.comm_data['jitter_ms_measured'] = round(float(getattr(msg, 'jitter_ms', 0.0)), 2)
            self.comm_data['burst_events'] = getattr(msg, 'burst_events_count', getattr(msg, 'burst_events', 0))
            self.comm_data['outage_active'] = getattr(msg, 'outage_active', False)
            self.comm_data['stale_messages_count'] = getattr(msg, 'stale_messages_count', 0)
            self.comm_data['expired_reservations_count'] = getattr(msg, 'expired_reservations_count', 0)
        except Exception:
            pass

    def _clock_cb(self, msg: Clock) -> None:
        now_sim = msg.clock.sec + msg.clock.nanosec * 1e-9
        self.sim_time_sec = now_sim
        now_wall = time.time()
        wall_dt = now_wall - self._last_wall_time
        sim_dt = now_sim - self._last_sim_time
        if wall_dt >= 1.0:
            if wall_dt > 0:
                self.real_time_factor = round(sim_dt / wall_dt, 2)
            self._last_wall_time = now_wall
            self._last_sim_time = now_sim

    def _discover_fleet_topics(self) -> None:
        topic_names_and_types = self.get_topic_names_and_types()
        existing_topics = {t[0] for t in topic_names_and_types}

        for i in range(self.target_robot_count):
            r_id = f'amr_{i}'
            odom_topic = f'/{r_id}/odom'
            scan_topic = f'/{r_id}/scan'
            bundle_topic = f'/{r_id}/bundle'

            if odom_topic in existing_topics and r_id not in self.robots:
                spawn_pose = self.spawn_poses.get(r_id, (2.0, 2.0 + i * 3.0, 0.0))
                spawn_x = spawn_pose[0]
                spawn_y = spawn_pose[1]
                spawn_yaw = spawn_pose[2] if len(spawn_pose) > 2 else 0.0
                tracker = RobotTelemetryTracker(r_id, spawn_x, spawn_y, spawn_yaw)
                self.robots[r_id] = tracker

                # Subscribe to odom
                def make_odom_cb(t):
                    return lambda msg: t.update_odometry(msg)
                self.create_subscription(Odometry, odom_topic, make_odom_cb(tracker), 10)

                # Subscribe to scan
                def make_scan_cb(t):
                    return lambda msg: t.update_scan(msg)
                self.create_subscription(LaserScan, scan_topic, make_scan_cb(tracker), self.qos_sensor)

            if bundle_topic in existing_topics and r_id not in self._bundle_subs:
                def make_bundle_cb(rid):
                    return lambda msg: self._bundle_cb(rid, msg)
                self.create_subscription(RobotBundle, bundle_topic, make_bundle_cb(r_id), 10)
                self._bundle_subs.add(r_id)

            plan_topic = f'/{r_id}/rolling_plan'
            if HAVE_TASK_MSGS and plan_topic in existing_topics and r_id not in self._plan_subs:
                tracker = self.robots.get(r_id)
                if tracker:
                    def make_plan_cb(t):
                        return lambda msg: t.update_plan(msg)
                    self.create_subscription(RollingHorizonPlan, plan_topic, make_plan_cb(tracker), 10)
                    self._plan_subs.add(r_id)

            health_topic = f'/{r_id}/health'
            if HAVE_TASK_MSGS and health_topic in existing_topics and r_id not in self._health_subs:
                tracker = self.robots.get(r_id)
                if tracker:
                    def make_health_cb(t):
                        return lambda msg: t.update_health(msg)
                    self.create_subscription(RobotHealth, health_topic, make_health_cb(tracker), 10)
                    self._health_subs.add(r_id)

    def get_fleet_summary(self) -> Dict[str, Any]:
        node_names = self.get_node_names()
        topics = [t[0] for t in self.get_topic_names_and_types()]
        robot_data = [self.robots[k].to_dict() for k in sorted(self.robots.keys())]

        active_count = sum(1 for r in robot_data if r['status'] == 'ACTIVE')
        idle_count = sum(1 for r in robot_data if r['status'] == 'IDLE')
        offline_count = sum(1 for r in robot_data if r['status'] == 'OFFLINE')
        failed_count = sum(1 for r in robot_data if r.get('health_state') in ('FAILED', 'MOTOR_FAIL', 'MOTION_FAILURE', 'KILLED', 'EMERGENCY_STOP', 'ACTUATOR_FAIL'))
        comm_loss_count = sum(1 for r in robot_data if r.get('health_state') in ('COMM_LOSS', 'COMM_ISOLATE', 'UNRESPONSIVE_HEARTBEAT'))

        # Safety determination
        min_distance = min([r['min_obstacle_m'] for r in robot_data if r['min_obstacle_m'] is not None], default=99.0)
        safety_status = 'CLEAR'
        if min_distance < 0.25:
            safety_status = 'CRITICAL PROXIMITY'
        elif min_distance < 0.45:
            safety_status = 'PROXIMITY WARNING'

        ram = self.metrics_reader.read_ram_usage_mb()
        cpu = self.metrics_reader.read_cpu_percent()

        # Makespan calculation from CBBA bundles
        max_dist = 0.0
        task_dict = {t['id']: t for t in self.tasks_data.get('tasks', [])}
        for r_id, b_tasks in self.cbba_data['bundles'].items():
            r_tracker = self.robots.get(r_id)
            cur_pos = (r_tracker.x, r_tracker.y) if r_tracker else (0.0, 0.0)
            d = 0.0
            for tid in b_tasks:
                if tid in task_dict:
                    pk = task_dict[tid]['pickup']
                    dp = task_dict[tid]['dropoff']
                    d += math.hypot(pk[0] - cur_pos[0], pk[1] - cur_pos[1])
                    d += math.hypot(dp[0] - pk[0], dp[1] - pk[1])
                    cur_pos = (dp[0], dp[1])
            if d > max_dist:
                max_dist = d
        self.cbba_data['makespan_sec'] = round(max_dist / 0.5, 1) if max_dist > 0 else 0.0

        valid_latencies = [r['plan']['latency_ms'] for r in robot_data if r['plan']['latency_ms'] > 0]
        rh_avg_lat = round(sum(valid_latencies) / len(valid_latencies), 2) if valid_latencies else None
        rh_status_str = f"{rh_avg_lat} ms (M5 RHCR A*)" if rh_avg_lat is not None else "Idle (Awaiting Plans)"

        # Inter-robot minimum Euclidean distance across active AMRs
        min_inter_robot_dist = float('inf')
        robot_list = list(self.robots.values())
        for i in range(len(robot_list)):
            for j in range(i + 1, len(robot_list)):
                r1 = robot_list[i]
                r2 = robot_list[j]
                if r1.x is not None and r2.x is not None:
                    d = math.hypot(r1.x - r2.x, r1.y - r2.y)
                    if d < min_inter_robot_dist:
                        min_inter_robot_dist = d
        if min_inter_robot_dist < self.coord_data.get('min_observed_distance_m', float('inf')):
            self.coord_data['min_observed_distance_m'] = min_inter_robot_dist

        tasks_list = self.tasks_data.get('tasks', [])
        all_tasks_dict = {}
        for t in tasks_list:
            tid = t.get('id', '')
            if not tid:
                continue
            pk = t.get('pickup', [0.0, 0.0])
            dp = t.get('dropoff', [0.0, 0.0])
            all_tasks_dict[tid] = {
                'id': tid,
                'pickup_x': pk[0] if len(pk) > 0 else 0.0,
                'pickup_y': pk[1] if len(pk) > 1 else 0.0,
                'dropoff_x': dp[0] if len(dp) > 0 else 0.0,
                'dropoff_y': dp[1] if len(dp) > 1 else 0.0,
                'priority': t.get('priority', 2),
                'status': t.get('status', 'PENDING'),
                'assigned_robot': t.get('robot') or '',
                'requested_robot': t.get('requested_robot') or '',
            }

        return {
            'timestamp': datetime.now().isoformat(),
            'simulation': {
                'sim_time_sec': round(self.sim_time_sec, 2),
                'real_time_factor': self.real_time_factor,
                'status': 'RUNNING' if self.sim_time_sec > 0 else 'INITIALIZING',
            },
            'fleet': {
                'total_discovered': len(robot_data),
                'active_count': active_count,
                'idle_count': idle_count,
                'offline_count': offline_count,
                'failed_count': failed_count,
                'comm_loss_count': comm_loss_count,
                'robots': robot_data,
                'robots_by_id': {r['robot_id']: r for r in robot_data},
            },
            'tasks': {
                **self.tasks_data,
                'all_tasks': all_tasks_dict,
                'active': self.tasks_data.get('assigned', 0) + self.tasks_data.get('in_progress', 0),
            },
            'cbba': self.cbba_data,
            'coordination': self.coord_data,
            'communication': self.comm_data,
            'benchmark': {
                'workload_size': len(self.tasks_data.get('all_tasks', {})),
                'tasks_completed': self.tasks_data.get('completed', 0),
                'tasks_remaining': max(
                    0,
                    len(self.tasks_data.get('all_tasks', {}))
                    - self.tasks_data.get('completed', 0),
                ),
                'conflicts_resolved': self.coord_data.get('conflicts_count', 0),
                'deadlocks_recovered': self.coord_data.get('deadlocks_count', 0),
                'min_distance_m': round(self.coord_data.get('min_observed_distance_m', 1.5), 3),
            },
            'network': {
                'ros2_nodes_count': len(node_names),
                'ros2_topics_count': len(topics),
                'middleware': 'ROS 2 Jazzy (Zenoh / Cyclone DDS)',
                'transport_state': 'HEALTHY' if len(robot_data) > 0 else 'AWAITING_FLEET',
            },
            'performance': {
                'host_cpu_percent': round(cpu, 1),
                'host_ram_used_mb': ram['used_mb'],
                'host_ram_total_mb': ram['total_mb'],
                'host_ram_percent': ram['percent'],
                'mapf_planning_latency': rh_status_str,
                'fleet_throughput': (
                    f"{self.tasks_data['completed']} / {self.tasks_data['total']} completed"
                    if self.tasks_data['total'] > 0 else '0 tasks/hr'
                ),
            },
            'safety': {
                'estop_status': 'NORMAL — DISENGAGED',
                'active_safety_zone': safety_status,
                'deadlock_detection': (
                    f"M6 WFG: {self.coord_data['deadlocks_count']} cycles detected"
                    if self.coord_data['deadlocks_count'] > 0 else 'ONLINE — 0 WFG Cycles'
                ),
                'min_observed_inter_robot_distance_m': (
                    round(self.coord_data['min_observed_distance_m'], 3)
                    if not math.isinf(self.coord_data['min_observed_distance_m']) else None
                ),
            },
            'comm_log': self.comm_log,
            'map': self.map_data,
            'dynamic_obstacles': list(self.dynamic_obstacles.values()),
        }


# =====================================================================
# EMBEDDED DASHBOARD HTML/CSS/JS INTERFACE
# =====================================================================
DASHBOARD_HTML = """<!DOCTYPE html>
<html lang="en" data-theme="dark">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>NRDAS // FLEET OPERATIONS CONSOLE</title>
  <link rel="preconnect" href="https://fonts.googleapis.com">
  <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
  <link href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;600;700;800&family=JetBrains+Mono:wght@400;500;600;700&display=swap" rel="stylesheet">
  <style>
    /* Default: Dark Mode (Obsidian Black + Industrial Orange + White/Grey accents) */
    :root, [data-theme="dark"] {
      --bg-dark: #000000;
      --bg-panel: #0a0a0a;
      --bg-panel-sub: #121212;
      --bg-surface-hover: #1c1c1c;
      --border-subtle: #222222;
      --border-medium: #333333;

      --text-primary: #ffffff;
      --text-secondary: #a1a1aa;
      --text-muted: #71717a;

      --accent-orange: #FF7A00;
      --accent-orange-hover: #ea6c00;
      --accent-orange-subtle: rgba(255, 122, 0, 0.15);

      --color-green: #10b981;
      --color-green-subtle: rgba(16, 185, 129, 0.12);
      --color-blue: #3b82f6;
      --color-blue-subtle: rgba(59, 130, 246, 0.12);
      --color-amber: #f59e0b;
      --color-amber-subtle: rgba(245, 158, 11, 0.12);
      --color-red: #ef4444;
      --color-red-subtle: rgba(239, 68, 68, 0.12);

      --map-bg: #000000;
      --map-legend-bg: rgba(10, 10, 10, 0.92);
      --table-border: rgba(255, 255, 255, 0.08);
      --modal-backdrop: rgba(0, 0, 0, 0.85);
      --shadow-card: 0 4px 16px rgba(0, 0, 0, 0.7);

      --font-sans: 'Inter', -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif;
      --font-mono: 'JetBrains Mono', 'Fira Code', 'Roboto Mono', monospace;

      --radius-sm: 4px;
      --radius-md: 6px;
      --radius-lg: 8px;
    }

    /* Light Mode (Clean White + Industrial Orange + Grey accents) */
    [data-theme="light"] {
      --bg-dark: #f8fafc;
      --bg-panel: #ffffff;
      --bg-panel-sub: #f1f5f9;
      --bg-surface-hover: #e2e8f0;
      --border-subtle: #e2e8f0;
      --border-medium: #cbd5e1;

      --text-primary: #0f172a;
      --text-secondary: #475569;
      --text-muted: #64748b;

      --accent-orange: #FF7A00;
      --accent-orange-hover: #ea6c00;
      --accent-orange-subtle: rgba(255, 122, 0, 0.12);

      --color-green: #15803d;
      --color-green-subtle: rgba(21, 128, 61, 0.12);
      --color-blue: #0369a1;
      --color-blue-subtle: rgba(3, 105, 161, 0.12);
      --color-amber: #b45309;
      --color-amber-subtle: rgba(180, 83, 9, 0.12);
      --color-red: #b91c1c;
      --color-red-subtle: rgba(185, 28, 28, 0.12);

      --map-bg: #f8fafc;
      --map-legend-bg: rgba(255, 255, 255, 0.92);
      --table-border: rgba(0, 0, 0, 0.06);
      --modal-backdrop: rgba(15, 23, 42, 0.6);
      --shadow-card: 0 4px 16px rgba(0, 0, 0, 0.08);
    }

    *, *::before, *::after {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }

    body {
      font-family: var(--font-sans);
      background-color: var(--bg-dark);
      color: var(--text-primary);
      padding: 10px 14px 14px 14px;
      line-height: 1.35;
      -webkit-font-smoothing: antialiased;
      min-height: 100vh;
      overflow-x: hidden;
      transition: background-color 0.2s ease, color 0.2s ease;
    }

    /* Common Card / Panel */
    .console-panel {
      background: var(--bg-panel);
      border: 1px solid var(--border-subtle);
      border-radius: var(--radius-md);
      position: relative;
      transition: background-color 0.2s ease, border-color 0.2s ease;
    }

    /* Top Header Bar */
    header.header-bar {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 8px 14px;
      margin-bottom: 10px;
      background: var(--bg-panel);
      border: 1px solid var(--border-subtle);
      border-radius: var(--radius-md);
      gap: 16px;
      transition: background-color 0.2s ease, border-color 0.2s ease;
    }

    .brand-group {
      display: flex;
      flex-direction: column;
      padding-right: 14px;
      border-right: 1px solid var(--border-subtle);
      min-width: 240px;
    }

    .brand-title {
      font-size: 1.25rem;
      font-weight: 900;
      letter-spacing: 0.5px;
      color: var(--text-primary);
      display: flex;
      align-items: center;
      gap: 6px;
      line-height: 1.1;
    }

    .brand-accent {
      color: var(--accent-orange);
      letter-spacing: -2px;
      font-weight: 800;
    }

    .brand-subtitle {
      font-size: 0.58rem;
      font-weight: 700;
      color: var(--text-muted);
      letter-spacing: 0.8px;
      margin-top: 2px;
    }

    .header-metrics {
      display: flex;
      align-items: center;
      gap: 12px;
      flex: 1;
      justify-content: center;
      flex-wrap: wrap;
    }

    .metric-item {
      display: flex;
      flex-direction: column;
      align-items: center;
      gap: 1px;
    }

    .metric-label {
      font-size: 0.62rem;
      font-weight: 700;
      color: var(--text-muted);
      letter-spacing: 0.6px;
      text-transform: uppercase;
    }

    .metric-value {
      font-size: 0.95rem;
      font-weight: 700;
      font-family: var(--font-mono);
      color: var(--text-primary);
      line-height: 1.1;
    }

    .metric-sep {
      width: 1px;
      height: 24px;
      background: var(--border-subtle);
    }

    .system-group {
      display: flex;
      align-items: center;
      gap: 12px;
      padding-left: 14px;
      border-left: 1px solid var(--border-subtle);
    }

    .sys-badge {
      display: inline-flex;
      align-items: center;
      gap: 6px;
      font-size: 0.75rem;
      font-weight: 700;
      color: var(--color-green);
      font-family: var(--font-mono);
    }

    .pulse-dot {
      width: 7px;
      height: 7px;
      background-color: var(--color-green);
      border-radius: 50%;
      box-shadow: 0 0 8px var(--color-green);
      animation: pulse-glow 2s infinite;
    }

    @keyframes pulse-glow {
      0%, 100% { opacity: 1; transform: scale(1); }
      50% { opacity: 0.4; transform: scale(0.85); }
    }

    .sys-val {
      font-size: 0.8rem;
      font-weight: 700;
      color: var(--text-secondary);
      font-family: var(--font-mono);
    }

    /* Light/Dark Mode Toggle Button */
    .theme-toggle-btn {
      display: flex;
      align-items: center;
      gap: 6px;
      background: var(--bg-surface-hover);
      border: 1px solid var(--border-medium);
      color: var(--text-primary);
      padding: 4px 10px;
      border-radius: var(--radius-sm);
      cursor: pointer;
      font-family: var(--font-mono);
      font-size: 0.68rem;
      font-weight: 700;
      transition: all 0.15s ease;
      white-space: nowrap;
    }

    .theme-toggle-btn:hover {
      border-color: var(--accent-orange);
      color: var(--accent-orange);
    }

    /* Main Operations Grid */
    .operations-grid {
      display: grid;
      grid-template-columns: 21% 58% 21%;
      gap: 10px;
      margin-bottom: 10px;
      align-items: stretch;
    }

    .panel-header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 8px 12px;
      border-bottom: 1px solid var(--border-subtle);
      background: var(--bg-panel-sub);
      border-top-left-radius: var(--radius-md);
      border-top-right-radius: var(--radius-md);
      transition: background-color 0.2s ease, border-color 0.2s ease;
    }

    .panel-title {
      font-size: 0.72rem;
      font-weight: 800;
      color: var(--text-primary);
      letter-spacing: 0.8px;
      text-transform: uppercase;
      display: flex;
      align-items: center;
      gap: 8px;
    }

    .badge-sub {
      font-size: 0.6rem;
      font-weight: 700;
      padding: 1px 6px;
      border-radius: var(--radius-sm);
      background: var(--bg-surface-hover);
      color: var(--text-secondary);
      font-family: var(--font-mono);
    }

    /* Left Panel: Communication Log */
    .left-panel {
      display: flex;
      flex-direction: column;
      height: 540px;
    }

    .comm-filters {
      display: flex;
      padding: 6px 10px;
      gap: 4px;
      border-bottom: 1px solid var(--border-subtle);
      background: var(--bg-panel);
      overflow-x: auto;
    }

    .filter-btn {
      background: transparent;
      border: 1px solid transparent;
      color: var(--text-muted);
      font-size: 0.65rem;
      font-weight: 700;
      padding: 2px 7px;
      border-radius: var(--radius-sm);
      cursor: pointer;
      font-family: var(--font-mono);
      transition: all 0.15s ease;
    }

    .filter-btn:hover {
      color: var(--text-primary);
      background: var(--bg-surface-hover);
    }

    .filter-btn.active {
      color: var(--accent-orange);
      background: var(--accent-orange-subtle);
      border-color: rgba(255, 122, 0, 0.3);
    }

    .comm-feed {
      flex: 1;
      overflow-y: auto;
      padding: 6px 8px;
      display: flex;
      flex-direction: column;
      gap: 4px;
    }

    .comm-row {
      padding: 5px 8px;
      border-radius: var(--radius-sm);
      background: var(--bg-panel-sub);
      border: 1px solid transparent;
      display: flex;
      flex-direction: column;
      gap: 2px;
      font-size: 0.7rem;
      transition: border-color 0.15s, background-color 0.15s;
    }

    .comm-row:hover {
      border-color: var(--border-medium);
      background: var(--bg-surface-hover);
    }

    .comm-row.new-entry {
      border-left: 2px solid var(--accent-orange);
    }

    .comm-meta {
      display: flex;
      justify-content: space-between;
      align-items: center;
      font-family: var(--font-mono);
      font-size: 0.62rem;
    }

    .comm-time {
      color: var(--text-muted);
    }

    .comm-actors {
      font-weight: 700;
      color: var(--text-secondary);
    }

    .comm-chip {
      font-size: 0.58rem;
      font-weight: 800;
      padding: 1px 4px;
      border-radius: 2px;
      text-transform: uppercase;
    }

    .chip-task { color: var(--color-green); background: var(--color-green-subtle); }
    .chip-cbba { color: var(--accent-orange); background: var(--accent-orange-subtle); }
    .chip-plan { color: var(--color-blue); background: var(--color-blue-subtle); }
    .chip-safety { color: var(--color-red); background: var(--color-red-subtle); }
    .chip-system { color: var(--text-secondary); background: var(--bg-surface-hover); }

    .comm-body {
      color: var(--text-primary);
      line-height: 1.25;
      word-break: break-word;
    }

    /* Center Panel: Warehouse Map (HERO) */
    .center-panel {
      display: flex;
      flex-direction: column;
      height: 540px;
      overflow: hidden;
    }

    .map-controls {
      display: flex;
      align-items: center;
      gap: 4px;
    }

    .ctrl-btn {
      background: var(--bg-surface-hover);
      border: 1px solid var(--border-subtle);
      color: var(--text-secondary);
      font-size: 0.68rem;
      font-weight: 700;
      padding: 3px 8px;
      border-radius: var(--radius-sm);
      cursor: pointer;
      font-family: var(--font-mono);
      transition: all 0.15s;
    }

    .ctrl-btn:hover {
      color: var(--text-primary);
      border-color: var(--border-medium);
      background: var(--border-medium);
    }

    .ctrl-btn.active {
      color: var(--accent-orange);
      border-color: var(--accent-orange);
      background: var(--accent-orange-subtle);
    }

    .map-canvas-wrap {
      flex: 1;
      position: relative;
      background: var(--map-bg);
      overflow: hidden;
      cursor: crosshair;
      transition: background-color 0.2s ease;
    }

    #map-svg {
      width: 100%;
      height: 100%;
      display: block;
    }

    /* Map Legend Overlay */
    .map-legend {
      position: absolute;
      bottom: 8px;
      left: 8px;
      background: var(--map-legend-bg);
      backdrop-filter: blur(4px);
      border: 1px solid var(--border-subtle);
      border-radius: var(--radius-sm);
      padding: 4px 8px;
      font-size: 0.6rem;
      color: var(--text-secondary);
      font-family: var(--font-mono);
      display: flex;
      gap: 10px;
      align-items: center;
      pointer-events: none;
      z-index: 10;
      box-shadow: var(--shadow-card);
    }

    .legend-item {
      display: flex;
      align-items: center;
      gap: 4px;
    }

    .legend-glyph {
      display: inline-block;
      width: 10px;
      height: 3px;
      border-radius: 1px;
    }

    /* Contextual Robot Popup (One at a time) */
    .robot-popup {
      position: absolute;
      background: var(--bg-panel);
      border: 1px solid var(--accent-orange);
      border-radius: var(--radius-md);
      padding: 8px 10px;
      min-width: 160px;
      box-shadow: var(--shadow-card);
      z-index: 50;
      display: none;
      flex-direction: column;
      gap: 4px;
      pointer-events: auto;
    }

    .popup-header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      border-bottom: 1px solid var(--border-subtle);
      padding-bottom: 4px;
    }

    .popup-id {
      font-size: 0.78rem;
      font-weight: 800;
      color: var(--text-primary);
      font-family: var(--font-mono);
    }

    .popup-close {
      background: transparent;
      border: none;
      color: var(--text-muted);
      cursor: pointer;
      font-size: 0.75rem;
      padding: 0 2px;
    }

    .popup-close:hover {
      color: var(--text-primary);
    }

    .popup-row {
      display: flex;
      justify-content: space-between;
      font-size: 0.65rem;
      color: var(--text-secondary);
    }

    .popup-val {
      font-weight: 700;
      font-family: var(--font-mono);
      color: var(--text-primary);
    }

    /* Right Panel: Robot Status */
    .right-panel {
      display: flex;
      flex-direction: column;
      height: 540px;
    }

    .robot-feed {
      flex: 1;
      overflow-y: auto;
      padding: 6px 8px;
      display: flex;
      flex-direction: column;
      gap: 6px;
    }

    .robot-card {
      padding: 7px 9px;
      background: var(--bg-panel-sub);
      border: 1px solid transparent;
      border-radius: var(--radius-sm);
      cursor: pointer;
      display: flex;
      flex-direction: column;
      gap: 4px;
      transition: all 0.15s;
    }

    .robot-card:hover {
      border-color: var(--border-medium);
      background: var(--bg-surface-hover);
    }

    .robot-card.selected {
      border-color: var(--accent-orange);
      background: var(--accent-orange-subtle);
    }

    .rc-top {
      display: flex;
      justify-content: space-between;
      align-items: center;
    }

    .rc-id {
      font-size: 0.75rem;
      font-weight: 800;
      color: var(--text-primary);
      font-family: var(--font-mono);
    }

    .rc-badge {
      font-size: 0.6rem;
      font-weight: 700;
      padding: 1px 5px;
      border-radius: var(--radius-sm);
      font-family: var(--font-mono);
    }

    .rc-health-badge {
      font-size: 0.58rem;
      font-weight: 700;
      padding: 1px 5px;
      border-radius: var(--radius-sm);
      font-family: var(--font-mono);
      text-transform: uppercase;
    }
    .health-healthy {
      background: var(--color-green-subtle);
      color: var(--color-green);
      border: 1px solid var(--color-green);
    }
    .health-failed {
      background: var(--color-red-subtle);
      color: var(--color-red);
      border: 1px solid var(--color-red);
      animation: pulse-red 1.2s infinite;
    }
    .health-comm-loss {
      background: var(--color-amber-subtle);
      color: var(--color-amber);
      border: 1px solid var(--color-amber);
    }
    .health-estop {
      background: var(--color-red-subtle);
      color: var(--color-red);
      border: 1px solid var(--color-red);
    }
    @keyframes pulse-red {
      0% { opacity: 1; }
      50% { opacity: 0.5; }
      100% { opacity: 1; }
    }

    .state-moving, .state-navigating { color: var(--color-green); background: var(--color-green-subtle); }
    .state-picking, .state-executing { color: var(--color-green); background: var(--color-green-subtle); }
    .state-charging { color: var(--color-blue); background: var(--color-blue-subtle); }
    .state-idle { color: var(--text-secondary); background: var(--bg-surface-hover); }
    .state-error { color: var(--color-red); background: var(--color-red-subtle); }

    .rc-telemetry {
      display: flex;
      justify-content: space-between;
      font-size: 0.64rem;
      color: var(--text-muted);
      align-items: center;
    }

    .rc-bar-track {
      width: 100%;
      height: 3px;
      background: var(--border-subtle);
      border-radius: 2px;
      overflow: hidden;
    }

    .rc-bar-fill {
      height: 100%;
      background: var(--color-green);
      border-radius: 2px;
      transition: width 0.3s;
    }

    .rc-task-desc {
      font-size: 0.62rem;
      color: var(--text-secondary);
      white-space: nowrap;
      overflow: hidden;
      text-overflow: ellipsis;
      font-family: var(--font-mono);
    }

    .robot-tally-bar {
      padding: 6px 10px;
      border-top: 1px solid var(--border-subtle);
      background: var(--bg-panel-sub);
      display: flex;
      justify-content: space-between;
      font-size: 0.6rem;
      font-family: var(--font-mono);
      color: var(--text-muted);
      border-bottom-left-radius: var(--radius-md);
      border-bottom-right-radius: var(--radius-md);
    }

    .robot-tally-bar b {
      color: var(--text-primary);
    }

    /* Bottom Panel: Task Operations (Secondary Hero) */
    .bottom-panel {
      display: flex;
      flex-direction: column;
      min-height: 240px;
    }

    .task-controls-bar {
      display: flex;
      justify-content: space-between;
      align-items: center;
      padding: 6px 12px;
      border-bottom: 1px solid var(--border-subtle);
      background: var(--bg-panel);
    }

    .task-tabs {
      display: flex;
      gap: 6px;
    }

    .task-tab-btn {
      background: transparent;
      border: 1px solid transparent;
      color: var(--text-muted);
      font-size: 0.68rem;
      font-weight: 700;
      padding: 4px 10px;
      border-radius: var(--radius-sm);
      cursor: pointer;
      font-family: var(--font-mono);
      transition: all 0.15s;
    }

    .task-tab-btn:hover {
      color: var(--text-primary);
      background: var(--bg-surface-hover);
    }

    .task-tab-btn.active {
      color: var(--text-primary);
      background: var(--bg-surface-hover);
      border-color: var(--border-medium);
    }

    .btn-create-task {
      background: var(--accent-orange);
      color: #ffffff;
      border: none;
      padding: 5px 12px;
      border-radius: var(--radius-sm);
      font-size: 0.7rem;
      font-weight: 800;
      cursor: pointer;
      display: flex;
      align-items: center;
      gap: 6px;
      transition: background 0.15s;
      font-family: var(--font-mono);
    }

    .btn-create-task:hover {
      background: var(--accent-orange-hover);
    }

    /* Task Table */
    .task-table-wrap {
      flex: 1;
      overflow-x: auto;
      overflow-y: auto;
      max-height: 280px;
    }

    table.task-table {
      width: 100%;
      border-collapse: collapse;
      font-size: 0.68rem;
      text-align: left;
    }

    table.task-table th {
      background: var(--bg-panel-sub);
      color: var(--text-muted);
      padding: 6px 10px;
      font-weight: 700;
      font-family: var(--font-mono);
      border-bottom: 1px solid var(--border-subtle);
      position: sticky;
      top: 0;
      z-index: 5;
    }

    table.task-table td {
      padding: 6px 10px;
      border-bottom: 1px solid var(--table-border);
      color: var(--text-secondary);
      font-family: var(--font-mono);
      white-space: nowrap;
    }

    table.task-table tr:hover td {
      background: var(--bg-surface-hover);
      color: var(--text-primary);
    }

    table.task-table tr.selected td {
      background: var(--accent-orange-subtle);
      border-bottom-color: rgba(255, 122, 0, 0.3);
    }

    .task-badge {
      display: inline-block;
      padding: 2px 6px;
      border-radius: var(--radius-sm);
      font-size: 0.58rem;
      font-weight: 800;
      text-transform: uppercase;
    }

    .badge-pending { color: var(--color-amber); background: var(--color-amber-subtle); }
    .badge-bidding { color: var(--color-blue); background: var(--color-blue-subtle); }
    .badge-assigned { color: var(--color-blue); background: var(--color-blue-subtle); }
    .badge-in_progress { color: var(--color-green); background: var(--color-green-subtle); }
    .badge-completed { color: var(--color-green); background: var(--color-green-subtle); }
    .badge-failed { color: var(--color-red); background: var(--color-red-subtle); }
    .badge-cancelled { color: var(--text-muted); background: var(--bg-surface-hover); }
    .badge-requeued { color: var(--color-amber); background: var(--color-amber-subtle); }

    .tbl-action-btn {
      background: transparent;
      border: 1px solid var(--border-subtle);
      color: var(--text-secondary);
      padding: 2px 6px;
      border-radius: var(--radius-sm);
      cursor: pointer;
      font-size: 0.6rem;
      font-family: var(--font-mono);
      margin-right: 4px;
      transition: all 0.15s;
    }

    .tbl-action-btn:hover {
      color: var(--text-primary);
      border-color: var(--border-medium);
      background: var(--bg-surface-hover);
    }

    .tbl-action-cancel:hover {
      color: var(--color-red);
      border-color: var(--color-red);
    }

    .tbl-action-requeue:hover {
      color: var(--color-amber);
      border-color: var(--color-amber);
    }

    /* Task Detail Slide-Over Drawer */
    .detail-drawer {
      position: fixed;
      top: 0;
      right: -420px;
      width: 400px;
      height: 100vh;
      background: var(--bg-panel);
      border-left: 1px solid var(--border-subtle);
      box-shadow: var(--shadow-card);
      z-index: 100;
      transition: right 0.25s cubic-bezier(0.16, 1, 0.3, 1);
      display: flex;
      flex-direction: column;
      padding: 16px;
      gap: 12px;
    }

    .detail-drawer.open {
      right: 0;
    }

    .drawer-header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      border-bottom: 1px solid var(--border-subtle);
      padding-bottom: 10px;
    }

    .drawer-title {
      font-size: 1rem;
      font-weight: 800;
      font-family: var(--font-mono);
      display: flex;
      align-items: center;
      gap: 8px;
    }

    .drawer-close {
      background: transparent;
      border: none;
      color: var(--text-muted);
      font-size: 1.1rem;
      cursor: pointer;
    }

    .drawer-close:hover {
      color: var(--text-primary);
    }

    .drawer-section {
      display: flex;
      flex-direction: column;
      gap: 4px;
      background: var(--bg-panel-sub);
      border: 1px solid var(--border-subtle);
      border-radius: var(--radius-sm);
      padding: 8px 10px;
      font-size: 0.68rem;
    }

    .drawer-sec-title {
      font-size: 0.6rem;
      font-weight: 800;
      color: var(--text-muted);
      letter-spacing: 0.6px;
      text-transform: uppercase;
      margin-bottom: 2px;
    }

    .drawer-row {
      display: flex;
      justify-content: space-between;
      color: var(--text-secondary);
      font-family: var(--font-mono);
    }

    .drawer-row b {
      color: var(--text-primary);
    }

    .bids-table {
      width: 100%;
      border-collapse: collapse;
      margin-top: 4px;
    }

    .bids-table th, .bids-table td {
      padding: 3px 6px;
      font-size: 0.62rem;
      font-family: var(--font-mono);
      text-align: left;
    }

    .bids-table th {
      color: var(--text-muted);
      border-bottom: 1px solid var(--border-subtle);
    }

    .winner-tag {
      color: var(--accent-orange);
      font-weight: 800;
    }

    .drawer-actions {
      display: flex;
      gap: 8px;
      margin-top: auto;
      padding-top: 10px;
      border-top: 1px solid var(--border-subtle);
    }

    .drawer-btn {
      flex: 1;
      padding: 7px 10px;
      border-radius: var(--radius-sm);
      font-size: 0.7rem;
      font-weight: 700;
      cursor: pointer;
      font-family: var(--font-mono);
      transition: all 0.15s;
    }

    .btn-cancel-act {
      background: transparent;
      border: 1px solid var(--color-red);
      color: var(--color-red);
    }

    .btn-cancel-act:hover {
      background: var(--color-red-subtle);
    }

    .btn-requeue-act {
      background: transparent;
      border: 1px solid var(--color-amber);
      color: var(--color-amber);
    }

    .btn-requeue-act:hover {
      background: var(--color-amber-subtle);
    }

    /* Create Task Modal */
    .modal-overlay {
      position: fixed;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background: var(--modal-backdrop);
      backdrop-filter: blur(4px);
      z-index: 200;
      display: none;
      justify-content: center;
      align-items: center;
    }

    .modal-box {
      background: var(--bg-panel);
      border: 1px solid var(--border-medium);
      border-radius: var(--radius-md);
      width: 460px;
      padding: 16px;
      display: flex;
      flex-direction: column;
      gap: 12px;
      box-shadow: var(--shadow-card);
    }

    .modal-header {
      display: flex;
      justify-content: space-between;
      align-items: center;
      border-bottom: 1px solid var(--border-subtle);
      padding-bottom: 8px;
    }

    .modal-title {
      font-size: 0.95rem;
      font-weight: 800;
      color: var(--text-primary);
      letter-spacing: 0.5px;
    }

    .form-group {
      display: flex;
      flex-direction: column;
      gap: 4px;
    }

    .form-label {
      font-size: 0.65rem;
      font-weight: 700;
      color: var(--text-secondary);
      text-transform: uppercase;
      letter-spacing: 0.5px;
    }

    .form-row {
      display: flex;
      gap: 8px;
    }

    .form-input, .form-select {
      background: var(--bg-panel-sub);
      border: 1px solid var(--border-subtle);
      border-radius: var(--radius-sm);
      color: var(--text-primary);
      padding: 6px 8px;
      font-size: 0.72rem;
      font-family: var(--font-mono);
      outline: none;
      flex: 1;
    }

    .form-input:focus, .form-select:focus {
      border-color: var(--accent-orange);
    }

    .preset-chips {
      display: flex;
      gap: 6px;
      margin-top: 2px;
    }

    .preset-chip {
      background: var(--bg-surface-hover);
      border: 1px solid var(--border-subtle);
      color: var(--text-muted);
      padding: 2px 6px;
      border-radius: var(--radius-sm);
      font-size: 0.6rem;
      font-family: var(--font-mono);
      cursor: pointer;
    }

    .preset-chip:hover {
      color: var(--text-primary);
      border-color: var(--border-medium);
    }

    .modal-footer {
      display: flex;
      justify-content: flex-end;
      gap: 8px;
      border-top: 1px solid var(--border-subtle);
      padding-top: 10px;
    }

    .btn-modal-cancel {
      background: transparent;
      border: 1px solid var(--border-subtle);
      color: var(--text-secondary);
      padding: 6px 12px;
      border-radius: var(--radius-sm);
      font-size: 0.7rem;
      cursor: pointer;
      font-family: var(--font-mono);
    }

    .btn-modal-submit {
      background: var(--accent-orange);
      border: none;
      color: #ffffff;
      padding: 6px 14px;
      border-radius: var(--radius-sm);
      font-size: 0.7rem;
      font-weight: 800;
      cursor: pointer;
      font-family: var(--font-mono);
    }

    .btn-modal-submit:hover {
      background: var(--accent-orange-hover);
    }

    /* Responsive */
    @media (max-width: 1200px) {
      .operations-grid {
        grid-template-columns: 1fr;
      }
      .left-panel, .center-panel, .right-panel {
        height: 440px;
      }
    }
  </style>
</head>
<body>

  <!-- Top Header Bar -->
  <header class="header-bar">
    <div class="brand-group">
      <div class="brand-title">NRDAS <span class="brand-accent">///</span></div>
      <div class="brand-subtitle">NETWORK RESILIENT • DECENTRALIZED • AUTONOMOUS • SYSTEMS</div>
    </div>

    <div class="header-metrics">
      <div class="metric-item">
        <span class="metric-label">FLEET</span>
        <span class="metric-value" style="color: var(--color-green);" id="h-fleet">0 / 0 ONLINE</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item">
        <span class="metric-label">MOVING</span>
        <span class="metric-value" id="h-moving">0</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item">
        <span class="metric-label">CHARGING</span>
        <span class="metric-value" style="color: var(--color-blue);" id="h-charging">0</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item">
        <span class="metric-label">IDLE</span>
        <span class="metric-value" style="color: var(--text-muted);" id="h-idle">0</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item">
        <span class="metric-label">CONFLICTS</span>
        <span class="metric-value" id="h-conflicts">0</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item">
        <span class="metric-label">COLLISIONS</span>
        <span class="metric-value" style="color: var(--color-green);" id="h-collisions">0</span>
      </div>
    </div>

    <div class="system-group">
      <div class="metric-item" style="align-items: flex-start;">
        <span class="metric-label">SYSTEM</span>
        <span class="sys-badge"><span class="pulse-dot"></span> ONLINE</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item" style="align-items: flex-start;">
        <span class="metric-label">COMM</span>
        <span class="sys-val" id="h-comm">NORMAL</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item" style="align-items: flex-start;">
        <span class="metric-label">COMPUTE</span>
        <span class="sys-val" id="h-compute">ADAPTIVE</span>
      </div>
      <div class="metric-sep"></div>
      <div class="metric-item" style="align-items: flex-start;">
        <span class="metric-label">SIM TIME</span>
        <span class="sys-val" id="h-sim">0.0 s</span>
      </div>
      <div class="metric-sep"></div>
      <button class="theme-toggle-btn" id="theme-toggle" onclick="toggleTheme()" title="Toggle Light / Dark Theme">
        <span id="theme-icon">☀️</span> <span id="theme-label">LIGHT</span>
      </button>
    </div>
  </header>

  <!-- Main 3-Column Operations Grid -->
  <main class="operations-grid">

    <!-- Left Column: Communication Log -->
    <section class="console-panel left-panel">
      <div class="panel-header">
        <span class="panel-title">COMMUNICATION <span class="badge-sub">LIVE</span></span>
        <span style="font-size: 0.6rem; color: var(--text-muted); font-family: var(--font-mono);" id="comm-count">0 msgs</span>
      </div>
      <div class="comm-filters">
        <button class="filter-btn active" onclick="setCommFilter('ALL')">ALL</button>
        <button class="filter-btn" onclick="setCommFilter('CBBA')">CBBA</button>
        <button class="filter-btn" onclick="setCommFilter('TASK')">TASK</button>
        <button class="filter-btn" onclick="setCommFilter('PLAN')">PLAN</button>
        <button class="filter-btn" onclick="setCommFilter('SAFETY')">SAFETY</button>
        <button class="filter-btn" onclick="setCommFilter('SYSTEM')">SYSTEM</button>
      </div>
      <div class="comm-feed" id="comm-feed">
        <!-- Rows injected dynamically -->
      </div>
    </section>

    <!-- Center Column: Warehouse Map (HERO ELEMENT) -->
    <section class="console-panel center-panel">
      <div class="panel-header">
        <span class="panel-title">WAREHOUSE MAP <span class="badge-sub">LIVE FLEET VIEW</span></span>
        <div class="map-controls">
          <button class="ctrl-btn" onclick="zoomMap(-0.15)">−</button>
          <button class="ctrl-btn" onclick="resetMapZoom()">100%</button>
          <button class="ctrl-btn" onclick="zoomMap(0.15)">+</button>
          <button class="ctrl-btn" id="btn-view-2d" class="active" onclick="setViewMode('2D')">2D</button>
          <button class="ctrl-btn" id="btn-view-3d" onclick="setViewMode('3D')">3D</button>
        </div>
      </div>

      <div class="map-canvas-wrap" id="map-wrap">
        <svg id="map-svg" viewBox="0 0 32 32">
          <defs>
            <pattern id="rack-hatch" width="0.8" height="0.8" patternUnits="userSpaceOnUse" patternTransform="rotate(45)">
              <line id="rack-hatch-line" x1="0" y1="0" x2="0" y2="0.8" stroke="#25354c" stroke-width="0.15" />
            </pattern>
          </defs>
          <g id="map-grid-layer"></g>
          <g id="map-zones-layer"></g>
          <g id="map-racks-layer"></g>
          <g id="map-aisles-layer"></g>
          <g id="map-blockages-layer"></g>
          <g id="map-routes-layer"></g>
          <g id="map-robots-layer"></g>
        </svg>

        <!-- Compact Map Legend -->
        <div class="map-legend">
          <div class="legend-item"><span class="legend-glyph" style="background: var(--accent-orange);"></span> PATH</div>
          <div class="legend-item"><span class="legend-glyph" style="background: var(--text-muted); border-top: 1px dashed var(--text-muted);"></span> PLAN</div>
          <div class="legend-item"><span class="legend-glyph" style="background: var(--color-blue); border-top: 1px dotted var(--color-blue);"></span> ALT</div>
          <div class="legend-item"><span id="leg-rack-glyph" style="color: var(--text-secondary);">■</span> RACK</div>
          <div class="legend-item"><span style="color: var(--color-green);">□</span> ZONE</div>
          <div class="legend-item"><span style="color: var(--accent-orange);">●</span> ROBOT</div>
          <div class="legend-item"><span style="color: var(--color-red);">●</span> FAULT</div>
          <div class="legend-item"><span style="color: var(--color-red); font-weight: bold;">✕</span> BLOCKAGE</div>
        </div>

        <!-- Single Contextual Robot Popup -->
        <div class="robot-popup" id="robot-popup">
          <div class="popup-header">
            <span class="popup-id" id="pop-id">AMR-00</span>
            <button class="popup-close" onclick="closeRobotPopup()">✕</button>
          </div>
          <div class="popup-row">
            <span>Status:</span>
            <span class="popup-val" id="pop-state">IDLE</span>
          </div>
          <div class="popup-row">
            <span>Health:</span>
            <span class="popup-val" id="pop-health" style="color: var(--color-green);">HEALTHY</span>
          </div>
          <div class="popup-row">
            <span>Battery:</span>
            <span class="popup-val" id="pop-batt">100%</span>
          </div>
          <div class="popup-row">
            <span>Task:</span>
            <span class="popup-val" id="pop-task">— None —</span>
          </div>
          <div class="popup-row">
            <span>Progress:</span>
            <span class="popup-val" id="pop-prog">0%</span>
          </div>
          <div class="popup-row">
            <span>Position:</span>
            <span class="popup-val font-mono" id="pop-pos">(0.0, 0.0)</span>
          </div>
        </div>
      </div>
    </section>

    <!-- Right Column: Robot Status -->
    <section class="console-panel right-panel">
      <div class="panel-header">
        <span class="panel-title">ROBOT STATUS <span class="badge-sub" id="rc-online-badge">0 ONLINE</span></span>
      </div>
      <div class="robot-feed" id="robot-feed">
        <!-- Robot cards injected dynamically -->
      </div>
      <div class="robot-tally-bar">
        <span>MOV <b id="t-mov">0</b></span>
        <span>PICK <b id="t-pick">0</b></span>
        <span>CHG <b id="t-chg">0</b></span>
        <span>IDLE <b id="t-idle">0</b></span>
        <span>ERR <b id="t-err" style="color: var(--color-green);">0</b></span>
      </div>
    </section>

  </main>

  <!-- Bottom Panel: Task Operations (Secondary Hero) -->
  <section class="console-panel bottom-panel">
    <div class="panel-header">
      <span class="panel-title">TASK OPERATIONS <span class="badge-sub">DISPATCH & CBBA CONSENSUS</span></span>
      <button class="btn-create-task" onclick="openCreateTaskModal()">
        <span>+</span> CREATE TASK
      </button>
    </div>
    <div class="task-controls-bar">
      <div class="task-tabs">
        <button class="task-tab-btn active" onclick="setTaskTab('ALL')">ALL (<span id="cnt-all">0</span>)</button>
        <button class="task-tab-btn" onclick="setTaskTab('AVAILABLE')">AVAILABLE (<span id="cnt-avail">0</span>)</button>
        <button class="task-tab-btn" onclick="setTaskTab('ASSIGNED')">ASSIGNED (<span id="cnt-asgn">0</span>)</button>
        <button class="task-tab-btn" onclick="setTaskTab('IN_PROGRESS')">IN PROGRESS (<span id="cnt-prog">0</span>)</button>
        <button class="task-tab-btn" onclick="setTaskTab('COMPLETED')">COMPLETED (<span id="cnt-comp">0</span>)</button>
      </div>
    </div>

    <div class="task-table-wrap">
      <table class="task-table">
        <thead>
          <tr>
            <th>TASK ID</th>
            <th>ROUTE (PICKUP → DROPOFF)</th>
            <th>PRIORITY</th>
            <th>ASSIGNED AMR</th>
            <th>STATUS</th>
            <th>PROGRESS</th>
            <th>CREATED</th>
            <th>ACTIONS</th>
          </tr>
        </thead>
        <tbody id="task-tbody">
          <!-- Rows injected dynamically -->
        </tbody>
      </table>
    </div>
  </section>

  <!-- Task Detail Slide-Over Drawer -->
  <aside class="detail-drawer" id="task-drawer">
    <div class="drawer-header">
      <div class="drawer-title">
        <span id="dr-task-id">TASK T000</span>
        <span class="task-badge" id="dr-task-badge">PENDING</span>
      </div>
      <button class="drawer-close" onclick="closeTaskDrawer()">✕</button>
    </div>

    <div class="drawer-section">
      <span class="drawer-sec-title">ROUTE SPECIFICATION</span>
      <div class="drawer-row"><span>Pickup:</span><b id="dr-pickup">(0.00, 0.00)</b></div>
      <div class="drawer-row"><span>Dropoff:</span><b id="dr-dropoff">(0.00, 0.00)</b></div>
      <div class="drawer-row"><span>Priority:</span><b id="dr-priority">NORMAL (2)</b></div>
    </div>

    <div class="drawer-section">
      <span class="drawer-sec-title">EXECUTION & ASSIGNMENT</span>
      <div class="drawer-row"><span>Assigned Robot:</span><b id="dr-robot">— None —</b></div>
      <div class="drawer-row"><span>Consensus Status:</span><b id="dr-consensus">● CONVERGED</b></div>
      <div class="drawer-row"><span>Subgoal Progress:</span><b id="dr-progress">0%</b></div>
    </div>

    <div class="drawer-section">
      <span class="drawer-sec-title">CBBA ALLOCATION INSPECTOR</span>
      <div class="drawer-row"><span>Winner Robot:</span><b class="winner-tag" id="dr-winner">—</b></div>
      <div class="drawer-row"><span>Winning Marginal Bid:</span><b id="dr-winning-bid">—</b></div>
      <table class="bids-table">
        <thead>
          <tr>
            <th>AMR</th>
            <th>BID VALUE</th>
            <th>RESULT</th>
          </tr>
        </thead>
        <tbody id="dr-bids-tbody">
          <!-- Bids injected dynamically -->
        </tbody>
      </table>
    </div>

    <div class="drawer-actions">
      <button class="drawer-btn btn-cancel-act" id="dr-btn-cancel" onclick="drawerCancelTask()">CANCEL TASK</button>
      <button class="drawer-btn btn-requeue-act" id="dr-btn-requeue" onclick="drawerRequeueTask()">REQUEUE TASK</button>
    </div>
  </aside>

  <!-- Create Task Modal Dialog -->
  <div class="modal-overlay" id="modal-create-task" onclick="handleModalBackdropClick(event)">
    <div class="modal-box">
      <div class="modal-header">
        <span class="modal-title">CREATE TASK</span>
        <button class="popup-close" onclick="closeCreateTaskModal()">✕</button>
      </div>

      <div class="form-group">
        <span class="form-label">Pickup Coordinates (X, Y)</span>
        <div class="form-row">
          <input type="number" step="0.5" id="inp-pick-x" class="form-input" placeholder="X (e.g. 2.5)">
          <input type="number" step="0.5" id="inp-pick-y" class="form-input" placeholder="Y (e.g. 4.0)">
        </div>
        <div class="preset-chips">
          <span class="preset-chip" onclick="setCoords(2.5, 4.0, 14.0, 12.0)">Zone A → B</span>
          <span class="preset-chip" onclick="setCoords(14.0, 12.0, 22.0, 6.0)">Zone B → C</span>
          <span class="preset-chip" onclick="setCoords(22.0, 6.0, 5.0, 18.0)">Zone C → D</span>
        </div>
      </div>

      <div class="form-group">
        <span class="form-label">Dropoff Coordinates (X, Y)</span>
        <div class="form-row">
          <input type="number" step="0.5" id="inp-drop-x" class="form-input" placeholder="X (e.g. 14.0)">
          <input type="number" step="0.5" id="inp-drop-y" class="form-input" placeholder="Y (e.g. 12.0)">
        </div>
      </div>

      <div class="form-row">
        <div class="form-group" style="flex: 1;">
          <span class="form-label">Priority</span>
          <select id="inp-priority" class="form-select">
            <option value="1">LOW (1)</option>
            <option value="2" selected>NORMAL (2)</option>
            <option value="3">HIGH (3)</option>
            <option value="4">CRITICAL (4)</option>
          </select>
        </div>

        <div class="form-group" style="flex: 1;">
          <span class="form-label">Assignment Method</span>
          <select id="inp-method" class="form-select" onchange="toggleAssignmentMethod()">
            <option value="AUTO" selected>AUTO (CBBA Auction)</option>
            <option value="DIRECT">DIRECT (Target AMR)</option>
          </select>
        </div>
      </div>

      <div class="form-row">
        <div class="form-group" style="flex: 1;">
          <span class="form-label">Requested Robot</span>
          <select id="inp-robot" class="form-select" disabled>
            <option value="">— AUTO CBBA —</option>
          </select>
        </div>

        <div class="form-group" style="flex: 1;">
          <span class="form-label">Deadline (Sec, Optional)</span>
          <input type="number" step="10" id="inp-deadline" class="form-input" placeholder="0 = None">
        </div>
      </div>

      <div class="modal-footer">
        <button class="btn-modal-cancel" onclick="closeCreateTaskModal()">CANCEL</button>
        <button class="btn-modal-submit" onclick="submitCreateTask()">CREATE TASK</button>
      </div>
    </div>
  </div>

  <script>
    // Theme Management
    function applyTheme(theme) {
      document.documentElement.setAttribute('data-theme', theme);
      try {
        localStorage.setItem('nrdas_theme', theme);
      } catch(e) {}

      const isLight = (theme === 'light');
      const icon = document.getElementById('theme-icon');
      const label = document.getElementById('theme-label');
      if (icon) icon.innerText = isLight ? '🌙' : '☀️';
      if (label) label.innerText = isLight ? 'DARK' : 'LIGHT';

      // Re-initialize map static layers for new theme colors
      initWarehouseStaticLayers();
      if (g_state) {
        renderMap();
      }
    }

    function toggleTheme() {
      const current = document.documentElement.getAttribute('data-theme') || 'dark';
      const next = (current === 'light') ? 'dark' : 'light';
      applyTheme(next);
    }

    // State management
    let g_state = null;
    let g_selectedRobotId = null;
    let g_selectedTaskId = null;
    let g_commFilter = 'ALL';
    let g_taskTab = 'ALL';
    let g_mapZoom = 1.0;
    let g_is3D = false;

    // Default warehouse dimensions
    const W_WIDTH = 32.0;
    const W_HEIGHT = 32.0;

    // Map Layers
    const elGridLayer = document.getElementById('map-grid-layer');
    const elZonesLayer = document.getElementById('map-zones-layer');
    const elRacksLayer = document.getElementById('map-racks-layer');
    const elAislesLayer = document.getElementById('map-aisles-layer');
    const elRoutesLayer = document.getElementById('map-routes-layer');
    const elRobotsLayer = document.getElementById('map-robots-layer');

    function getRobotsArray() {
      if (!g_state || !g_state.fleet) return [];
      const flRobots = g_state.fleet.robots;
      if (Array.isArray(flRobots)) return flRobots;
      if (typeof flRobots === 'object' && flRobots !== null) return Object.values(flRobots);
      return [];
    }

    function getRobotsMap() {
      if (!g_state || !g_state.fleet) return {};
      if (g_state.fleet.robots_by_id) return g_state.fleet.robots_by_id;
      const flRobots = g_state.fleet.robots;
      if (Array.isArray(flRobots)) {
        const map = {};
        flRobots.forEach(r => { if (r && r.robot_id) map[r.robot_id] = r; });
        return map;
      }
      if (typeof flRobots === 'object' && flRobots !== null) return flRobots;
      return {};
    }

    function getAllTasksMap() {
      if (!g_state || !g_state.tasks) return {};
      if (g_state.tasks.all_tasks && Object.keys(g_state.tasks.all_tasks).length > 0) {
        return g_state.tasks.all_tasks;
      }
      const list = g_state.tasks.tasks || [];
      const map = {};
      list.forEach(t => {
        const tid = t.id || t.task_id;
        if (!tid) return;
        const pk = t.pickup || [t.pickup_x || 0, t.pickup_y || 0];
        const dp = t.dropoff || [t.dropoff_x || 0, t.dropoff_y || 0];
        map[tid] = {
          id: tid,
          pickup_x: pk[0] || 0,
          pickup_y: pk[1] || 0,
          dropoff_x: dp[0] || 0,
          dropoff_y: dp[1] || 0,
          priority: t.priority || 2,
          status: t.status || 'PENDING',
          assigned_robot: t.assigned_robot || t.robot || '—',
          requested_robot: t.requested_robot || '',
          progress_pct: t.progress_pct || (t.status === 'COMPLETED' ? 100 : (t.status === 'IN_PROGRESS' ? 50 : 0)),
          created_time: t.created_time || '—',
        };
      });
      return map;
    }

    function initWarehouseStaticLayers() {
      const isLight = (document.documentElement.getAttribute('data-theme') === 'light');

      // Grid line colors
      const strokeMajor = isLight ? '#cbd5e1' : '#262626';
      const strokeMinor = isLight ? '#e2e8f0' : '#141414';
      const strokeBorder = isLight ? '#94a3b8' : '#333333';

      let gridSvg = '';
      for (let x = 0; x <= 32; x += 1) {
        let isMajor = (x % 5 === 0);
        gridSvg += `<line x1="${x}" y1="0" x2="${x}" y2="32" stroke="${isMajor ? strokeMajor : strokeMinor}" stroke-width="${isMajor ? '0.08' : '0.04'}" />`;
      }
      for (let y = 0; y <= 32; y += 1) {
        let isMajor = (y % 5 === 0);
        gridSvg += `<line x1="0" y1="${y}" x2="32" y2="${y}" stroke="${isMajor ? strokeMajor : strokeMinor}" stroke-width="${isMajor ? '0.08' : '0.04'}" />`;
      }
      gridSvg += `<rect x="0.2" y="0.2" width="31.6" height="31.6" fill="none" stroke="${strokeBorder}" stroke-width="0.2" />`;
      elGridLayer.innerHTML = gridSvg;

      // Storage racks
      const mapMeta = (g_state && g_state.map) || {};
      const rackFill = isLight ? '#334155' : '#141414';
      const rackStroke = isLight ? '#1e293b' : '#2e2e2e';
      const hatchStroke = isLight ? '#475569' : '#383838';

      const hatchLine = document.getElementById('rack-hatch-line');
      if (hatchLine) hatchLine.setAttribute('stroke', hatchStroke);

      let racksHtml = '';
      (mapMeta.storage_racks || []).forEach(rack => {
        const rx = rack.min_x;
        const ry = rack.min_y;
        const rw = rack.max_x - rack.min_x;
        const rh = rack.max_y - rack.min_y;
        racksHtml += `<rect x="${rx}" y="${ry}" width="${rw}" height="${rh}" fill="${rackFill}" stroke="${rackStroke}" stroke-width="0.15" rx="0.2" />`;
        racksHtml += `<rect x="${rx}" y="${ry}" width="${rw}" height="${rh}" fill="url(#rack-hatch)" />`;
      });
      elRacksLayer.innerHTML = racksHtml;

      // Operational Zones
      let zonesHtml = '';
      (mapMeta.pickup_zones || []).forEach((z, i) => {
        zonesHtml += `<rect x="${z.x - 1}" y="${z.y - 1}" width="2" height="2" fill="var(--color-green-subtle)" stroke="var(--color-green)" stroke-dasharray="0.3,0.3" stroke-width="0.1" />`;
        zonesHtml += `<text x="${z.x}" y="${z.y + 0.3}" fill="var(--color-green)" font-size="0.65" font-weight="700" text-anchor="middle" font-family="monospace">P${i+1}</text>`;
      });
      (mapMeta.dropoff_zones || []).forEach((z, i) => {
        zonesHtml += `<rect x="${z.x - 1}" y="${z.y - 1}" width="2" height="2" fill="var(--color-blue-subtle)" stroke="var(--color-blue)" stroke-dasharray="0.3,0.3" stroke-width="0.1" />`;
        zonesHtml += `<text x="${z.x}" y="${z.y + 0.3}" fill="var(--color-blue)" font-size="0.65" font-weight="700" text-anchor="middle" font-family="monospace">D${i+1}</text>`;
      });
      (mapMeta.charging_stations || []).forEach((z, i) => {
        zonesHtml += `<rect x="${z.x - 1}" y="${z.y - 1}" width="2" height="2" fill="var(--color-amber-subtle)" stroke="var(--color-amber)" stroke-dasharray="0.3,0.3" stroke-width="0.1" />`;
        zonesHtml += `<text x="${z.x}" y="${z.y + 0.3}" fill="var(--color-amber)" font-size="0.65" font-weight="700" text-anchor="middle" font-family="monospace">⚡</text>`;
      });
      elZonesLayer.innerHTML = zonesHtml;

      // Aisle markers
      const aisleColor = isLight ? '#64748b' : '#71717a';
      // 4. Aisles / One-Way Directional Guides
      let aislesHtml = '';
      (mapMeta.aisles || []).forEach(aisle => {
        const ax = aisle.x || 0;
        const ay = aisle.y || 0;
        const len = aisle.length || 10;
        const dir = aisle.direction || 'EAST'; // EAST, WEST, NORTH, SOUTH
        let x2 = ax, y2 = ay;
        if (dir === 'EAST') x2 = ax + len;
        else if (dir === 'WEST') x2 = ax - len;
        else if (dir === 'NORTH') y2 = ay - len;
        else if (dir === 'SOUTH') y2 = ay + len;

        aislesHtml += `
          <g opacity="0.4">
            <line x1="${ax}" y1="${ay}" x2="${x2}" y2="${y2}" stroke="var(--border-strong)" stroke-width="0.05" stroke-dasharray="0.4,0.4" />
          </g>
        `;
      });
      elAislesLayer.innerHTML = aislesHtml;
    }

    // Map Controls
    function zoomMap(delta) {
      g_mapZoom = Math.min(2.5, Math.max(0.6, g_mapZoom + delta));
      applyMapView();
    }

    function resetMapZoom() {
      g_mapZoom = 1.0;
      applyMapView();
    }

    function setViewMode(mode) {
      g_is3D = (mode === '3D');
      document.getElementById('btn-view-2d').classList.toggle('active', !g_is3D);
      document.getElementById('btn-view-3d').classList.toggle('active', g_is3D);
      applyMapView();
    }

    function applyMapView() {
      const svg = document.getElementById('map-svg');
      if (g_is3D) {
        svg.style.transform = `scale(${g_mapZoom}) perspective(600px) rotateX(25deg) rotateZ(-10deg)`;
      } else {
        svg.style.transform = `scale(${g_mapZoom})`;
      }
    }

    // Filter controls
    function setCommFilter(filt) {
      g_commFilter = filt;
      document.querySelectorAll('.filter-btn').forEach(btn => {
        btn.classList.toggle('active', btn.getAttribute('data-filter') === filt);
      });
      renderCommLog();
    }

    function setTaskTab(tab) {
      g_taskTab = tab;
      document.querySelectorAll('.task-tab-btn').forEach(btn => {
        const isThis = btn.getAttribute('onclick').includes(tab);
        btn.classList.toggle('active', isThis);
      });
      renderTasks();
    }

    // Polling Loop
    async function fetchState() {
      try {
        const res = await fetch('/api/state');
        if (!res.ok) return;
        g_state = await res.json();
        updateUI();
      } catch (err) {
        console.warn('Telemetry polling error:', err);
      }
    }

    function updateUI() {
      if (!g_state) return;

      // 1. Header Metrics
      const sim = g_state.simulation || {};
      const fl = g_state.fleet || {};
      const coord = g_state.coordination || {};
      const comm = g_state.communication || {};
      const tasks = g_state.tasks || {};

      document.getElementById('h-fleet').innerText = `${fl.active_count || fl.total_discovered || 0} / ${fl.total_discovered || 0} ONLINE`;
      document.getElementById('h-sim').innerText = `${(sim.sim_time_sec || 0).toFixed(1)} s`;
      document.getElementById('h-comm').innerText = comm.profile_name || 'NORMAL';
      document.getElementById('h-conflicts').innerText = coord.conflicts_count || 0;
      document.getElementById('h-collisions').innerText = coord.e_stops_count || 0;

      // Robot tallies
      let moving = 0, charging = 0, idle = 0, picking = 0, errors = 0;
      const robots = getRobotsArray();
      robots.forEach(r => {
        const hs = (r.health_state || 'HEALTHY').toUpperCase();
        if (hs === 'FAILED' || hs === 'MOTOR_FAIL' || hs === 'ESTOP' || hs === 'EMERGENCY_STOP' || hs === 'COMM_LOSS' || hs === 'ACTUATOR_FAIL') {
          errors++;
        }
        const st = (r.status || r.state || '').toUpperCase();
        if (st.includes('ACT') || st.includes('MOV') || st.includes('NAV')) moving++;
        else if (st.includes('CHG') || st.includes('DOCK')) charging++;
        else if (st.includes('PICK') || st.includes('EXEC')) picking++;
        else idle++;
      });
      if (fl.failed_count) errors = Math.max(errors, fl.failed_count + (fl.comm_loss_count || 0));

      document.getElementById('h-moving').innerText = moving;
      document.getElementById('h-charging').innerText = charging;
      document.getElementById('h-idle').innerText = idle;

      document.getElementById('t-mov').innerText = moving;
      document.getElementById('t-pick').innerText = picking;
      document.getElementById('t-chg').innerText = charging;
      document.getElementById('t-idle').innerText = idle;
      const tErr = document.getElementById('t-err');
      if (tErr) {
        tErr.innerText = errors;
        tErr.style.color = errors > 0 ? 'var(--color-red)' : 'var(--color-green)';
      }
      document.getElementById('rc-online-badge').innerText = `${fl.total_discovered || robots.length || 0} ONLINE`;

      // 2. Render Left Communication Log
      renderCommLog();

      // 3. Render Center Warehouse Map
      renderMap();

      // 4. Render Right Robot Panel
      renderRobotCards();

      // 5. Render Bottom Task Table
      renderTasks();

      // 6. Update Drawer if open
      if (g_selectedTaskId) {
        updateTaskDrawer(g_selectedTaskId);
      }
    }

    function renderCommLog() {
      if (!g_state) return;
      const feed = document.getElementById('comm-feed');
      const log = g_state.comm_log || [];
      document.getElementById('comm-count').innerText = `${log.length} msgs`;

      const filtered = log.filter(entry => {
        if (g_commFilter === 'ALL') return true;
        return (entry.type || '').toUpperCase() === g_commFilter;
      });

      if (filtered.length === 0) {
        feed.innerHTML = `<div style="color: var(--text-muted); font-size: 0.68rem; text-align: center; padding: 20px;">No ${g_commFilter} events recorded</div>`;
        return;
      }

      let html = '';
      filtered.slice(0, 40).forEach((ev, idx) => {
        const isNew = (idx === 0);
        const tLower = (ev.type || 'system').toLowerCase();
        html += `
          <div class="comm-row ${isNew ? 'new-entry' : ''}">
            <div class="comm-meta">
              <span class="comm-time">${ev.time || '00:00:00'}</span>
              <span class="comm-actors">${ev.sender || 'AMR'} → ${ev.recipient || 'ALL'}</span>
              <span class="comm-chip chip-${tLower}">[${ev.type || 'SYS'}]</span>
            </div>
            <div class="comm-body">${escapeHtml(ev.message || '')}</div>
          </div>
        `;
      });
      feed.innerHTML = html;
    }

    function renderMap() {
      if (!g_state) return;
      const mapMeta = g_state.map || {};
      const bounds = mapMeta.bounds || [0, 0, 32, 32];
      const robots = getRobotsArray();

      // Draw static layers if not populated
      if (elRacksLayer.innerHTML === '' && mapMeta.storage_racks) {
        initWarehouseStaticLayers();
      }

      // Draw Routes
      let routesHtml = '';
      robots.forEach(r => {
        const rId = r.robot_id;
        const isSelected = (g_selectedRobotId === rId);
        const plan = r.plan || r.current_plan || {};
        const execPath = plan.execution_path || [];
        const horizPath = plan.horizon_path || [];

        const hasSelected = (g_selectedRobotId !== null);
        const opacity = hasSelected ? (isSelected ? 1.0 : 0.15) : 0.8;

        // Current active path: solid orange line
        if (execPath.length > 1) {
          let pts = execPath.map(p => `${p[0]},${p[1]}`).join(' ');
          routesHtml += `<polyline points="${pts}" fill="none" stroke="${isSelected ? 'var(--accent-orange)' : '#ea580c'}" stroke-width="${isSelected ? '0.28' : '0.18'}" opacity="${opacity}" stroke-linecap="round" />`;
          execPath.forEach(pt => {
            routesHtml += `<circle cx="${pt[0]}" cy="${pt[1]}" r="0.12" fill="var(--accent-orange)" opacity="${opacity}" />`;
          });
        }

        // Planned horizon path: thin dashed neutral line
        if (horizPath.length > 1) {
          let pts = horizPath.map(p => `${p[0]},${p[1]}`).join(' ');
          routesHtml += `<polyline points="${pts}" fill="none" stroke="var(--text-muted)" stroke-width="0.14" stroke-dasharray="0.3,0.3" opacity="${opacity * 0.8}" />`;
        }
      });
      elRoutesLayer.innerHTML = routesHtml;

      // Draw Dynamic Blockages
      const blockages = g_state.dynamic_obstacles || [];
      let blockagesHtml = '';
      blockages.forEach(b => {
        const minX = (b.min_x !== undefined) ? b.min_x : (b.x !== undefined ? b.x - 0.5 : 0);
        const minY = (b.min_y !== undefined) ? b.min_y : (b.y !== undefined ? b.y - 0.5 : 0);
        const maxX = (b.max_x !== undefined) ? b.max_x : (b.x !== undefined ? b.x + 0.5 : 1);
        const maxY = (b.max_y !== undefined) ? b.max_y : (b.y !== undefined ? b.y + 0.5 : 1);
        const w = Math.max(0.6, maxX - minX);
        const h = Math.max(0.6, maxY - minY);
        blockagesHtml += `
          <g>
            <rect x="${minX}" y="${minY}" width="${w}" height="${h}"
                  fill="rgba(239, 68, 68, 0.45)" stroke="var(--color-red)" stroke-width="0.12"
                  stroke-dasharray="0.2,0.2" rx="0.1" />
            <line x1="${minX}" y1="${minY}" x2="${minX + w}" y2="${minY + h}" stroke="var(--color-red)" stroke-width="0.08" />
            <line x1="${minX}" y1="${minY + h}" x2="${minX + w}" y2="${minY}" stroke="var(--color-red)" stroke-width="0.08" />
            <text x="${minX + w/2}" y="${minY + h/2 + 0.15}" fill="#ffffff" font-size="0.4" font-weight="900" text-anchor="middle" font-family="monospace">${b.id || 'BLOCK'}</text>
          </g>
        `;
      });
      if (elBlockagesLayer) elBlockagesLayer.innerHTML = blockagesHtml;

      // Draw Robots
      let robotsHtml = '';
      robots.forEach(r => {
        const rId = r.robot_id;
        const isSelected = (g_selectedRobotId === rId);
        const x = r.x || 0;
        const y = r.y || 0;
        const yaw = (r.yaw !== undefined) ? r.yaw : ((r.yaw_deg || 0) * Math.PI / 180.0);
        const st = (r.status || r.state || 'IDLE').toUpperCase();
        const hs = (r.health_state || 'HEALTHY').toUpperCase();
        const isFailed = (hs === 'FAILED' || hs === 'MOTOR_FAIL' || hs === 'ESTOP' || hs === 'EMERGENCY_STOP' || hs === 'ACTUATOR_FAIL');
        const isCommLoss = (hs === 'COMM_LOSS');

        let ringColor = 'var(--text-muted)'; // Idle
        if (isFailed) {
          ringColor = 'var(--color-red)';
        } else if (isCommLoss) {
          ringColor = 'var(--color-yellow)';
        } else if (st.includes('ACT') || st.includes('MOV') || st.includes('NAV') || st.includes('EXEC') || st.includes('PICK')) {
          ringColor = 'var(--color-green)';
        } else if (st.includes('CHG') || st.includes('DOCK')) {
          ringColor = 'var(--color-blue)';
        }

        if (isSelected) {
          ringColor = isFailed ? 'var(--color-red)' : 'var(--accent-orange)';
        }

        const needleLen = 0.7;
        const nx = x + Math.cos(yaw) * needleLen;
        const ny = y + Math.sin(yaw) * needleLen;

        const nameColor = isFailed ? 'var(--color-red)' : (isCommLoss ? 'var(--color-yellow)' : 'var(--text-secondary)');
        const labelText = isFailed ? `${rId.toUpperCase()} [FAULT]` : (isCommLoss ? `${rId.toUpperCase()} [COMM]` : rId.toUpperCase());

        robotsHtml += `
          <g onclick="selectRobot('${rId}', ${x}, ${y})" style="cursor: pointer;">
            ${isFailed ? `<circle cx="${x}" cy="${y}" r="1.1" fill="rgba(239, 68, 68, 0.18)" stroke="var(--color-red)" stroke-width="0.09" stroke-dasharray="0.2,0.2" />` : (isSelected ? `<circle cx="${x}" cy="${y}" r="1.1" fill="none" stroke="var(--accent-orange)" stroke-width="0.08" stroke-dasharray="0.2,0.2" />` : '')}
            <circle cx="${x}" cy="${y}" r="0.6" fill="var(--bg-panel)" stroke="${ringColor}" stroke-width="${isSelected || isFailed ? '0.2' : '0.14'}" />
            <line x1="${x}" y1="${y}" x2="${nx}" y2="${ny}" stroke="${ringColor}" stroke-width="0.16" stroke-linecap="round" />
            <text x="${x}" y="${y + 1.2}" fill="${nameColor}" font-size="0.55" font-weight="700" text-anchor="middle" font-family="monospace">${labelText}</text>
          </g>
        `;
      });
      elRobotsLayer.innerHTML = robotsHtml;

      // Update popup position if active
      if (g_selectedRobotId) {
        const rMap = getRobotsMap();
        if (rMap[g_selectedRobotId]) {
          updateRobotPopupData(rMap[g_selectedRobotId]);
        }
      }
    }

    function selectRobot(rId, rx, ry) {
      if (g_selectedRobotId === rId) {
        closeRobotPopup();
        return;
      }
      g_selectedRobotId = rId;

      const rMap = getRobotsMap();
      const r = rMap[rId];
      if (!r) return;

      const popup = document.getElementById('robot-popup');
      const wrap = document.getElementById('map-wrap');
      const rect = wrap.getBoundingClientRect();

      // Convert world coords [0..32] to container pixel coords
      const px = ((r.x || 0) / 32.0) * rect.width;
      const py = ((r.y || 0) / 32.0) * rect.height;

      popup.style.display = 'flex';
      popup.style.left = `${Math.min(rect.width - 180, Math.max(10, px - 80))}px`;
      popup.style.top = `${Math.max(10, py - 95)}px`;

      updateRobotPopupData(r);
      renderMap();
      renderRobotCards();
    }

    function updateRobotPopupData(r) {
      const plan = r.plan || r.current_plan || {};
      const tId = r.current_task_id || plan.task_id || '— None —';
      const hs = (r.health_state || 'HEALTHY').toUpperCase();
      document.getElementById('pop-id').innerText = (r.robot_id || g_selectedRobotId).toUpperCase();
      document.getElementById('pop-state').innerText = (r.status || r.state || 'IDLE').toUpperCase();
      const popHealth = document.getElementById('pop-health');
      if (popHealth) {
        popHealth.innerText = hs;
        if (hs === 'FAILED' || hs === 'MOTOR_FAIL' || hs === 'ESTOP' || hs === 'EMERGENCY_STOP' || hs === 'ACTUATOR_FAIL') {
          popHealth.style.color = 'var(--color-red)';
        } else if (hs === 'COMM_LOSS') {
          popHealth.style.color = 'var(--color-yellow)';
        } else {
          popHealth.style.color = 'var(--color-green)';
        }
      }
      document.getElementById('pop-batt').innerText = `${r.battery_pct || 100}%`;
      document.getElementById('pop-task').innerText = tId;
      document.getElementById('pop-prog').innerText = `${r.progress_pct || 0}%`;
      document.getElementById('pop-pos').innerText = `(${Number(r.x||0).toFixed(1)}, ${Number(r.y||0).toFixed(1)})`;
    }

    function closeRobotPopup() {
      g_selectedRobotId = null;
      document.getElementById('robot-popup').style.display = 'none';
      renderMap();
      renderRobotCards();
    }

    function renderRobotCards() {
      if (!g_state) return;
      const feed = document.getElementById('robot-feed');
      const robots = getRobotsArray();

      if (robots.length === 0) {
        feed.innerHTML = `<div style="color: var(--text-muted); font-size: 0.68rem; text-align: center; padding: 20px;">Scanning ROS 2 graph for AMRs...</div>`;
        return;
      }

      let html = '';
      robots.forEach(r => {
        const rId = r.robot_id;
        const isSel = (g_selectedRobotId === rId);
        const st = (r.status || r.state || 'IDLE').toUpperCase();
        const hs = (r.health_state || 'HEALTHY').toUpperCase();
        let healthClass = 'health-healthy';
        if (hs === 'FAILED' || hs === 'MOTOR_FAIL' || hs === 'ACTUATOR_FAIL') healthClass = 'health-failed';
        else if (hs === 'COMM_LOSS') healthClass = 'health-comm-loss';
        else if (hs === 'ESTOP' || hs === 'EMERGENCY_STOP') healthClass = 'health-estop';

        const batt = r.battery_pct || 100;
        const prog = r.progress_pct || 0;
        const plan = r.plan || r.current_plan || {};
        const tId = r.current_task_id || plan.task_id || '—';

        html += `
          <div class="robot-card ${isSel ? 'selected' : ''}" onclick="selectRobot('${rId}')">
            <div class="rc-top">
              <span class="rc-id">${rId.toUpperCase()}</span>
              <span class="rc-health-badge ${healthClass}">● ${hs}</span>
              <span class="rc-badge state-${st.toLowerCase().split(' ')[0]}">● ${st}</span>
            </div>
            <div class="rc-telemetry">
              <span>Battery: ${batt}%</span>
              <span>Speed: ${(r.linear_speed || 0).toFixed(2)} m/s</span>
            </div>
            <div class="rc-bar-track">
              <div class="rc-bar-fill" style="width: ${batt}%; background: ${batt < 25 ? 'var(--color-red)' : 'var(--color-green)'};"></div>
            </div>
            <div class="rc-task-desc">Task: ${tId} (${prog}%)</div>
            <div class="rc-bar-track">
              <div class="rc-bar-fill" style="width: ${prog}%; background: var(--accent-orange);"></div>
            </div>
          </div>
        `;
      });
      feed.innerHTML = html;

      // Populate Requested Robot dropdown in modal if needed
      const sel = document.getElementById('inp-robot');
      if (sel.options.length <= 1) {
        robots.forEach(r => {
          const id = r.robot_id;
          const opt = document.createElement('option');
          opt.value = id;
          opt.innerText = id.toUpperCase();
          sel.appendChild(opt);
        });
      }
    }

    function renderTasks() {
      if (!g_state) return;
      const tbody = document.getElementById('task-tbody');
      const allTasks = getAllTasksMap();
      const taskIds = Object.keys(allTasks);

      // Tab counters
      let cntAvail = 0, cntAsgn = 0, cntProg = 0, cntComp = 0;
      taskIds.forEach(id => {
        const st = (allTasks[id].status || '').toUpperCase();
        if (st === 'PENDING') cntAvail++;
        else if (st === 'ASSIGNED') cntAsgn++;
        else if (st === 'IN_PROGRESS') cntProg++;
        else if (st === 'COMPLETED') cntComp++;
      });

      document.getElementById('cnt-all').innerText = taskIds.length;
      document.getElementById('cnt-avail').innerText = cntAvail;
      document.getElementById('cnt-asgn').innerText = cntAsgn;
      document.getElementById('cnt-prog').innerText = cntProg;
      document.getElementById('cnt-comp').innerText = cntComp;

      const filtered = taskIds.filter(id => {
        const t = allTasks[id];
        const st = (t.status || '').toUpperCase();
        if (g_taskTab === 'ALL') return true;
        if (g_taskTab === 'AVAILABLE') return st === 'PENDING';
        if (g_taskTab === 'ASSIGNED') return st === 'ASSIGNED';
        if (g_taskTab === 'IN_PROGRESS') return st === 'IN_PROGRESS';
        if (g_taskTab === 'COMPLETED') return st === 'COMPLETED';
        return true;
      });

      if (filtered.length === 0) {
        tbody.innerHTML = `<tr><td colspan="8" style="text-align: center; color: var(--text-muted); padding: 18px;">No tasks matching ${g_taskTab} filter</td></tr>`;
        return;
      }

      let html = '';
      filtered.forEach(id => {
        const t = allTasks[id];
        const isSel = (g_selectedTaskId === id);
        const st = (t.status || 'PENDING').toUpperCase();
        const pick = `(${Number(t.pickup_x||0).toFixed(1)}, ${Number(t.pickup_y||0).toFixed(1)})`;
        const drop = `(${Number(t.dropoff_x||0).toFixed(1)}, ${Number(t.dropoff_y||0).toFixed(1)})`;
        const prio = getPriorityText(t.priority || 2);
        const amr = t.assigned_robot || '—';
        const prog = t.progress_pct || (st === 'COMPLETED' ? 100 : (st === 'IN_PROGRESS' ? 50 : 0));

        html += `
          <tr class="${isSel ? 'selected' : ''}" onclick="selectTaskRow('${id}')">
            <td style="font-weight: 800; color: var(--text-primary);">${id}</td>
            <td>${pick} → ${drop}</td>
            <td>${prio}</td>
            <td style="color: ${amr !== '—' ? 'var(--text-primary)' : 'var(--text-muted)'};">${amr.toUpperCase()}</td>
            <td><span class="task-badge badge-${st.toLowerCase()}">${st}</span></td>
            <td>${prog}%</td>
            <td>${t.created_time || '—'}</td>
            <td>
              <button class="tbl-action-btn" onclick="event.stopPropagation(); openTaskDrawer('${id}')">VIEW</button>
              ${(st !== 'COMPLETED' && st !== 'CANCELLED') ? `<button class="tbl-action-btn tbl-action-cancel" onclick="event.stopPropagation(); cancelTask('${id}')">CANCEL</button>` : ''}
              ${(st === 'CANCELLED' || st === 'FAILED') ? `<button class="tbl-action-btn tbl-action-requeue" onclick="event.stopPropagation(); requeueTask('${id}')">REQUEUE</button>` : ''}
            </td>
          </tr>
        `;
      });
      tbody.innerHTML = html;
    }

    function getPriorityText(p) {
      if (p === 1) return 'LOW';
      if (p === 3) return '<span style="color: var(--color-amber);">HIGH</span>';
      if (p === 4) return '<span style="color: var(--color-red);">CRITICAL</span>';
      return 'NORMAL';
    }

    // Task Drawer
    function selectTaskRow(tId) {
      openTaskDrawer(tId);
    }

    function openTaskDrawer(tId) {
      g_selectedTaskId = tId;
      document.getElementById('task-drawer').classList.add('open');
      updateTaskDrawer(tId);
      renderTasks();
    }

    function closeTaskDrawer() {
      g_selectedTaskId = null;
      document.getElementById('task-drawer').classList.remove('open');
      renderTasks();
    }

    function updateTaskDrawer(tId) {
      if (!g_state) return;
      const allTasks = getAllTasksMap();
      const t = allTasks[tId];
      if (!t) return;

      const st = (t.status || 'PENDING').toUpperCase();
      document.getElementById('dr-task-id').innerText = `TASK ${tId}`;
      const badge = document.getElementById('dr-task-badge');
      badge.className = `task-badge badge-${st.toLowerCase()}`;
      badge.innerText = st;

      document.getElementById('dr-pickup').innerText = `(${Number(t.pickup_x||0).toFixed(2)}, ${Number(t.pickup_y||0).toFixed(2)})`;
      document.getElementById('dr-dropoff').innerText = `(${Number(t.dropoff_x||0).toFixed(2)}, ${Number(t.dropoff_y||0).toFixed(2)})`;
      document.getElementById('dr-priority').innerText = getPriorityText(t.priority || 2);
      document.getElementById('dr-robot').innerText = (t.assigned_robot || '— None —').toUpperCase();
      document.getElementById('dr-consensus').innerText = (g_state.cbba && g_state.cbba.is_converged) ? '● CONVERGED' : '○ NEGOTIATING';
      document.getElementById('dr-progress').innerText = `${t.progress_pct || (st === 'COMPLETED' ? 100 : 0)}%`;

      // CBBA Bids Inspection
      const cbba = g_state.cbba || {};
      const bidsByTask = (cbba.bids_by_task && cbba.bids_by_task[tId]) || (cbba.bids && cbba.bids[tId]) || {};
      const winAlloc = (cbba.winning_allocations && cbba.winning_allocations[tId]) || {};
      let winner = winAlloc.winner || (t.assigned_robot !== '—' ? t.assigned_robot : '');
      if (!winner && cbba.bundles) {
        for (const [rId, bundleList] of Object.entries(cbba.bundles)) {
          if (Array.isArray(bundleList) && bundleList.includes(tId)) {
            winner = rId;
            break;
          }
        }
      }
      const winningBid = winAlloc.bid !== undefined ? winAlloc.bid : (bidsByTask[winner] !== undefined ? bidsByTask[winner] : '—');

      document.getElementById('dr-winner').innerText = winner ? winner.toUpperCase() : '—';
      document.getElementById('dr-winning-bid').innerText = winningBid;

      const bidsTbody = document.getElementById('dr-bids-tbody');
      const bRobots = Object.keys(bidsByTask);
      if (bRobots.length === 0) {
        bidsTbody.innerHTML = `<tr><td colspan="3" style="color: var(--text-muted); text-align: center;">No bid reports cached</td></tr>`;
      } else {
        let bHtml = '';
        bRobots.sort((a,b) => bidsByTask[a] - bidsByTask[b]).forEach(rId => {
          const val = bidsByTask[rId];
          const isWin = (rId === winner);
          bHtml += `
            <tr>
              <td>${rId.toUpperCase()}</td>
              <td>${Number(val).toFixed(2)}</td>
              <td class="${isWin ? 'winner-tag' : ''}">${isWin ? '★ WINNER' : 'BID'}</td>
            </tr>
          `;
        });
        bidsTbody.innerHTML = bHtml;
      }
    }

    async function cancelTask(tId) {
      try {
        const res = await fetch('/api/task/control', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json' },
          body: JSON.stringify({ task_id: tId, action: 'CANCEL' }),
        });
        const data = await res.json();
        fetchState();
      } catch (err) {
        alert('Error cancelling task: ' + err);
      }
    }

    async function requeueTask(tId) {
      try {
        const res = await fetch('/api/task/control', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json' },
          body: JSON.stringify({ task_id: tId, action: 'REQUEUE' }),
        });
        const data = await res.json();
        fetchState();
      } catch (err) {
        alert('Error requeueing task: ' + err);
      }
    }

    function drawerCancelTask() {
      if (g_selectedTaskId) cancelTask(g_selectedTaskId);
    }

    function drawerRequeueTask() {
      if (g_selectedTaskId) requeueTask(g_selectedTaskId);
    }

    // Modal Create Task
    function openCreateTaskModal() {
      document.getElementById('modal-create-task').style.display = 'flex';
    }

    function closeCreateTaskModal() {
      document.getElementById('modal-create-task').style.display = 'none';
    }

    function handleModalBackdropClick(e) {
      if (e.target.id === 'modal-create-task') {
        closeCreateTaskModal();
      }
    }

    function toggleAssignmentMethod() {
      const method = document.getElementById('inp-method').value;
      const rSel = document.getElementById('inp-robot');
      rSel.disabled = (method === 'AUTO');
    }

    function setCoords(px, py, dx, dy) {
      document.getElementById('inp-pick-x').value = px;
      document.getElementById('inp-pick-y').value = py;
      document.getElementById('inp-drop-x').value = dx;
      document.getElementById('inp-drop-y').value = dy;
    }

    async function submitCreateTask() {
      const px = parseFloat(document.getElementById('inp-pick-x').value);
      const py = parseFloat(document.getElementById('inp-pick-y').value);
      const dx = parseFloat(document.getElementById('inp-drop-x').value);
      const dy = parseFloat(document.getElementById('inp-drop-y').value);
      const prio = parseInt(document.getElementById('inp-priority').value);
      const method = document.getElementById('inp-method').value;
      const reqRobot = (method === 'DIRECT') ? document.getElementById('inp-robot').value : '';
      const deadline = parseFloat(document.getElementById('inp-deadline').value || '0');

      if (isNaN(px) || isNaN(py) || isNaN(dx) || isNaN(dy)) {
        alert('Please specify valid numeric coordinates for pickup and dropoff.');
        return;
      }

      const payload = {
        pickup_x: px,
        pickup_y: py,
        dropoff_x: dx,
        dropoff_y: dy,
        priority: prio,
        requested_robot: reqRobot,
        deadline: deadline,
      };

      try {
        const res = await fetch('/api/task/create', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json' },
          body: JSON.stringify(payload),
        });
        const data = await res.json();
        if (data.accepted) {
          closeCreateTaskModal();
          fetchState();
        } else {
          alert('Task creation rejected: ' + data.message);
        }
      } catch (err) {
        alert('Error creating task: ' + err);
      }
    }

    function escapeHtml(str) {
      return String(str)
        .replace(/&/g, '&amp;')
        .replace(/</g, '&lt;')
        .replace(/>/g, '&gt;')
        .replace(/"/g, '&quot;');
    }

    // Initialize Theme from LocalStorage or Default to Dark
    let initialTheme = 'dark';
    try {
      initialTheme = localStorage.getItem('nrdas_theme') || 'dark';
    } catch(e) {}
    applyTheme(initialTheme);

    // Initial fetch & loop
    initWarehouseStaticLayers();
    setInterval(fetchState, 1000);
    fetchState();
  </script>
</body>
</html>
"""


def sanitize_for_json(obj: Any) -> Any:
    """Recursively convert float('inf') and float('nan') to None for RFC 8259 JSON compliance."""
    if isinstance(obj, dict):
        return {k: sanitize_for_json(v) for k, v in obj.items()}
    elif isinstance(obj, list):
        return [sanitize_for_json(v) for v in obj]
    elif isinstance(obj, float):
        if math.isinf(obj) or math.isnan(obj):
            return None
        return obj
    return obj

class DashboardHTTPRequestHandler(http.server.BaseHTTPRequestHandler):
    """Zero-dependency HTTP request handler for the fleet dashboard."""

    monitor_node: Optional[FleetMonitorNode] = None

    def log_message(self, format, *args):
        # Suppress routine GET logs to keep console clean
        pass

    def do_HEAD(self) -> None:
        self.send_response(200)
        self.send_header('Content-type', 'text/html; charset=utf-8')
        self.end_headers()

    def do_GET(self) -> None:
        if self.path == '/' or self.path.startswith('/index'):
            self.send_response(200)
            self.send_header('Content-type', 'text/html; charset=utf-8')
            self.end_headers()
            self.wfile.write(DASHBOARD_HTML.encode('utf-8'))
        elif self.path == '/api/state':
            self.send_response(200)
            self.send_header('Content-type', 'application/json')
            self.send_header('Access-Control-Allow-Origin', '*')
            self.end_headers()
            data = self.monitor_node.get_fleet_summary() if self.monitor_node else {}
            safe_data = sanitize_for_json(data)
            self.wfile.write(json.dumps(safe_data).encode('utf-8'))
        else:
            self.send_response(404)
            self.end_headers()

    def do_OPTIONS(self) -> None:
        self.send_response(200)
        self.send_header('Access-Control-Allow-Origin', '*')
        self.send_header('Access-Control-Allow-Methods', 'GET, POST, OPTIONS')
        self.send_header('Access-Control-Allow-Headers', 'Content-Type')
        self.end_headers()

    def do_POST(self) -> None:
        content_length = int(self.headers.get('Content-Length', 0))
        post_body = (
            self.rfile.read(content_length).decode('utf-8')
            if content_length > 0 else '{}'
        )
        try:
            body = json.loads(post_body)
        except Exception:
            body = {}

        if self.path in ('/api/task/create', '/api/tasks/create'):
            result = (
                self.monitor_node.create_task_sync(body)
                if self.monitor_node
                else {'accepted': False, 'message': 'Fleet monitor node offline.'}
            )
            status_code = 200 if result.get('accepted') else 400
            self.send_response(status_code)
            self.send_header('Content-type', 'application/json')
            self.send_header('Access-Control-Allow-Origin', '*')
            self.end_headers()
            self.wfile.write(json.dumps(result).encode('utf-8'))
        elif self.path in ('/api/task/control', '/api/tasks/control'):
            task_id = body.get('task_id', '')
            action = body.get('action', '')
            result = (
                self.monitor_node.control_task_sync(task_id, action)
                if self.monitor_node
                else {'success': False, 'message': 'Fleet monitor node offline.'}
            )
            status_code = 200 if result.get('success') else 400
            self.send_response(status_code)
            self.send_header('Content-type', 'application/json')
            self.send_header('Access-Control-Allow-Origin', '*')
            self.end_headers()
            self.wfile.write(json.dumps(result).encode('utf-8'))
        else:
            self.send_response(404)
            self.end_headers()


def run_tui(node: FleetMonitorNode) -> None:
    """Rich terminal TUI loop."""
    try:
        from rich.console import Console
        from rich.table import Table
        from rich.live import Live
        from rich.panel import Panel
        from rich.layout import Layout
    except ImportError:
        print("[WARN] 'rich' is not available. Falling back to simple stdout print.")
        while rclpy.ok():
            data = node.get_fleet_summary()
            print(f"\r[FLEET] Robots: {data['fleet']['total_discovered']} | Sim Time: {data['simulation']['sim_time_sec']}s | RTF: {data['simulation']['real_time_factor']}x | CPU: {data['performance']['host_cpu_percent']}%", end="")
            time.sleep(1.0)
        return

    console = Console()
    with Live(console=console, screen=True, refresh_per_second=2) as live:
        while rclpy.ok():
            data = node.get_fleet_summary()
            
            layout = Layout()
            layout.split_column(
                Layout(name="header", size=3),
                Layout(name="main"),
                Layout(name="footer", size=6),
            )

            # Header
            header_text = f"[bold cyan]NRDAS AMR FLEET MONITOR[/bold cyan] | Sim Time: [green]{data['simulation']['sim_time_sec']}s[/green] | RTF: [green]{data['simulation']['real_time_factor']}x[/green] | CPU: {data['performance']['host_cpu_percent']}% | RAM: {data['performance']['host_ram_used_mb']}MB"
            layout["header"].update(Panel(header_text, border_style="blue"))

            # Table of Robots
            table = Table(title=f"Discovered AMRs ({data['fleet']['total_discovered']})", expand=True)
            table.add_column("Robot ID", style="cyan", justify="left")
            table.add_column("Status", justify="center")
            table.add_column("Pose (X, Y)", justify="right")
            table.add_column("Yaw", justify="right")
            table.add_column("Speed (m/s)", justify="right")
            table.add_column("Dist (m)", justify="right")
            table.add_column("LiDAR (Hz)", justify="right")
            table.add_column("Min Range", justify="right")

            for r in data['fleet']['robots']:
                st_color = "green" if r['status'] == 'ACTIVE' else ("yellow" if r['status'] == 'IDLE' else "red")
                table.add_row(
                    r['robot_id'],
                    f"[{st_color}]{r['status']}[/{st_color}]",
                    f"({r['x']}, {r['y']})",
                    f"{r['yaw_deg']}°",
                    f"{r['linear_speed']}",
                    f"{r['distance_m']}",
                    f"{r['lidar_hz']}",
                    f"{r['min_obstacle_m'] if r['min_obstacle_m'] else 'N/A'}",
                )
            layout["main"].update(table)

            # Footer
            t_info = (
                f"{data['tasks']['status']} "
                f"(Total: {data['tasks']['total']}, Pending: {data['tasks']['pending']}, "
                f"Active: {data['tasks']['active']}, Done: {data['tasks']['completed']})"
            )
            comm = data.get('communication', {})
            footer_text = (
                f"[bold]TASKS:[/bold] {t_info} | "
                f"[bold]MAPF:[/bold] {data['performance']['mapf_planning_latency']}\n"
                f"[bold]COMM:[/bold] Profile={comm.get('profile_name', 'NORMAL')} | "
                f"Loss={comm.get('loss_rate', 0.0)}% | "
                f"Lat={comm.get('avg_latency_ms', 0.0)}ms | "
                f"Stale={comm.get('stale_messages_count', 0)}\n"
                f"[bold]SAFETY:[/bold] [green]{data['safety']['active_safety_zone']}[/green] | "
                f"[bold]E-STOP:[/bold] {data['safety']['estop_status']} | "
                f"[bold]MIDDLEWARE:[/bold] {data['network']['ros2_topics_count']} topics "
                f"across {data['network']['ros2_nodes_count']} nodes"
            )
            layout["footer"].update(Panel(footer_text, border_style="green"))

            live.update(layout)
            time.sleep(0.5)


def main() -> None:
    parser = argparse.ArgumentParser(description="NRDAS Fleet Observability Dashboard")
    parser.add_argument('--port', type=int, default=8080, help="Web dashboard port (default: 8080)")
    parser.add_argument('--tui', action='store_true', help="Run terminal Rich TUI in current terminal")
    parser.add_argument('--web', action='store_true', default=True, help="Run web dashboard server (enabled by default)")
    parser.add_argument('--no-web', action='store_true', help="Disable web dashboard server")
    parser.add_argument('--world', type=str, default='warehouse_m9_v2', help="Gazebo world or map identifier (e.g. warehouse_m9_v2)")
    parser.add_argument('--fleet-size', '--robot-count', dest='robot_count', type=int, default=10, help="Number of AMRs in fleet (default: 10)")
    args = parser.parse_args()

    rclpy.init()
    node = FleetMonitorNode(target_robot_count=args.robot_count, world_name=args.world)
    DashboardHTTPRequestHandler.monitor_node = node

    # Start Web Server if requested
    if not args.no_web:
        class ThreadedTCPServer(socketserver.ThreadingMixIn, http.server.HTTPServer):
            daemon_threads = True
            allow_reuse_address = True

        server_started = False
        bound_port = args.port
        for p in range(args.port, args.port + 20):
            try:
                httpd = ThreadedTCPServer(('0.0.0.0', p), DashboardHTTPRequestHandler)
                server_thread = threading.Thread(target=httpd.serve_forever, daemon=True)
                server_thread.start()
                bound_port = p
                server_started = True
                print(f"[INFO] Fleet Dashboard running at http://localhost:{bound_port}")
                break
            except OSError as e:
                if e.errno == 98:  # Address already in use
                    continue
                else:
                    print(f"[WARN] Failed to bind Web Dashboard on port {p}: {e}")
                    break
            except Exception as e:
                print(f"[WARN] Failed to bind Web Dashboard on port {p}: {e}")
                break

        if not server_started:
            print(f"[WARN] Could not bind Web Dashboard on any port between {args.port} and {args.port + 19}")

    # Spin ROS 2 in background thread
    def spin_target():
        try:
            rclpy.spin(node)
        except Exception:
            pass

    spin_thread = threading.Thread(target=spin_target, daemon=True)
    spin_thread.start()

    if args.tui:
        run_tui(node)
    else:
        print("[INFO] Fleet Monitor Node active. Press Ctrl+C to exit.")
        try:
            while rclpy.ok():
                time.sleep(1.0)
        except KeyboardInterrupt:
            pass

    node.destroy_node()
    if rclpy.ok():
        rclpy.shutdown()


if __name__ == '__main__':
    main()
