// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/rolling_horizon_plan.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_H_

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
// Member 'assigned_bundle'
// Member 'current_task_id'
// Member 'current_phase'
#include "rosidl_runtime_c/string.h"
// Member 'current_goal'
// Member 'horizon_path'
// Member 'execution_path'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RollingHorizonPlan in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__RollingHorizonPlan
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String__Sequence assigned_bundle;
  rosidl_runtime_c__String current_task_id;
  rosidl_runtime_c__String current_phase;
  geometry_msgs__msg__Point current_goal;
  geometry_msgs__msg__Point__Sequence horizon_path;
  geometry_msgs__msg__Point__Sequence execution_path;
  uint32_t horizon_steps;
  uint32_t execution_window;
  uint32_t replan_count;
  double planning_latency_ms;
  bool is_valid;
} amr_fleet_msgs__msg__RollingHorizonPlan;

// Struct for a sequence of amr_fleet_msgs__msg__RollingHorizonPlan.
typedef struct amr_fleet_msgs__msg__RollingHorizonPlan__Sequence
{
  amr_fleet_msgs__msg__RollingHorizonPlan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__RollingHorizonPlan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__STRUCT_H_
