#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to amr_fleet_msgs__srv__CreateTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


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
    pub requested_robot: std::string::String,

}



impl Default for CreateTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CreateTask_Request {
  type RmwMsg = super::srv::rmw::CreateTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        pickup_x: msg.pickup_x,
        pickup_y: msg.pickup_y,
        dropoff_x: msg.dropoff_x,
        dropoff_y: msg.dropoff_y,
        priority: msg.priority,
        deadline: msg.deadline,
        requested_robot: msg.requested_robot.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
      pickup_x: msg.pickup_x,
      pickup_y: msg.pickup_y,
      dropoff_x: msg.dropoff_x,
      dropoff_y: msg.dropoff_y,
      priority: msg.priority,
      deadline: msg.deadline,
        requested_robot: msg.requested_robot.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      pickup_x: msg.pickup_x,
      pickup_y: msg.pickup_y,
      dropoff_x: msg.dropoff_x,
      dropoff_y: msg.dropoff_y,
      priority: msg.priority,
      deadline: msg.deadline,
      requested_robot: msg.requested_robot.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__srv__CreateTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for CreateTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CreateTask_Response {
  type RmwMsg = super::srv::rmw::CreateTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        task_id: msg.task_id.as_str().into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        task_id: msg.task_id.as_str().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      task_id: msg.task_id.to_string(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__srv__ControlTask_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlTask_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: std::string::String,

}



impl Default for ControlTask_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlTask_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ControlTask_Request {
  type RmwMsg = super::srv::rmw::ControlTask_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        action: msg.action.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        action: msg.action.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      action: msg.action.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__srv__ControlTask_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlTask_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ControlTask_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlTask_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ControlTask_Response {
  type RmwMsg = super::srv::rmw::ControlTask_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to amr_fleet_msgs__srv__InjectFault_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InjectFault_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fault_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub duration_sec: f64,

}



impl Default for InjectFault_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::InjectFault_Request::default())
  }
}

impl rosidl_runtime_rs::Message for InjectFault_Request {
  type RmwMsg = super::srv::rmw::InjectFault_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fault_type: msg.fault_type.as_str().into(),
        duration_sec: msg.duration_sec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fault_type: msg.fault_type.as_str().into(),
      duration_sec: msg.duration_sec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fault_type: msg.fault_type.to_string(),
      duration_sec: msg.duration_sec,
    }
  }
}


// Corresponds to amr_fleet_msgs__srv__InjectFault_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InjectFault_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for InjectFault_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::InjectFault_Response::default())
  }
}

impl rosidl_runtime_rs::Message for InjectFault_Response {
  type RmwMsg = super::srv::rmw::InjectFault_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


