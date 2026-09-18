// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/coordination_status.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_H_

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
// Member 'status'
// Member 'waiting_for_robot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CoordinationStatus in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__CoordinationStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  double priority;
  int32_t current_cell_x;
  int32_t current_cell_y;
  int32_t target_cell_x;
  int32_t target_cell_y;
  int32_t time_step;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String waiting_for_robot;
  double pose_x;
  double pose_y;
} amr_fleet_msgs__msg__CoordinationStatus;

// Struct for a sequence of amr_fleet_msgs__msg__CoordinationStatus.
typedef struct amr_fleet_msgs__msg__CoordinationStatus__Sequence
{
  amr_fleet_msgs__msg__CoordinationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__CoordinationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_H_
