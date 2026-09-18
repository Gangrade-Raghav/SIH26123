// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/communication_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommunicationMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: profile_name
  {
    out << "profile_name: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_name, out);
    out << ", ";
  }

  // member: messages_sent
  {
    out << "messages_sent: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_sent, out);
    out << ", ";
  }

  // member: messages_delivered
  {
    out << "messages_delivered: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_delivered, out);
    out << ", ";
  }

  // member: messages_dropped
  {
    out << "messages_dropped: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_dropped, out);
    out << ", ";
  }

  // member: packet_loss_rate
  {
    out << "packet_loss_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.packet_loss_rate, out);
    out << ", ";
  }

  // member: avg_latency_ms
  {
    out << "avg_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_latency_ms, out);
    out << ", ";
  }

  // member: p95_latency_ms
  {
    out << "p95_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p95_latency_ms, out);
    out << ", ";
  }

  // member: jitter_ms
  {
    out << "jitter_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter_ms, out);
    out << ", ";
  }

  // member: burst_events_count
  {
    out << "burst_events_count: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_events_count, out);
    out << ", ";
  }

  // member: outage_active
  {
    out << "outage_active: ";
    rosidl_generator_traits::value_to_yaml(msg.outage_active, out);
    out << ", ";
  }

  // member: stale_messages_count
  {
    out << "stale_messages_count: ";
    rosidl_generator_traits::value_to_yaml(msg.stale_messages_count, out);
    out << ", ";
  }

  // member: expired_reservations_count
  {
    out << "expired_reservations_count: ";
    rosidl_generator_traits::value_to_yaml(msg.expired_reservations_count, out);
    out << ", ";
  }

  // member: min_distance_m
  {
    out << "min_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.min_distance_m, out);
    out << ", ";
  }

  // member: collision_count
  {
    out << "collision_count: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_count, out);
    out << ", ";
  }

  // member: safety_interventions
  {
    out << "safety_interventions: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_interventions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommunicationMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: profile_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_name: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_name, out);
    out << "\n";
  }

  // member: messages_sent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages_sent: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_sent, out);
    out << "\n";
  }

  // member: messages_delivered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages_delivered: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_delivered, out);
    out << "\n";
  }

  // member: messages_dropped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "messages_dropped: ";
    rosidl_generator_traits::value_to_yaml(msg.messages_dropped, out);
    out << "\n";
  }

  // member: packet_loss_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "packet_loss_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.packet_loss_rate, out);
    out << "\n";
  }

  // member: avg_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_latency_ms, out);
    out << "\n";
  }

  // member: p95_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p95_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p95_latency_ms, out);
    out << "\n";
  }

  // member: jitter_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jitter_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter_ms, out);
    out << "\n";
  }

  // member: burst_events_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "burst_events_count: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_events_count, out);
    out << "\n";
  }

  // member: outage_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outage_active: ";
    rosidl_generator_traits::value_to_yaml(msg.outage_active, out);
    out << "\n";
  }

  // member: stale_messages_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stale_messages_count: ";
    rosidl_generator_traits::value_to_yaml(msg.stale_messages_count, out);
    out << "\n";
  }

  // member: expired_reservations_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expired_reservations_count: ";
    rosidl_generator_traits::value_to_yaml(msg.expired_reservations_count, out);
    out << "\n";
  }

  // member: min_distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.min_distance_m, out);
    out << "\n";
  }

  // member: collision_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_count: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_count, out);
    out << "\n";
  }

  // member: safety_interventions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_interventions: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_interventions, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommunicationMetrics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace amr_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use amr_fleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_fleet_msgs::msg::CommunicationMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::CommunicationMetrics & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::CommunicationMetrics>()
{
  return "amr_fleet_msgs::msg::CommunicationMetrics";
}

template<>
inline const char * name<amr_fleet_msgs::msg::CommunicationMetrics>()
{
  return "amr_fleet_msgs/msg/CommunicationMetrics";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::CommunicationMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::CommunicationMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::CommunicationMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_METRICS__TRAITS_HPP_
