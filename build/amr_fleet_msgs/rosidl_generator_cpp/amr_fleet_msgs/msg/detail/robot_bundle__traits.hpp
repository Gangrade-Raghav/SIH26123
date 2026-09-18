// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/RobotBundle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_bundle.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/robot_bundle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotBundle & msg,
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

  // member: task_ids
  {
    if (msg.task_ids.size() == 0) {
      out << "task_ids: []";
    } else {
      out << "task_ids: [";
      size_t pending_items = msg.task_ids.size();
      for (auto item : msg.task_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bid_values
  {
    if (msg.bid_values.size() == 0) {
      out << "bid_values: []";
    } else {
      out << "bid_values: [";
      size_t pending_items = msg.bid_values.size();
      for (auto item : msg.bid_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_converged
  {
    out << "is_converged: ";
    rosidl_generator_traits::value_to_yaml(msg.is_converged, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotBundle & msg,
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

  // member: task_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.task_ids.size() == 0) {
      out << "task_ids: []\n";
    } else {
      out << "task_ids:\n";
      for (auto item : msg.task_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bid_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bid_values.size() == 0) {
      out << "bid_values: []\n";
    } else {
      out << "bid_values:\n";
      for (auto item : msg.bid_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_converged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_converged: ";
    rosidl_generator_traits::value_to_yaml(msg.is_converged, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotBundle & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::RobotBundle & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::RobotBundle & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::RobotBundle>()
{
  return "amr_fleet_msgs::msg::RobotBundle";
}

template<>
inline const char * name<amr_fleet_msgs::msg::RobotBundle>()
{
  return "amr_fleet_msgs/msg/RobotBundle";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::RobotBundle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::RobotBundle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::RobotBundle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__TRAITS_HPP_
