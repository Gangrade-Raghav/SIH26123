// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/conflict_report.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_H_

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
// Member 'conflict_type'
// Member 'robot_a'
// Member 'robot_b'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ConflictReport in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__ConflictReport
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String conflict_type;
  rosidl_runtime_c__String robot_a;
  rosidl_runtime_c__String robot_b;
  int32_t cell_x;
  int32_t cell_y;
  int32_t time_step;
  bool resolved;
} amr_fleet_msgs__msg__ConflictReport;

// Struct for a sequence of amr_fleet_msgs__msg__ConflictReport.
typedef struct amr_fleet_msgs__msg__ConflictReport__Sequence
{
  amr_fleet_msgs__msg__ConflictReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__ConflictReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_H_
