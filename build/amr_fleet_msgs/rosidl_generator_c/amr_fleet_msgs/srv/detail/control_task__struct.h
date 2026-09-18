// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:srv/ControlTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/control_task.h"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_H_
#define AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlTask in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__srv__ControlTask_Request
{
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String action;
} amr_fleet_msgs__srv__ControlTask_Request;

// Struct for a sequence of amr_fleet_msgs__srv__ControlTask_Request.
typedef struct amr_fleet_msgs__srv__ControlTask_Request__Sequence
{
  amr_fleet_msgs__srv__ControlTask_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__srv__ControlTask_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlTask in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__srv__ControlTask_Response
{
  bool success;
  rosidl_runtime_c__String message;
} amr_fleet_msgs__srv__ControlTask_Response;

// Struct for a sequence of amr_fleet_msgs__srv__ControlTask_Response.
typedef struct amr_fleet_msgs__srv__ControlTask_Response__Sequence
{
  amr_fleet_msgs__srv__ControlTask_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__srv__ControlTask_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  amr_fleet_msgs__srv__ControlTask_Event__request__MAX_SIZE = 1
};
// response
enum
{
  amr_fleet_msgs__srv__ControlTask_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ControlTask in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__srv__ControlTask_Event
{
  service_msgs__msg__ServiceEventInfo info;
  amr_fleet_msgs__srv__ControlTask_Request__Sequence request;
  amr_fleet_msgs__srv__ControlTask_Response__Sequence response;
} amr_fleet_msgs__srv__ControlTask_Event;

// Struct for a sequence of amr_fleet_msgs__srv__ControlTask_Event.
typedef struct amr_fleet_msgs__srv__ControlTask_Event__Sequence
{
  amr_fleet_msgs__srv__ControlTask_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__srv__ControlTask_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_H_
