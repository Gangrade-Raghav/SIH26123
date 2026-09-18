// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/TaskBid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_bid.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/task_bid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskBid & msg,
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

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: bid_value
  {
    out << "bid_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bid_value, out);
    out << ", ";
  }

  // member: path_cost
  {
    out << "path_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.path_cost, out);
    out << ", ";
  }

  // member: allocation_epoch
  {
    out << "allocation_epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.allocation_epoch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskBid & msg,
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

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: bid_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bid_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bid_value, out);
    out << "\n";
  }

  // member: path_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.path_cost, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskBid & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::TaskBid & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::TaskBid & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::TaskBid>()
{
  return "amr_fleet_msgs::msg::TaskBid";
}

template<>
inline const char * name<amr_fleet_msgs::msg::TaskBid>()
{
  return "amr_fleet_msgs/msg/TaskBid";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::TaskBid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::TaskBid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::TaskBid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__TRAITS_HPP_
