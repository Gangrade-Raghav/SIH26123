#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__CreateTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__CreateTask_Request__init(msg: *mut CreateTask_Request) -> bool;
    fn amr_fleet_msgs__srv__CreateTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Request>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__CreateTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Request>);
    fn amr_fleet_msgs__srv__CreateTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Request>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__CreateTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub deadline: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_robot: rosidl_runtime_rs::String,

}



impl Default for CreateTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__CreateTask_Request__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__CreateTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/CreateTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__CreateTask_Request() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__CreateTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__CreateTask_Response__init(msg: *mut CreateTask_Response) -> bool;
    fn amr_fleet_msgs__srv__CreateTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Response>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__CreateTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Response>);
    fn amr_fleet_msgs__srv__CreateTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateTask_Response>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__CreateTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for CreateTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__CreateTask_Response__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__CreateTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__CreateTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/CreateTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__CreateTask_Response() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__ControlTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__ControlTask_Request__init(msg: *mut ControlTask_Request) -> bool;
    fn amr_fleet_msgs__srv__ControlTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Request>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__ControlTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Request>);
    fn amr_fleet_msgs__srv__ControlTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Request>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__ControlTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: rosidl_runtime_rs::String,

}



impl Default for ControlTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__ControlTask_Request__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__ControlTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/ControlTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__ControlTask_Request() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__ControlTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__ControlTask_Response__init(msg: *mut ControlTask_Response) -> bool;
    fn amr_fleet_msgs__srv__ControlTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Response>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__ControlTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Response>);
    fn amr_fleet_msgs__srv__ControlTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlTask_Response>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__ControlTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ControlTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__ControlTask_Response__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__ControlTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__ControlTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/ControlTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__ControlTask_Response() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__InjectFault_Request() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__InjectFault_Request__init(msg: *mut InjectFault_Request) -> bool;
    fn amr_fleet_msgs__srv__InjectFault_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Request>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__InjectFault_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Request>);
    fn amr_fleet_msgs__srv__InjectFault_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InjectFault_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Request>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__InjectFault_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InjectFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f64,

}



impl Default for InjectFault_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__InjectFault_Request__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__InjectFault_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InjectFault_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InjectFault_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InjectFault_Request where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/InjectFault_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__InjectFault_Request() }
  }
}


#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__InjectFault_Response() -> *const std::ffi::c_void;
}

#[link(name = "amr_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn amr_fleet_msgs__srv__InjectFault_Response__init(msg: *mut InjectFault_Response) -> bool;
    fn amr_fleet_msgs__srv__InjectFault_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Response>, size: usize) -> bool;
    fn amr_fleet_msgs__srv__InjectFault_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Response>);
    fn amr_fleet_msgs__srv__InjectFault_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InjectFault_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<InjectFault_Response>) -> bool;
}

// Corresponds to amr_fleet_msgs__srv__InjectFault_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InjectFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for InjectFault_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !amr_fleet_msgs__srv__InjectFault_Response__init(&mut msg as *mut _) {
        panic!("Call to amr_fleet_msgs__srv__InjectFault_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InjectFault_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { amr_fleet_msgs__srv__InjectFault_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InjectFault_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InjectFault_Response where Self: Sized {
  const TYPE_NAME: &'static str = "amr_fleet_msgs/srv/InjectFault_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__amr_fleet_msgs__srv__InjectFault_Response() }
  }
}






#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__CreateTask() -> *const std::ffi::c_void;
}

// Corresponds to amr_fleet_msgs__srv__CreateTask
#[allow(missing_docs, non_camel_case_types)]
pub struct CreateTask;

impl rosidl_runtime_rs::Service for CreateTask {
    type Request = CreateTask_Request;
    type Response = CreateTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__CreateTask() }
    }
}




#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__ControlTask() -> *const std::ffi::c_void;
}

// Corresponds to amr_fleet_msgs__srv__ControlTask
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlTask;

impl rosidl_runtime_rs::Service for ControlTask {
    type Request = ControlTask_Request;
    type Response = ControlTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__ControlTask() }
    }
}




#[link(name = "amr_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__InjectFault() -> *const std::ffi::c_void;
}

// Corresponds to amr_fleet_msgs__srv__InjectFault
#[allow(missing_docs, non_camel_case_types)]
pub struct InjectFault;

impl rosidl_runtime_rs::Service for InjectFault {
    type Request = InjectFault_Request;
    type Response = InjectFault_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__amr_fleet_msgs__srv__InjectFault() }
    }
}


