// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/compute_mode_event.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_H_

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
// Member 'previous_mode'
// Member 'current_mode'
// Member 'trigger_signal'
// Member 'reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ComputeModeEvent in the package amr_fleet_msgs.
/**
  * Event record published whenever an AMR transitions its adaptive compute mode.
 */
typedef struct amr_fleet_msgs__msg__ComputeModeEvent
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String robot_id;
  rosidl_runtime_c__String previous_mode;
  rosidl_runtime_c__String current_mode;
  rosidl_runtime_c__String trigger_signal;
  double trigger_value;
  double threshold_value;
  rosidl_runtime_c__String reason;
  double dwell_time_sec;
} amr_fleet_msgs__msg__ComputeModeEvent;

// Struct for a sequence of amr_fleet_msgs__msg__ComputeModeEvent.
typedef struct amr_fleet_msgs__msg__ComputeModeEvent__Sequence
{
  amr_fleet_msgs__msg__ComputeModeEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__ComputeModeEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__STRUCT_H_
