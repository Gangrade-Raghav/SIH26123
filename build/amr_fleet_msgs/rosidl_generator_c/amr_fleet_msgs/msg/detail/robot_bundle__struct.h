// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/RobotBundle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_bundle.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__STRUCT_H_

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
// Member 'robot_id'
// Member 'task_ids'
#include "rosidl_runtime_c/string.h"
// Member 'bid_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RobotBundle in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__RobotBundle
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String__Sequence task_ids;
  rosidl_runtime_c__double__Sequence bid_values;
  bool is_converged;
} amr_fleet_msgs__msg__RobotBundle;

// Struct for a sequence of amr_fleet_msgs__msg__RobotBundle.
typedef struct amr_fleet_msgs__msg__RobotBundle__Sequence
{
  amr_fleet_msgs__msg__RobotBundle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__RobotBundle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__STRUCT_H_
