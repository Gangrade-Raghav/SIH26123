// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_list.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/task_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tasks'
#include "amr_fleet_msgs/msg/detail/task_definition__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskList & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tasks
  {
    if (msg.tasks.size() == 0) {
      out << "tasks: []";
    } else {
      out << "tasks: [";
      size_t pending_items = msg.tasks.size();
      for (auto item : msg.tasks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskList & msg,
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

  // member: tasks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tasks.size() == 0) {
      out << "tasks: []\n";
    } else {
      out << "tasks:\n";
      for (auto item : msg.tasks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskList & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::TaskList & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::TaskList & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::TaskList>()
{
  return "amr_fleet_msgs::msg::TaskList";
}

template<>
inline const char * name<amr_fleet_msgs::msg::TaskList>()
{
  return "amr_fleet_msgs/msg/TaskList";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::TaskList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::TaskList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::TaskList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__TRAITS_HPP_
