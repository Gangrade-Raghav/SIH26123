// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_health.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_H_

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
// Member 'health_state'
// Member 'active_task_id'
#include "rosidl_runtime_c/string.h"
// Member 'last_pose'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RobotHealth in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__RobotHealth
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String health_state;
  geometry_msgs__msg__Point last_pose;
  rosidl_runtime_c__String active_task_id;
  double uptime_sec;
} amr_fleet_msgs__msg__RobotHealth;

// Struct for a sequence of amr_fleet_msgs__msg__RobotHealth.
typedef struct amr_fleet_msgs__msg__RobotHealth__Sequence
{
  amr_fleet_msgs__msg__RobotHealth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__RobotHealth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_H_
