// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/TaskAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_assignment.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/task_assignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskAssignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: assigned_robot_id
  {
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << ", ";
  }

  // member: allocation_epoch
  {
    out << "allocation_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.allocation_epoch, out);
    out << ", ";
  }

  // member: confirmed
  {
    out << "confirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskAssignment & msg,
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

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: assigned_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << "\n";
  }

  // member: allocation_epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allocation_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.allocation_epoch, out);
    out << "\n";
  }

  // member: confirmed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirmed: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskAssignment & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::TaskAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::TaskAssignment & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::TaskAssignment>()
{
  return "amr_fleet_msgs::msg::TaskAssignment";
}

template<>
inline const char * name<amr_fleet_msgs::msg::TaskAssignment>()
{
  return "amr_fleet_msgs/msg/TaskAssignment";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::TaskAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::TaskAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::TaskAssignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__TRAITS_HPP_
