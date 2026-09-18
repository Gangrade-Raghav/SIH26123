// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
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

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: plan_epoch
  {
    out << "plan_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_epoch, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: cpu_load
  {
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: plan_epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_epoch, out);
    out << "\n";
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: cpu_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::RobotStatus & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::RobotStatus>()
{
  return "amr_fleet_msgs::msg::RobotStatus";
}

template<>
inline const char * name<amr_fleet_msgs::msg::RobotStatus>()
{
  return "amr_fleet_msgs/msg/RobotStatus";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::RobotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
