// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/TaskEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_event.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__STRUCT_H_

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
// Member 'task_id'
// Member 'event_type'
// Member 'previous_state'
// Member 'new_state'
// Member 'robot_id'
// Member 'details'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TaskEvent in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__TaskEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String event_type;
  rosidl_runtime_c__String previous_state;
  rosidl_runtime_c__String new_state;
  rosidl_runtime_c__String robot_id;
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String details;
} amr_fleet_msgs__msg__TaskEvent;

// Struct for a sequence of amr_fleet_msgs__msg__TaskEvent.
typedef struct amr_fleet_msgs__msg__TaskEvent__Sequence
{
  amr_fleet_msgs__msg__TaskEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__TaskEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__STRUCT_H_
