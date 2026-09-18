// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_health.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/robot_health__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'last_pose'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHealth & msg,
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

  // member: health_state
  {
    out << "health_state: ";
    rosidl_generator_traits::value_to_yaml(msg.health_state, out);
    out << ", ";
  }

  // member: last_pose
  {
    out << "last_pose: ";
    to_flow_style_yaml(msg.last_pose, out);
    out << ", ";
  }

  // member: active_task_id
  {
    out << "active_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.active_task_id, out);
    out << ", ";
  }

  // member: uptime_sec
  {
    out << "uptime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHealth & msg,
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

  // member: health_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_state: ";
    rosidl_generator_traits::value_to_yaml(msg.health_state, out);
    out << "\n";
  }

  // member: last_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_pose:\n";
    to_block_style_yaml(msg.last_pose, out, indentation + 2);
  }

  // member: active_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.active_task_id, out);
    out << "\n";
  }

  // member: uptime_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHealth & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::RobotHealth & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::RobotHealth & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::RobotHealth>()
{
  return "amr_fleet_msgs::msg::RobotHealth";
}

template<>
inline const char * name<amr_fleet_msgs::msg::RobotHealth>()
{
  return "amr_fleet_msgs/msg/RobotHealth";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::RobotHealth>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::RobotHealth>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::RobotHealth>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__TRAITS_HPP_
