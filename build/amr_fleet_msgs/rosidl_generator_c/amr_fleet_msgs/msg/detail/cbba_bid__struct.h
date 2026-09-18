// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/cbba_bid.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_H_

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
// Member 'winning_robots'
#include "rosidl_runtime_c/string.h"
// Member 'winning_bids'
// Member 'timestamps'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CBBABid in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__CBBABid
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  uint32_t iteration;
  rosidl_runtime_c__String__Sequence task_ids;
  rosidl_runtime_c__double__Sequence winning_bids;
  rosidl_runtime_c__String__Sequence winning_robots;
  rosidl_runtime_c__double__Sequence timestamps;
} amr_fleet_msgs__msg__CBBABid;

// Struct for a sequence of amr_fleet_msgs__msg__CBBABid.
typedef struct amr_fleet_msgs__msg__CBBABid__Sequence
{
  amr_fleet_msgs__msg__CBBABid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__CBBABid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_H_
