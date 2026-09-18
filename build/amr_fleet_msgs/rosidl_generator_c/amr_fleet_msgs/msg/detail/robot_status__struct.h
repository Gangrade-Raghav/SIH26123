// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_status.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

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
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/RobotStatus in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__RobotStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  rosidl_runtime_c__String state;
  uint64_t plan_epoch;
  float battery_percentage;
  float cpu_load;
} amr_fleet_msgs__msg__RobotStatus;

// Struct for a sequence of amr_fleet_msgs__msg__RobotStatus.
typedef struct amr_fleet_msgs__msg__RobotStatus__Sequence
{
  amr_fleet_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
