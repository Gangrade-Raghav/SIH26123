// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_profile.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_H_

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
// Member 'profile_name'
// Member 'isolated_robots'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CommunicationProfile in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__CommunicationProfile
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String profile_name;
  bool enabled;
  double latency_ms;
  double jitter_ms;
  double loss_probability;
  double burst_loss_probability;
  double outage_duration_s;
  uint32_t seed;
  rosidl_runtime_c__String__Sequence isolated_robots;
} amr_fleet_msgs__msg__CommunicationProfile;

// Struct for a sequence of amr_fleet_msgs__msg__CommunicationProfile.
typedef struct amr_fleet_msgs__msg__CommunicationProfile__Sequence
{
  amr_fleet_msgs__msg__CommunicationProfile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__CommunicationProfile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_H_
