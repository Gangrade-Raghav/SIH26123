// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/TaskDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_definition.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/task_definition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pickup_pose'
// Member 'dropoff_pose'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'created_at'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskDefinition & msg,
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

  // member: pickup_pose
  {
    out << "pickup_pose: ";
    to_flow_style_yaml(msg.pickup_pose, out);
    out << ", ";
  }

  // member: dropoff_pose
  {
    out << "dropoff_pose: ";
    to_flow_style_yaml(msg.dropoff_pose, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: created_at
  {
    out << "created_at: ";
    to_flow_style_yaml(msg.created_at, out);
    out << ", ";
  }

  // member: deadline
  {
    out << "deadline: ";
    to_flow_style_yaml(msg.deadline, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: assigned_robot_id
  {
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << ", ";
  }

  // member: requested_robot
  {
    out << "requested_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskDefinition & msg,
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

  // member: pickup_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_pose:\n";
    to_block_style_yaml(msg.pickup_pose, out, indentation + 2);
  }

  // member: dropoff_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_pose:\n";
    to_block_style_yaml(msg.dropoff_pose, out, indentation + 2);
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

  // member: created_at
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "created_at:\n";
    to_block_style_yaml(msg.created_at, out, indentation + 2);
  }

  // member: deadline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadline:\n";
    to_block_style_yaml(msg.deadline, out, indentation + 2);
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

  // member: assigned_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assigned_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.assigned_robot_id, out);
    out << "\n";
  }

  // member: requested_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_robot: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskDefinition & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::TaskDefinition & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::TaskDefinition & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::TaskDefinition>()
{
  return "amr_fleet_msgs::msg::TaskDefinition";
}

template<>
inline const char * name<amr_fleet_msgs::msg::TaskDefinition>()
{
  return "amr_fleet_msgs/msg/TaskDefinition";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::TaskDefinition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::TaskDefinition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::TaskDefinition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__TRAITS_HPP_
