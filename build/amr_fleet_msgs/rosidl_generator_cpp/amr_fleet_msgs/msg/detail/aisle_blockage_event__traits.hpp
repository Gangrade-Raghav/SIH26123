// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/aisle_blockage_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AisleBlockageEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: blockage_id
  {
    out << "blockage_id: ";
    rosidl_generator_traits::value_to_yaml(msg.blockage_id, out);
    out << ", ";
  }

  // member: is_blocked
  {
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
    out << ", ";
  }

  // member: min_x
  {
    out << "min_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_x, out);
    out << ", ";
  }

  // member: max_x
  {
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << ", ";
  }

  // member: min_y
  {
    out << "min_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_y, out);
    out << ", ";
  }

  // member: max_y
  {
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AisleBlockageEvent & msg,
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

  // member: blockage_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blockage_id: ";
    rosidl_generator_traits::value_to_yaml(msg.blockage_id, out);
    out << "\n";
  }

  // member: is_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_blocked, out);
    out << "\n";
  }

  // member: min_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_x: ";
    rosidl_generator_traits::value_to_yaml(msg.min_x, out);
    out << "\n";
  }

  // member: max_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_x: ";
    rosidl_generator_traits::value_to_yaml(msg.max_x, out);
    out << "\n";
  }

  // member: min_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_y: ";
    rosidl_generator_traits::value_to_yaml(msg.min_y, out);
    out << "\n";
  }

  // member: max_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_y: ";
    rosidl_generator_traits::value_to_yaml(msg.max_y, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AisleBlockageEvent & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::AisleBlockageEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::AisleBlockageEvent & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::AisleBlockageEvent>()
{
  return "amr_fleet_msgs::msg::AisleBlockageEvent";
}

template<>
inline const char * name<amr_fleet_msgs::msg::AisleBlockageEvent>()
{
  return "amr_fleet_msgs/msg/AisleBlockageEvent";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::AisleBlockageEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::AisleBlockageEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::AisleBlockageEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__TRAITS_HPP_
