// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/BlockedResource.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/blocked_resource.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_H_

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
// Member 'waiting_for_robot_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BlockedResource in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__BlockedResource
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String waiting_for_robot_id;
  int32_t resource_x;
  int32_t resource_y;
  int32_t resource_t;
  uint64_t epoch;
} amr_fleet_msgs__msg__BlockedResource;

// Struct for a sequence of amr_fleet_msgs__msg__BlockedResource.
typedef struct amr_fleet_msgs__msg__BlockedResource__Sequence
{
  amr_fleet_msgs__msg__BlockedResource * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__BlockedResource__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__STRUCT_H_
