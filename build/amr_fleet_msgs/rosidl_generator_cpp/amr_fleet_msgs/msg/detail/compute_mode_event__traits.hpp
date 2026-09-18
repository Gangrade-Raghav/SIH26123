// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/compute_mode_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/compute_mode_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComputeModeEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: previous_mode
  {
    out << "previous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_mode, out);
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << ", ";
  }

  // member: trigger_signal
  {
    out << "trigger_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_signal, out);
    out << ", ";
  }

  // member: trigger_value
  {
    out << "trigger_value: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_value, out);
    out << ", ";
  }

  // member: threshold_value
  {
    out << "threshold_value: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_value, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << ", ";
  }

  // member: dwell_time_sec
  {
    out << "dwell_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.dwell_time_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeModeEvent & msg,
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

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: previous_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_mode, out);
    out << "\n";
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << "\n";
  }

  // member: trigger_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_signal, out);
    out << "\n";
  }

  // member: trigger_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_value: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_value, out);
    out << "\n";
  }

  // member: threshold_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold_value: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold_value, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }

  // member: dwell_time_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dwell_time_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.dwell_time_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeModeEvent & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::ComputeModeEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::ComputeModeEvent & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::ComputeModeEvent>()
{
  return "amr_fleet_msgs::msg::ComputeModeEvent";
}

template<>
inline const char * name<amr_fleet_msgs::msg::ComputeModeEvent>()
{
  return "amr_fleet_msgs/msg/ComputeModeEvent";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::ComputeModeEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::ComputeModeEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::ComputeModeEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__TRAITS_HPP_
