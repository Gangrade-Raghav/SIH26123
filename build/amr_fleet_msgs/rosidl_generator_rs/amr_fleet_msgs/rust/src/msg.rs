#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to amr_fleet_msgs__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cpu_load: f32,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        state: msg.state.as_str().into(),
        plan_epoch: msg.plan_epoch,
        battery_percentage: msg.battery_percentage,
        cpu_load: msg.cpu_load,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        velocity: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        state: msg.state.as_str().into(),
      plan_epoch: msg.plan_epoch,
      battery_percentage: msg.battery_percentage,
      cpu_load: msg.cpu_load,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      velocity: geometry_msgs::msg::Twist::from_rmw_message(msg.velocity),
      state: msg.state.to_string(),
      plan_epoch: msg.plan_epoch,
      battery_percentage: msg.battery_percentage,
      cpu_load: msg.cpu_load,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__TaskBid

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskBid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bid_value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path_cost: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allocation_epoch: u64,

}



impl Default for TaskBid {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskBid::default())
  }
}

impl rosidl_runtime_rs::Message for TaskBid {
  type RmwMsg = super::msg::rmw::TaskBid;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        bid_value: msg.bid_value,
        path_cost: msg.path_cost,
        allocation_epoch: msg.allocation_epoch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      bid_value: msg.bid_value,
      path_cost: msg.path_cost,
      allocation_epoch: msg.allocation_epoch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      task_id: msg.task_id.to_string(),
      bid_value: msg.bid_value,
      path_cost: msg.path_cost,
      allocation_epoch: msg.allocation_epoch,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__TaskAssignment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskAssignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allocation_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confirmed: bool,

}



impl Default for TaskAssignment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskAssignment::default())
  }
}

impl rosidl_runtime_rs::Message for TaskAssignment {
  type RmwMsg = super::msg::rmw::TaskAssignment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        assigned_robot_id: msg.assigned_robot_id.as_str().into(),
        allocation_epoch: msg.allocation_epoch,
        confirmed: msg.confirmed,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        assigned_robot_id: msg.assigned_robot_id.as_str().into(),
      allocation_epoch: msg.allocation_epoch,
      confirmed: msg.confirmed,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      task_id: msg.task_id.to_string(),
      assigned_robot_id: msg.assigned_robot_id.to_string(),
      allocation_epoch: msg.allocation_epoch,
      confirmed: msg.confirmed,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__BlockedResource

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockedResource {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waiting_for_robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resource_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resource_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resource_t: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub epoch: u64,

}



impl Default for BlockedResource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockedResource::default())
  }
}

impl rosidl_runtime_rs::Message for BlockedResource {
  type RmwMsg = super::msg::rmw::BlockedResource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        waiting_for_robot_id: msg.waiting_for_robot_id.as_str().into(),
        resource_x: msg.resource_x,
        resource_y: msg.resource_y,
        resource_t: msg.resource_t,
        epoch: msg.epoch,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        waiting_for_robot_id: msg.waiting_for_robot_id.as_str().into(),
      resource_x: msg.resource_x,
      resource_y: msg.resource_y,
      resource_t: msg.resource_t,
      epoch: msg.epoch,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      waiting_for_robot_id: msg.waiting_for_robot_id.to_string(),
      resource_x: msg.resource_x,
      resource_y: msg.resource_y,
      resource_t: msg.resource_t,
      epoch: msg.epoch,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__FleetMetrics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_robots: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub completed_tasks: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub throughput: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub p50_planning_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub p95_planning_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub p99_planning_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_network_bytes: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deadlock_count: u32,

}



impl Default for FleetMetrics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FleetMetrics::default())
  }
}

impl rosidl_runtime_rs::Message for FleetMetrics {
  type RmwMsg = super::msg::rmw::FleetMetrics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        active_robots: msg.active_robots,
        completed_tasks: msg.completed_tasks,
        throughput: msg.throughput,
        p50_planning_latency_ms: msg.p50_planning_latency_ms,
        p95_planning_latency_ms: msg.p95_planning_latency_ms,
        p99_planning_latency_ms: msg.p99_planning_latency_ms,
        total_network_bytes: msg.total_network_bytes,
        deadlock_count: msg.deadlock_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      active_robots: msg.active_robots,
      completed_tasks: msg.completed_tasks,
      throughput: msg.throughput,
      p50_planning_latency_ms: msg.p50_planning_latency_ms,
      p95_planning_latency_ms: msg.p95_planning_latency_ms,
      p99_planning_latency_ms: msg.p99_planning_latency_ms,
      total_network_bytes: msg.total_network_bytes,
      deadlock_count: msg.deadlock_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      active_robots: msg.active_robots,
      completed_tasks: msg.completed_tasks,
      throughput: msg.throughput,
      p50_planning_latency_ms: msg.p50_planning_latency_ms,
      p95_planning_latency_ms: msg.p95_planning_latency_ms,
      p99_planning_latency_ms: msg.p99_planning_latency_ms,
      total_network_bytes: msg.total_network_bytes,
      deadlock_count: msg.deadlock_count,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__TaskDefinition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_pose: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_pose: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub created_at: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deadline: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_robot: std::string::String,

}



impl Default for TaskDefinition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskDefinition::default())
  }
}

impl rosidl_runtime_rs::Message for TaskDefinition {
  type RmwMsg = super::msg::rmw::TaskDefinition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        pickup_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.pickup_pose)).into_owned(),
        dropoff_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.dropoff_pose)).into_owned(),
        priority: msg.priority,
        created_at: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.created_at)).into_owned(),
        deadline: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.deadline)).into_owned(),
        status: msg.status.as_str().into(),
        assigned_robot_id: msg.assigned_robot_id.as_str().into(),
        requested_robot: msg.requested_robot.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        pickup_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pickup_pose)).into_owned(),
        dropoff_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dropoff_pose)).into_owned(),
      priority: msg.priority,
        created_at: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.created_at)).into_owned(),
        deadline: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.deadline)).into_owned(),
        status: msg.status.as_str().into(),
        assigned_robot_id: msg.assigned_robot_id.as_str().into(),
        requested_robot: msg.requested_robot.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      task_id: msg.task_id.to_string(),
      pickup_pose: geometry_msgs::msg::Point::from_rmw_message(msg.pickup_pose),
      dropoff_pose: geometry_msgs::msg::Point::from_rmw_message(msg.dropoff_pose),
      priority: msg.priority,
      created_at: builtin_interfaces::msg::Time::from_rmw_message(msg.created_at),
      deadline: builtin_interfaces::msg::Time::from_rmw_message(msg.deadline),
      status: msg.status.to_string(),
      assigned_robot_id: msg.assigned_robot_id.to_string(),
      requested_robot: msg.requested_robot.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__TaskEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub new_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub details: std::string::String,

}



impl Default for TaskEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskEvent::default())
  }
}

impl rosidl_runtime_rs::Message for TaskEvent {
  type RmwMsg = super::msg::rmw::TaskEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        event_type: msg.event_type.as_str().into(),
        previous_state: msg.previous_state.as_str().into(),
        new_state: msg.new_state.as_str().into(),
        robot_id: msg.robot_id.as_str().into(),
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        details: msg.details.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        task_id: msg.task_id.as_str().into(),
        event_type: msg.event_type.as_str().into(),
        previous_state: msg.previous_state.as_str().into(),
        new_state: msg.new_state.as_str().into(),
        robot_id: msg.robot_id.as_str().into(),
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        details: msg.details.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      task_id: msg.task_id.to_string(),
      event_type: msg.event_type.to_string(),
      previous_state: msg.previous_state.to_string(),
      new_state: msg.new_state.to_string(),
      robot_id: msg.robot_id.to_string(),
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      details: msg.details.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__TaskList

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tasks: Vec<super::msg::TaskDefinition>,

}



impl Default for TaskList {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskList::default())
  }
}

impl rosidl_runtime_rs::Message for TaskList {
  type RmwMsg = super::msg::rmw::TaskList;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        tasks: msg.tasks
          .into_iter()
          .map(|elem| super::msg::TaskDefinition::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        tasks: msg.tasks
          .iter()
          .map(|elem| super::msg::TaskDefinition::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      tasks: msg.tasks
          .into_iter()
          .map(super::msg::TaskDefinition::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__CBBABid

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CBBABid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub iteration: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winning_bids: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winning_robots: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamps: Vec<f64>,

}



impl Default for CBBABid {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CBBABid::default())
  }
}

impl rosidl_runtime_rs::Message for CBBABid {
  type RmwMsg = super::msg::rmw::CBBABid;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        iteration: msg.iteration,
        task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        winning_bids: msg.winning_bids.into(),
        winning_robots: msg.winning_robots
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        timestamps: msg.timestamps.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
      iteration: msg.iteration,
        task_ids: msg.task_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        winning_bids: msg.winning_bids.as_slice().into(),
        winning_robots: msg.winning_robots
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        timestamps: msg.timestamps.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      iteration: msg.iteration,
      task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      winning_bids: msg.winning_bids
          .into_iter()
          .collect(),
      winning_robots: msg.winning_robots
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      timestamps: msg.timestamps
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__RobotBundle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotBundle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bid_values: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_converged: bool,

}



impl Default for RobotBundle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotBundle::default())
  }
}

impl rosidl_runtime_rs::Message for RobotBundle {
  type RmwMsg = super::msg::rmw::RobotBundle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        bid_values: msg.bid_values.into(),
        is_converged: msg.is_converged,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_ids: msg.task_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        bid_values: msg.bid_values.as_slice().into(),
      is_converged: msg.is_converged,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      task_ids: msg.task_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      bid_values: msg.bid_values
          .into_iter()
          .collect(),
      is_converged: msg.is_converged,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__PlanningRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_steps: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_window: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sub_goal_type: std::string::String,

}



impl Default for PlanningRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlanningRequest::default())
  }
}

impl rosidl_runtime_rs::Message for PlanningRequest {
  type RmwMsg = super::msg::rmw::PlanningRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        start_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.start_pose)).into_owned(),
        goal_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.goal_pose)).into_owned(),
        horizon_steps: msg.horizon_steps,
        execution_window: msg.execution_window,
        task_id: msg.task_id.as_str().into(),
        sub_goal_type: msg.sub_goal_type.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        start_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_pose)).into_owned(),
        goal_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_pose)).into_owned(),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
        task_id: msg.task_id.as_str().into(),
        sub_goal_type: msg.sub_goal_type.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      start_pose: geometry_msgs::msg::Point::from_rmw_message(msg.start_pose),
      goal_pose: geometry_msgs::msg::Point::from_rmw_message(msg.goal_pose),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
      task_id: msg.task_id.to_string(),
      sub_goal_type: msg.sub_goal_type.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__PlanningResponse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sub_goal_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub full_path: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_path: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_path: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_cost: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_steps: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_window: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub replan_count: u32,

}



impl Default for PlanningResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PlanningResponse::default())
  }
}

impl rosidl_runtime_rs::Message for PlanningResponse {
  type RmwMsg = super::msg::rmw::PlanningResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        sub_goal_type: msg.sub_goal_type.as_str().into(),
        full_path: msg.full_path
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        horizon_path: msg.horizon_path
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        execution_path: msg.execution_path
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        total_cost: msg.total_cost,
        planning_latency_ms: msg.planning_latency_ms,
        success: msg.success,
        status_message: msg.status_message.as_str().into(),
        horizon_steps: msg.horizon_steps,
        execution_window: msg.execution_window,
        replan_count: msg.replan_count,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        sub_goal_type: msg.sub_goal_type.as_str().into(),
        full_path: msg.full_path
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        horizon_path: msg.horizon_path
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        execution_path: msg.execution_path
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      total_cost: msg.total_cost,
      planning_latency_ms: msg.planning_latency_ms,
      success: msg.success,
        status_message: msg.status_message.as_str().into(),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
      replan_count: msg.replan_count,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      task_id: msg.task_id.to_string(),
      sub_goal_type: msg.sub_goal_type.to_string(),
      full_path: msg.full_path
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      horizon_path: msg.horizon_path
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      execution_path: msg.execution_path
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      total_cost: msg.total_cost,
      planning_latency_ms: msg.planning_latency_ms,
      success: msg.success,
      status_message: msg.status_message.to_string(),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
      replan_count: msg.replan_count,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__RollingHorizonPlan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RollingHorizonPlan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_bundle: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_goal: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_path: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_path: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_steps: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_window: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub replan_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_valid: bool,

}



impl Default for RollingHorizonPlan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RollingHorizonPlan::default())
  }
}

impl rosidl_runtime_rs::Message for RollingHorizonPlan {
  type RmwMsg = super::msg::rmw::RollingHorizonPlan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        assigned_bundle: msg.assigned_bundle
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_task_id: msg.current_task_id.as_str().into(),
        current_phase: msg.current_phase.as_str().into(),
        current_goal: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.current_goal)).into_owned(),
        horizon_path: msg.horizon_path
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        execution_path: msg.execution_path
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        horizon_steps: msg.horizon_steps,
        execution_window: msg.execution_window,
        replan_count: msg.replan_count,
        planning_latency_ms: msg.planning_latency_ms,
        is_valid: msg.is_valid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        assigned_bundle: msg.assigned_bundle
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        current_task_id: msg.current_task_id.as_str().into(),
        current_phase: msg.current_phase.as_str().into(),
        current_goal: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.current_goal)).into_owned(),
        horizon_path: msg.horizon_path
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        execution_path: msg.execution_path
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
      replan_count: msg.replan_count,
      planning_latency_ms: msg.planning_latency_ms,
      is_valid: msg.is_valid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      assigned_bundle: msg.assigned_bundle
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      current_task_id: msg.current_task_id.to_string(),
      current_phase: msg.current_phase.to_string(),
      current_goal: geometry_msgs::msg::Point::from_rmw_message(msg.current_goal),
      horizon_path: msg.horizon_path
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      execution_path: msg.execution_path
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      horizon_steps: msg.horizon_steps,
      execution_window: msg.execution_window,
      replan_count: msg.replan_count,
      planning_latency_ms: msg.planning_latency_ms,
      is_valid: msg.is_valid,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__SpaceTimeReservation

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpaceTimeReservation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub from_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub from_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub to_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub to_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_step: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_edge: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: f64,

}



impl Default for SpaceTimeReservation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SpaceTimeReservation::default())
  }
}

impl rosidl_runtime_rs::Message for SpaceTimeReservation {
  type RmwMsg = super::msg::rmw::SpaceTimeReservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        from_x: msg.from_x,
        from_y: msg.from_y,
        to_x: msg.to_x,
        to_y: msg.to_y,
        time_step: msg.time_step,
        duration_sec: msg.duration_sec,
        is_edge: msg.is_edge,
        priority: msg.priority,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
      from_x: msg.from_x,
      from_y: msg.from_y,
      to_x: msg.to_x,
      to_y: msg.to_y,
      time_step: msg.time_step,
      duration_sec: msg.duration_sec,
      is_edge: msg.is_edge,
      priority: msg.priority,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      from_x: msg.from_x,
      from_y: msg.from_y,
      to_x: msg.to_x,
      to_y: msg.to_y,
      time_step: msg.time_step,
      duration_sec: msg.duration_sec,
      is_edge: msg.is_edge,
      priority: msg.priority,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__ConflictReport

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConflictReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub conflict_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_a: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_b: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cell_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cell_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_step: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolved: bool,

}



impl Default for ConflictReport {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConflictReport::default())
  }
}

impl rosidl_runtime_rs::Message for ConflictReport {
  type RmwMsg = super::msg::rmw::ConflictReport;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        conflict_type: msg.conflict_type.as_str().into(),
        robot_a: msg.robot_a.as_str().into(),
        robot_b: msg.robot_b.as_str().into(),
        cell_x: msg.cell_x,
        cell_y: msg.cell_y,
        time_step: msg.time_step,
        resolved: msg.resolved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        conflict_type: msg.conflict_type.as_str().into(),
        robot_a: msg.robot_a.as_str().into(),
        robot_b: msg.robot_b.as_str().into(),
      cell_x: msg.cell_x,
      cell_y: msg.cell_y,
      time_step: msg.time_step,
      resolved: msg.resolved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      conflict_type: msg.conflict_type.to_string(),
      robot_a: msg.robot_a.to_string(),
      robot_b: msg.robot_b.to_string(),
      cell_x: msg.cell_x,
      cell_y: msg.cell_y,
      time_step: msg.time_step,
      resolved: msg.resolved,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__DeadlockEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeadlockEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cycle_robot_ids: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub root_cause: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub persistence_duration_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_action: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_duration_sec: f64,

}



impl Default for DeadlockEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DeadlockEvent::default())
  }
}

impl rosidl_runtime_rs::Message for DeadlockEvent {
  type RmwMsg = super::msg::rmw::DeadlockEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cycle_robot_ids: msg.cycle_robot_ids
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        root_cause: msg.root_cause.as_str().into(),
        persistence_duration_sec: msg.persistence_duration_sec,
        recovery_action: msg.recovery_action.as_str().into(),
        recovery_success: msg.recovery_success,
        recovery_duration_sec: msg.recovery_duration_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cycle_robot_ids: msg.cycle_robot_ids
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        root_cause: msg.root_cause.as_str().into(),
      persistence_duration_sec: msg.persistence_duration_sec,
        recovery_action: msg.recovery_action.as_str().into(),
      recovery_success: msg.recovery_success,
      recovery_duration_sec: msg.recovery_duration_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cycle_robot_ids: msg.cycle_robot_ids
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      root_cause: msg.root_cause.to_string(),
      persistence_duration_sec: msg.persistence_duration_sec,
      recovery_action: msg.recovery_action.to_string(),
      recovery_success: msg.recovery_success,
      recovery_duration_sec: msg.recovery_duration_sec,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__CoordinationStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CoordinationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_cell_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_cell_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_cell_x: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_cell_y: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_step: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waiting_for_robot: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_y: f64,

}



impl Default for CoordinationStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CoordinationStatus::default())
  }
}

impl rosidl_runtime_rs::Message for CoordinationStatus {
  type RmwMsg = super::msg::rmw::CoordinationStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        priority: msg.priority,
        current_cell_x: msg.current_cell_x,
        current_cell_y: msg.current_cell_y,
        target_cell_x: msg.target_cell_x,
        target_cell_y: msg.target_cell_y,
        time_step: msg.time_step,
        status: msg.status.as_str().into(),
        waiting_for_robot: msg.waiting_for_robot.as_str().into(),
        pose_x: msg.pose_x,
        pose_y: msg.pose_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
      priority: msg.priority,
      current_cell_x: msg.current_cell_x,
      current_cell_y: msg.current_cell_y,
      target_cell_x: msg.target_cell_x,
      target_cell_y: msg.target_cell_y,
      time_step: msg.time_step,
        status: msg.status.as_str().into(),
        waiting_for_robot: msg.waiting_for_robot.as_str().into(),
      pose_x: msg.pose_x,
      pose_y: msg.pose_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      priority: msg.priority,
      current_cell_x: msg.current_cell_x,
      current_cell_y: msg.current_cell_y,
      target_cell_x: msg.target_cell_x,
      target_cell_y: msg.target_cell_y,
      time_step: msg.time_step,
      status: msg.status.to_string(),
      waiting_for_robot: msg.waiting_for_robot.to_string(),
      pose_x: msg.pose_x,
      pose_y: msg.pose_y,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__CommunicationProfile

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommunicationProfile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub profile_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub jitter_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loss_probability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub burst_loss_probability: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub outage_duration_s: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seed: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub isolated_robots: Vec<std::string::String>,

}



impl Default for CommunicationProfile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommunicationProfile::default())
  }
}

impl rosidl_runtime_rs::Message for CommunicationProfile {
  type RmwMsg = super::msg::rmw::CommunicationProfile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        profile_name: msg.profile_name.as_str().into(),
        enabled: msg.enabled,
        latency_ms: msg.latency_ms,
        jitter_ms: msg.jitter_ms,
        loss_probability: msg.loss_probability,
        burst_loss_probability: msg.burst_loss_probability,
        outage_duration_s: msg.outage_duration_s,
        seed: msg.seed,
        isolated_robots: msg.isolated_robots
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        profile_name: msg.profile_name.as_str().into(),
      enabled: msg.enabled,
      latency_ms: msg.latency_ms,
      jitter_ms: msg.jitter_ms,
      loss_probability: msg.loss_probability,
      burst_loss_probability: msg.burst_loss_probability,
      outage_duration_s: msg.outage_duration_s,
      seed: msg.seed,
        isolated_robots: msg.isolated_robots
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      profile_name: msg.profile_name.to_string(),
      enabled: msg.enabled,
      latency_ms: msg.latency_ms,
      jitter_ms: msg.jitter_ms,
      loss_probability: msg.loss_probability,
      burst_loss_probability: msg.burst_loss_probability,
      outage_duration_s: msg.outage_duration_s,
      seed: msg.seed,
      isolated_robots: msg.isolated_robots
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__CommunicationMetrics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommunicationMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub profile_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub messages_sent: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub messages_delivered: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub messages_dropped: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub packet_loss_rate: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub avg_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub p95_latency_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub jitter_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub burst_events_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub outage_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stale_messages_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expired_reservations_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_distance_m: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_count: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub safety_interventions: u32,

}



impl Default for CommunicationMetrics {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommunicationMetrics::default())
  }
}

impl rosidl_runtime_rs::Message for CommunicationMetrics {
  type RmwMsg = super::msg::rmw::CommunicationMetrics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        profile_name: msg.profile_name.as_str().into(),
        messages_sent: msg.messages_sent,
        messages_delivered: msg.messages_delivered,
        messages_dropped: msg.messages_dropped,
        packet_loss_rate: msg.packet_loss_rate,
        avg_latency_ms: msg.avg_latency_ms,
        p95_latency_ms: msg.p95_latency_ms,
        jitter_ms: msg.jitter_ms,
        burst_events_count: msg.burst_events_count,
        outage_active: msg.outage_active,
        stale_messages_count: msg.stale_messages_count,
        expired_reservations_count: msg.expired_reservations_count,
        min_distance_m: msg.min_distance_m,
        collision_count: msg.collision_count,
        safety_interventions: msg.safety_interventions,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        profile_name: msg.profile_name.as_str().into(),
      messages_sent: msg.messages_sent,
      messages_delivered: msg.messages_delivered,
      messages_dropped: msg.messages_dropped,
      packet_loss_rate: msg.packet_loss_rate,
      avg_latency_ms: msg.avg_latency_ms,
      p95_latency_ms: msg.p95_latency_ms,
      jitter_ms: msg.jitter_ms,
      burst_events_count: msg.burst_events_count,
      outage_active: msg.outage_active,
      stale_messages_count: msg.stale_messages_count,
      expired_reservations_count: msg.expired_reservations_count,
      min_distance_m: msg.min_distance_m,
      collision_count: msg.collision_count,
      safety_interventions: msg.safety_interventions,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      profile_name: msg.profile_name.to_string(),
      messages_sent: msg.messages_sent,
      messages_delivered: msg.messages_delivered,
      messages_dropped: msg.messages_dropped,
      packet_loss_rate: msg.packet_loss_rate,
      avg_latency_ms: msg.avg_latency_ms,
      p95_latency_ms: msg.p95_latency_ms,
      jitter_ms: msg.jitter_ms,
      burst_events_count: msg.burst_events_count,
      outage_active: msg.outage_active,
      stale_messages_count: msg.stale_messages_count,
      expired_reservations_count: msg.expired_reservations_count,
      min_distance_m: msg.min_distance_m,
      collision_count: msg.collision_count,
      safety_interventions: msg.safety_interventions,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__ComputeModeEvent
/// Event record published whenever an AMR transitions its adaptive compute mode.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeModeEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_signal: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub threshold_value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dwell_time_sec: f64,

}



impl Default for ComputeModeEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ComputeModeEvent::default())
  }
}

impl rosidl_runtime_rs::Message for ComputeModeEvent {
  type RmwMsg = super::msg::rmw::ComputeModeEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        previous_mode: msg.previous_mode.as_str().into(),
        current_mode: msg.current_mode.as_str().into(),
        trigger_signal: msg.trigger_signal.as_str().into(),
        trigger_value: msg.trigger_value,
        threshold_value: msg.threshold_value,
        reason: msg.reason.as_str().into(),
        dwell_time_sec: msg.dwell_time_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        previous_mode: msg.previous_mode.as_str().into(),
        current_mode: msg.current_mode.as_str().into(),
        trigger_signal: msg.trigger_signal.as_str().into(),
      trigger_value: msg.trigger_value,
      threshold_value: msg.threshold_value,
        reason: msg.reason.as_str().into(),
      dwell_time_sec: msg.dwell_time_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      previous_mode: msg.previous_mode.to_string(),
      current_mode: msg.current_mode.to_string(),
      trigger_signal: msg.trigger_signal.to_string(),
      trigger_value: msg.trigger_value,
      threshold_value: msg.threshold_value,
      reason: msg.reason.to_string(),
      dwell_time_sec: msg.dwell_time_sec,
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__AisleBlockageEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AisleBlockageEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blockage_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_blocked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for AisleBlockageEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AisleBlockageEvent::default())
  }
}

impl rosidl_runtime_rs::Message for AisleBlockageEvent {
  type RmwMsg = super::msg::rmw::AisleBlockageEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        blockage_id: msg.blockage_id.as_str().into(),
        is_blocked: msg.is_blocked,
        min_x: msg.min_x,
        max_x: msg.max_x,
        min_y: msg.min_y,
        max_y: msg.max_y,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        blockage_id: msg.blockage_id.as_str().into(),
      is_blocked: msg.is_blocked,
      min_x: msg.min_x,
      max_x: msg.max_x,
      min_y: msg.min_y,
      max_y: msg.max_y,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      blockage_id: msg.blockage_id.to_string(),
      is_blocked: msg.is_blocked,
      min_x: msg.min_x,
      max_x: msg.max_x,
      min_y: msg.min_y,
      max_y: msg.max_y,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


// Corresponds to amr_fleet_msgs__msg__RobotHealth

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_pose: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uptime_sec: f64,

}



impl Default for RobotHealth {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotHealth::default())
  }
}

impl rosidl_runtime_rs::Message for RobotHealth {
  type RmwMsg = super::msg::rmw::RobotHealth;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        health_state: msg.health_state.as_str().into(),
        last_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.last_pose)).into_owned(),
        active_task_id: msg.active_task_id.as_str().into(),
        uptime_sec: msg.uptime_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        robot_id: msg.robot_id.as_str().into(),
        health_state: msg.health_state.as_str().into(),
        last_pose: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.last_pose)).into_owned(),
        active_task_id: msg.active_task_id.as_str().into(),
      uptime_sec: msg.uptime_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      robot_id: msg.robot_id.to_string(),
      health_state: msg.health_state.to_string(),
      last_pose: geometry_msgs::msg::Point::from_rmw_message(msg.last_pose),
      active_task_id: msg.active_task_id.to_string(),
      uptime_sec: msg.uptime_sec,
    }
  }
}


