// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_request.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_

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
// Member 'task_id'
// Member 'sub_goal_type'
#include "rosidl_runtime_c/string.h"
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PlanningRequest in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__PlanningRequest
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  geometry_msgs__msg__Point start_pose;
  geometry_msgs__msg__Point goal_pose;
  uint32_t horizon_steps;
  uint32_t execution_window;
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String sub_goal_type;
} amr_fleet_msgs__msg__PlanningRequest;

// Struct for a sequence of amr_fleet_msgs__msg__PlanningRequest.
typedef struct amr_fleet_msgs__msg__PlanningRequest__Sequence
{
  amr_fleet_msgs__msg__PlanningRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__PlanningRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_H_
