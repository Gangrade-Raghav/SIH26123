// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/deadlock_event.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_H_

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
// Member 'cycle_robot_ids'
// Member 'root_cause'
// Member 'recovery_action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DeadlockEvent in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__DeadlockEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence cycle_robot_ids;
  rosidl_runtime_c__String root_cause;
  double persistence_duration_sec;
  rosidl_runtime_c__String recovery_action;
  bool recovery_success;
  double recovery_duration_sec;
} amr_fleet_msgs__msg__DeadlockEvent;

// Struct for a sequence of amr_fleet_msgs__msg__DeadlockEvent.
typedef struct amr_fleet_msgs__msg__DeadlockEvent__Sequence
{
  amr_fleet_msgs__msg__DeadlockEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__DeadlockEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__STRUCT_H_
