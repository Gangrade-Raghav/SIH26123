// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/TaskEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/task_event__struct.hpp"
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
  const TaskEvent & msg,
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

  // member: event_type
  {
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << ", ";
  }

  // member: previous_state
  {
    out << "previous_state: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_state, out);
    out << ", ";
  }

  // member: new_state
  {
    out << "new_state: ";
    rosidl_generator_traits::value_to_yaml(msg.new_state, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: details
  {
    out << "details: ";
    rosidl_generator_traits::value_to_yaml(msg.details, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskEvent & msg,
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

  // member: event_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_type: ";
    rosidl_generator_traits::value_to_yaml(msg.event_type, out);
    out << "\n";
  }

  // member: previous_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_state: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_state, out);
    out << "\n";
  }

  // member: new_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_state: ";
    rosidl_generator_traits::value_to_yaml(msg.new_state, out);
    out << "\n";
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "details: ";
    rosidl_generator_traits::value_to_yaml(msg.details, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskEvent & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::TaskEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::TaskEvent & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::TaskEvent>()
{
  return "amr_fleet_msgs::msg::TaskEvent";
}

template<>
inline const char * name<amr_fleet_msgs::msg::TaskEvent>()
{
  return "amr_fleet_msgs/msg/TaskEvent";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::TaskEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::TaskEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::TaskEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__TRAITS_HPP_
