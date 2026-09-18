// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/FleetMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/fleet_metrics.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/fleet_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FleetMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: active_robots
  {
    out << "active_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.active_robots, out);
    out << ", ";
  }

  // member: completed_tasks
  {
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
    out << ", ";
  }

  // member: throughput
  {
    out << "throughput: ";
    rosidl_generator_traits::value_to_yaml(msg.throughput, out);
    out << ", ";
  }

  // member: p50_planning_latency_ms
  {
    out << "p50_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p50_planning_latency_ms, out);
    out << ", ";
  }

  // member: p95_planning_latency_ms
  {
    out << "p95_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p95_planning_latency_ms, out);
    out << ", ";
  }

  // member: p99_planning_latency_ms
  {
    out << "p99_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p99_planning_latency_ms, out);
    out << ", ";
  }

  // member: total_network_bytes
  {
    out << "total_network_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_network_bytes, out);
    out << ", ";
  }

  // member: deadlock_count
  {
    out << "deadlock_count: ";
    rosidl_generator_traits::value_to_yaml(msg.deadlock_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetMetrics & msg,
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

  // member: active_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_robots: ";
    rosidl_generator_traits::value_to_yaml(msg.active_robots, out);
    out << "\n";
  }

  // member: completed_tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completed_tasks: ";
    rosidl_generator_traits::value_to_yaml(msg.completed_tasks, out);
    out << "\n";
  }

  // member: throughput
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throughput: ";
    rosidl_generator_traits::value_to_yaml(msg.throughput, out);
    out << "\n";
  }

  // member: p50_planning_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p50_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p50_planning_latency_ms, out);
    out << "\n";
  }

  // member: p95_planning_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p95_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p95_planning_latency_ms, out);
    out << "\n";
  }

  // member: p99_planning_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p99_planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.p99_planning_latency_ms, out);
    out << "\n";
  }

  // member: total_network_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_network_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.total_network_bytes, out);
    out << "\n";
  }

  // member: deadlock_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadlock_count: ";
    rosidl_generator_traits::value_to_yaml(msg.deadlock_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetMetrics & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::FleetMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::FleetMetrics & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::FleetMetrics>()
{
  return "amr_fleet_msgs::msg::FleetMetrics";
}

template<>
inline const char * name<amr_fleet_msgs::msg::FleetMetrics>()
{
  return "amr_fleet_msgs/msg/FleetMetrics";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::FleetMetrics>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::FleetMetrics>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<amr_fleet_msgs::msg::FleetMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__FLEET_METRICS__TRAITS_HPP_
