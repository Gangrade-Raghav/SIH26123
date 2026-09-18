// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/fleet_metrics.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/FleetMetrics in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__FleetMetrics
{
  std_msgs__msg__Header header;
  uint32_t active_robots;
  uint32_t completed_tasks;
  double throughput;
  double p50_planning_latency_ms;
  double p95_planning_latency_ms;
  double p99_planning_latency_ms;
  uint64_t total_network_bytes;
  uint32_t deadlock_count;
} amr_fleet_msgs__msg__FleetMetrics;

// Struct for a sequence of amr_fleet_msgs__msg__FleetMetrics.
typedef struct amr_fleet_msgs__msg__FleetMetrics__Sequence
{
  amr_fleet_msgs__msg__FleetMetrics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__FleetMetrics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__STRUCT_H_
