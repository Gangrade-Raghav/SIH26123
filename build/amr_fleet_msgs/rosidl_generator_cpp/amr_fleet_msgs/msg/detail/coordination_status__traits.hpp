// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/coordination_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/coordination_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CoordinationStatus & msg,
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

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: current_cell_x
  {
    out << "current_cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cell_x, out);
    out << ", ";
  }

  // member: current_cell_y
  {
    out << "current_cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cell_y, out);
    out << ", ";
  }

  // member: target_cell_x
  {
    out << "target_cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_cell_x, out);
    out << ", ";
  }

  // member: target_cell_y
  {
    out << "target_cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_cell_y, out);
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: waiting_for_robot
  {
    out << "waiting_for_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.waiting_for_robot, out);
    out << ", ";
  }

  // member: pose_x
  {
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << ", ";
  }

  // member: pose_y
  {
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CoordinationStatus & msg,
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

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: current_cell_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cell_x, out);
    out << "\n";
  }

  // member: current_cell_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.current_cell_y, out);
    out << "\n";
  }

  // member: target_cell_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.target_cell_x, out);
    out << "\n";
  }

  // member: target_cell_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.target_cell_y, out);
    out << "\n";
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: waiting_for_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waiting_for_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.waiting_for_robot, out);
    out << "\n";
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << "\n";
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CoordinationStatus & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::CoordinationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::CoordinationStatus & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::CoordinationStatus>()
{
  return "amr_fleet_msgs::msg::CoordinationStatus";
}

template<>
inline const char * name<amr_fleet_msgs::msg::CoordinationStatus>()
{
  return "amr_fleet_msgs/msg/CoordinationStatus";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::CoordinationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::CoordinationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::CoordinationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__TRAITS_HPP_
