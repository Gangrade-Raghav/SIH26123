// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/BlockedResource.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/blocked_resource.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/blocked_resource__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlockedResource & msg,
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

  // member: waiting_for_robot_id
  {
    out << "waiting_for_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waiting_for_robot_id, out);
    out << ", ";
  }

  // member: resource_x
  {
    out << "resource_x: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_x, out);
    out << ", ";
  }

  // member: resource_y
  {
    out << "resource_y: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_y, out);
    out << ", ";
  }

  // member: resource_t
  {
    out << "resource_t: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_t, out);
    out << ", ";
  }

  // member: epoch
  {
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockedResource & msg,
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

  // member: waiting_for_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waiting_for_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waiting_for_robot_id, out);
    out << "\n";
  }

  // member: resource_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_x: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_x, out);
    out << "\n";
  }

  // member: resource_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_y: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_y, out);
    out << "\n";
  }

  // member: resource_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_t: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_t, out);
    out << "\n";
  }

  // member: epoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockedResource & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::BlockedResource & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::BlockedResource & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::BlockedResource>()
{
  return "amr_fleet_msgs::msg::BlockedResource";
}

template<>
inline const char * name<amr_fleet_msgs::msg::BlockedResource>()
{
  return "amr_fleet_msgs/msg/BlockedResource";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::BlockedResource>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::BlockedResource>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::BlockedResource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__TRAITS_HPP_
