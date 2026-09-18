// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/aisle_blockage_event.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_H_

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
// Member 'blockage_id'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/AisleBlockageEvent in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__AisleBlockageEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String blockage_id;
  bool is_blocked;
  double min_x;
  double max_x;
  double min_y;
  double max_y;
  builtin_interfaces__msg__Time timestamp;
} amr_fleet_msgs__msg__AisleBlockageEvent;

// Struct for a sequence of amr_fleet_msgs__msg__AisleBlockageEvent.
typedef struct amr_fleet_msgs__msg__AisleBlockageEvent__Sequence
{
  amr_fleet_msgs__msg__AisleBlockageEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__AisleBlockageEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__STRUCT_H_
