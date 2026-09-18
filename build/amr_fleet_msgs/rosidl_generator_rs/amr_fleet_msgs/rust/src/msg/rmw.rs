#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn amr_fleet_msgs__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn amr_fleet_msgs__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotStatus() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskBid() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__TaskBid__init(msg: *mut TaskBid) -> bool;
    fn amr_fleet_msgs__msg__TaskBid__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskBid>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__TaskBid__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskBid>);
    fn amr_fleet_msgs__msg__TaskBid__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskBid>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskBid>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__TaskBid
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskBid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__TaskBid__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__TaskBid__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskBid {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskBid__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskBid__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskBid__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskBid {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskBid where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/TaskBid";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskBid() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskAssignment() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__TaskAssignment__init(msg: *mut TaskAssignment) -> bool;
    fn amr_fleet_msgs__msg__TaskAssignment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskAssignment>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__TaskAssignment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskAssignment>);
    fn amr_fleet_msgs__msg__TaskAssignment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskAssignment>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskAssignment>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__TaskAssignment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskAssignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub allocation_epoch: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confirmed: bool,

}



impl Default for TaskAssignment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__TaskAssignment__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__TaskAssignment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskAssignment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskAssignment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskAssignment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskAssignment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskAssignment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskAssignment where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/TaskAssignment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskAssignment() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__BlockedResource() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__BlockedResource__init(msg: *mut BlockedResource) -> bool;
    fn amr_fleet_msgs__msg__BlockedResource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockedResource>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__BlockedResource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockedResource>);
    fn amr_fleet_msgs__msg__BlockedResource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockedResource>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockedResource>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__BlockedResource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockedResource {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waiting_for_robot_id: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__BlockedResource__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__BlockedResource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockedResource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__BlockedResource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__BlockedResource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__BlockedResource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockedResource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockedResource where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/BlockedResource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__BlockedResource() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__FleetMetrics() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__FleetMetrics__init(msg: *mut FleetMetrics) -> bool;
    fn amr_fleet_msgs__msg__FleetMetrics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FleetMetrics>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__FleetMetrics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FleetMetrics>);
    fn amr_fleet_msgs__msg__FleetMetrics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FleetMetrics>, out_seq: *mut rosidl_runtime_rs::Sequence<FleetMetrics>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__FleetMetrics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__FleetMetrics__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__FleetMetrics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FleetMetrics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__FleetMetrics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__FleetMetrics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__FleetMetrics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FleetMetrics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FleetMetrics where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/FleetMetrics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__FleetMetrics() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskDefinition() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__TaskDefinition__init(msg: *mut TaskDefinition) -> bool;
    fn amr_fleet_msgs__msg__TaskDefinition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskDefinition>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__TaskDefinition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskDefinition>);
    fn amr_fleet_msgs__msg__TaskDefinition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskDefinition>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskDefinition>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__TaskDefinition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskDefinition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_pose: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_pose: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub created_at: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deadline: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_robot: rosidl_runtime_rs::String,

}



impl Default for TaskDefinition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__TaskDefinition__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__TaskDefinition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskDefinition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskDefinition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskDefinition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskDefinition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskDefinition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskDefinition where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/TaskDefinition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskDefinition() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskEvent() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__TaskEvent__init(msg: *mut TaskEvent) -> bool;
    fn amr_fleet_msgs__msg__TaskEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskEvent>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__TaskEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskEvent>);
    fn amr_fleet_msgs__msg__TaskEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskEvent>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__TaskEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub new_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub details: rosidl_runtime_rs::String,

}



impl Default for TaskEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__TaskEvent__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__TaskEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskEvent where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/TaskEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskEvent() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskList() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__TaskList__init(msg: *mut TaskList) -> bool;
    fn amr_fleet_msgs__msg__TaskList__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskList>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__TaskList__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskList>);
    fn amr_fleet_msgs__msg__TaskList__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskList>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskList>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__TaskList
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tasks: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TaskDefinition>,

}



impl Default for TaskList {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__TaskList__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__TaskList__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskList {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskList__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskList__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__TaskList__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskList {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskList where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/TaskList";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__TaskList() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CBBABid() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__CBBABid__init(msg: *mut CBBABid) -> bool;
    fn amr_fleet_msgs__msg__CBBABid__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CBBABid>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__CBBABid__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CBBABid>);
    fn amr_fleet_msgs__msg__CBBABid__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CBBABid>, out_seq: *mut rosidl_runtime_rs::Sequence<CBBABid>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__CBBABid
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CBBABid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub iteration: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winning_bids: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub winning_robots: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamps: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for CBBABid {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__CBBABid__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__CBBABid__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CBBABid {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CBBABid__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CBBABid__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CBBABid__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CBBABid {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CBBABid where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/CBBABid";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CBBABid() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotBundle() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__RobotBundle__init(msg: *mut RobotBundle) -> bool;
    fn amr_fleet_msgs__msg__RobotBundle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotBundle>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__RobotBundle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotBundle>);
    fn amr_fleet_msgs__msg__RobotBundle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotBundle>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotBundle>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__RobotBundle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotBundle {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bid_values: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_converged: bool,

}



impl Default for RobotBundle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__RobotBundle__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__RobotBundle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotBundle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotBundle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotBundle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotBundle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotBundle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotBundle where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/RobotBundle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotBundle() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__PlanningRequest() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__PlanningRequest__init(msg: *mut PlanningRequest) -> bool;
    fn amr_fleet_msgs__msg__PlanningRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanningRequest>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__PlanningRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanningRequest>);
    fn amr_fleet_msgs__msg__PlanningRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanningRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanningRequest>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__PlanningRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_pose: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_pose: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_steps: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_window: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sub_goal_type: rosidl_runtime_rs::String,

}



impl Default for PlanningRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__PlanningRequest__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__PlanningRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanningRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanningRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanningRequest where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/PlanningRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__PlanningRequest() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__PlanningResponse() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__PlanningResponse__init(msg: *mut PlanningResponse) -> bool;
    fn amr_fleet_msgs__msg__PlanningResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanningResponse>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__PlanningResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanningResponse>);
    fn amr_fleet_msgs__msg__PlanningResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanningResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanningResponse>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__PlanningResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanningResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sub_goal_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub full_path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


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
    pub status_message: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__PlanningResponse__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__PlanningResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanningResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__PlanningResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanningResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanningResponse where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/PlanningResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__PlanningResponse() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RollingHorizonPlan() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__RollingHorizonPlan__init(msg: *mut RollingHorizonPlan) -> bool;
    fn amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RollingHorizonPlan>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RollingHorizonPlan>);
    fn amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RollingHorizonPlan>, out_seq: *mut rosidl_runtime_rs::Sequence<RollingHorizonPlan>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__RollingHorizonPlan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RollingHorizonPlan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_bundle: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_goal: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub horizon_path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub execution_path: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__RollingHorizonPlan__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__RollingHorizonPlan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RollingHorizonPlan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RollingHorizonPlan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RollingHorizonPlan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RollingHorizonPlan where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/RollingHorizonPlan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RollingHorizonPlan() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__SpaceTimeReservation() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__SpaceTimeReservation__init(msg: *mut SpaceTimeReservation) -> bool;
    fn amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpaceTimeReservation>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpaceTimeReservation>);
    fn amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpaceTimeReservation>, out_seq: *mut rosidl_runtime_rs::Sequence<SpaceTimeReservation>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__SpaceTimeReservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpaceTimeReservation {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__SpaceTimeReservation__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__SpaceTimeReservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpaceTimeReservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__SpaceTimeReservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpaceTimeReservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpaceTimeReservation where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/SpaceTimeReservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__SpaceTimeReservation() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__ConflictReport() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__ConflictReport__init(msg: *mut ConflictReport) -> bool;
    fn amr_fleet_msgs__msg__ConflictReport__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConflictReport>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__ConflictReport__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConflictReport>);
    fn amr_fleet_msgs__msg__ConflictReport__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConflictReport>, out_seq: *mut rosidl_runtime_rs::Sequence<ConflictReport>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__ConflictReport
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConflictReport {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub conflict_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_a: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_b: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__ConflictReport__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__ConflictReport__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConflictReport {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ConflictReport__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ConflictReport__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ConflictReport__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConflictReport {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConflictReport where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/ConflictReport";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__ConflictReport() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__DeadlockEvent() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__DeadlockEvent__init(msg: *mut DeadlockEvent) -> bool;
    fn amr_fleet_msgs__msg__DeadlockEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeadlockEvent>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__DeadlockEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeadlockEvent>);
    fn amr_fleet_msgs__msg__DeadlockEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeadlockEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<DeadlockEvent>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__DeadlockEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeadlockEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cycle_robot_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub root_cause: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub persistence_duration_sec: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_action: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recovery_duration_sec: f64,

}



impl Default for DeadlockEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__DeadlockEvent__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__DeadlockEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeadlockEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__DeadlockEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__DeadlockEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__DeadlockEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeadlockEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeadlockEvent where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/DeadlockEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__DeadlockEvent() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CoordinationStatus() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__CoordinationStatus__init(msg: *mut CoordinationStatus) -> bool;
    fn amr_fleet_msgs__msg__CoordinationStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CoordinationStatus>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CoordinationStatus>);
    fn amr_fleet_msgs__msg__CoordinationStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CoordinationStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<CoordinationStatus>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__CoordinationStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CoordinationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


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
    pub status: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waiting_for_robot: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_y: f64,

}



impl Default for CoordinationStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__CoordinationStatus__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__CoordinationStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CoordinationStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CoordinationStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CoordinationStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CoordinationStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CoordinationStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CoordinationStatus where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/CoordinationStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CoordinationStatus() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CommunicationProfile() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__CommunicationProfile__init(msg: *mut CommunicationProfile) -> bool;
    fn amr_fleet_msgs__msg__CommunicationProfile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommunicationProfile>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommunicationProfile>);
    fn amr_fleet_msgs__msg__CommunicationProfile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommunicationProfile>, out_seq: *mut rosidl_runtime_rs::Sequence<CommunicationProfile>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__CommunicationProfile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommunicationProfile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub profile_name: rosidl_runtime_rs::String,


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
    pub isolated_robots: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for CommunicationProfile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__CommunicationProfile__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__CommunicationProfile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommunicationProfile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationProfile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationProfile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationProfile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommunicationProfile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommunicationProfile where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/CommunicationProfile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CommunicationProfile() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CommunicationMetrics() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__CommunicationMetrics__init(msg: *mut CommunicationMetrics) -> bool;
    fn amr_fleet_msgs__msg__CommunicationMetrics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommunicationMetrics>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__CommunicationMetrics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommunicationMetrics>);
    fn amr_fleet_msgs__msg__CommunicationMetrics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommunicationMetrics>, out_seq: *mut rosidl_runtime_rs::Sequence<CommunicationMetrics>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__CommunicationMetrics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommunicationMetrics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub profile_name: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__CommunicationMetrics__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__CommunicationMetrics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommunicationMetrics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationMetrics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationMetrics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__CommunicationMetrics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommunicationMetrics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommunicationMetrics where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/CommunicationMetrics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__CommunicationMetrics() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__ComputeModeEvent() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__ComputeModeEvent__init(msg: *mut ComputeModeEvent) -> bool;
    fn amr_fleet_msgs__msg__ComputeModeEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ComputeModeEvent>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__ComputeModeEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ComputeModeEvent>);
    fn amr_fleet_msgs__msg__ComputeModeEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ComputeModeEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<ComputeModeEvent>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__ComputeModeEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Event record published whenever an AMR transitions its adaptive compute mode.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ComputeModeEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_signal: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub threshold_value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dwell_time_sec: f64,

}



impl Default for ComputeModeEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__ComputeModeEvent__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__ComputeModeEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ComputeModeEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ComputeModeEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ComputeModeEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__ComputeModeEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ComputeModeEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ComputeModeEvent where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/ComputeModeEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__ComputeModeEvent() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__AisleBlockageEvent() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__AisleBlockageEvent__init(msg: *mut AisleBlockageEvent) -> bool;
    fn amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AisleBlockageEvent>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AisleBlockageEvent>);
    fn amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AisleBlockageEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<AisleBlockageEvent>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__AisleBlockageEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AisleBlockageEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub blockage_id: rosidl_runtime_rs::String,


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
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for AisleBlockageEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__AisleBlockageEvent__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__AisleBlockageEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AisleBlockageEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__AisleBlockageEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AisleBlockageEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AisleBlockageEvent where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/AisleBlockageEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__AisleBlockageEvent() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotHealth() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__msg__RobotHealth__init(msg: *mut RobotHealth) -> bool;
    fn amr_fleet_msgs__msg__RobotHealth__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotHealth>, size: usize) -> bool;
    fn amr_fleet_msgs__msg__RobotHealth__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotHealth>);
    fn amr_fleet_msgs__msg__RobotHealth__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotHealth>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotHealth>) -> bool;
}

// Corresponds to amr_fleet_msgs__msg__RobotHealth
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub health_state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_pose: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub active_task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uptime_sec: f64,

}



impl Default for RobotHealth {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__msg__RobotHealth__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__msg__RobotHealth__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotHealth {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotHealth__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotHealth__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__msg__RobotHealth__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotHealth {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotHealth where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/msg/RobotHealth";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__msg__RobotHealth() }
  }
}


