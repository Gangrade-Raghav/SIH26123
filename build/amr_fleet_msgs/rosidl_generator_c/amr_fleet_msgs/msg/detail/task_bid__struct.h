// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/TaskBid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_bid.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TaskBid in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__TaskBid
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String task_id;
  double bid_value;
  double path_cost;
  uint64_t allocation_epoch;
} amr_fleet_msgs__msg__TaskBid;

// Struct for a sequence of amr_fleet_msgs__msg__TaskBid.
typedef struct amr_fleet_msgs__msg__TaskBid__Sequence
{
  amr_fleet_msgs__msg__TaskBid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__TaskBid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__STRUCT_H_
