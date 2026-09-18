// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/TaskDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_definition.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_H_

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
// Member 'status'
// Member 'assigned_robot_id'
// Member 'requested_robot'
#include "rosidl_runtime_c/string.h"
// Member 'pickup_pose'
// Member 'dropoff_pose'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'created_at'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TaskDefinition in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__TaskDefinition
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String task_id;
  geometry_msgs__msg__Point pickup_pose;
  geometry_msgs__msg__Point dropoff_pose;
  int32_t priority;
  builtin_interfaces__msg__Time created_at;
  builtin_interfaces__msg__Time deadline;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String assigned_robot_id;
  rosidl_runtime_c__String requested_robot;
} amr_fleet_msgs__msg__TaskDefinition;

// Struct for a sequence of amr_fleet_msgs__msg__TaskDefinition.
typedef struct amr_fleet_msgs__msg__TaskDefinition__Sequence
{
  amr_fleet_msgs__msg__TaskDefinition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__TaskDefinition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_H_
