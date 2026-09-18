// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/conflict_report.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/conflict_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConflictReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: conflict_type
  {
    out << "conflict_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_type, out);
    out << ", ";
  }

  // member: robot_a
  {
    out << "robot_a: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_a, out);
    out << ", ";
  }

  // member: robot_b
  {
    out << "robot_b: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_b, out);
    out << ", ";
  }

  // member: cell_x
  {
    out << "cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_x, out);
    out << ", ";
  }

  // member: cell_y
  {
    out << "cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_y, out);
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: resolved
  {
    out << "resolved: ";
    rosidl_generator_traits::value_to_yaml(msg.resolved, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConflictReport & msg,
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

  // member: conflict_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conflict_type: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_type, out);
    out << "\n";
  }

  // member: robot_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_a: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_a, out);
    out << "\n";
  }

  // member: robot_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_b: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_b, out);
    out << "\n";
  }

  // member: cell_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_x: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_x, out);
    out << "\n";
  }

  // member: cell_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_y: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_y, out);
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

  // member: resolved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolved: ";
    rosidl_generator_traits::value_to_yaml(msg.resolved, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConflictReport & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::ConflictReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::ConflictReport & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::ConflictReport>()
{
  return "amr_fleet_msgs::msg::ConflictReport";
}

template<>
inline const char * name<amr_fleet_msgs::msg::ConflictReport>()
{
  return "amr_fleet_msgs/msg/ConflictReport";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::ConflictReport>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::ConflictReport>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::ConflictReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__TRAITS_HPP_
