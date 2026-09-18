// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_metrics.h"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_H_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CommunicationMetrics in the package amr_fleet_msgs.
typedef struct amr_fleet_msgs__msg__CommunicationMetrics
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String profile_name;
  uint64_t messages_sent;
  uint64_t messages_delivered;
  uint64_t messages_dropped;
  double packet_loss_rate;
  double avg_latency_ms;
  double p95_latency_ms;
  double jitter_ms;
  uint32_t burst_events_count;
  bool outage_active;
  uint32_t stale_messages_count;
  uint32_t expired_reservations_count;
  double min_distance_m;
  uint32_t collision_count;
  uint32_t safety_interventions;
} amr_fleet_msgs__msg__CommunicationMetrics;

// Struct for a sequence of amr_fleet_msgs__msg__CommunicationMetrics.
typedef struct amr_fleet_msgs__msg__CommunicationMetrics__Sequence
{
  amr_fleet_msgs__msg__CommunicationMetrics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_fleet_msgs__msg__CommunicationMetrics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__STRUCT_H_
