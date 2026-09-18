// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_request.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/planning_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningRequest & msg,
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

  // member: start_pose
  {
    out << "start_pose: ";
    to_flow_style_yaml(msg.start_pose, out);
    out << ", ";
  }

  // member: goal_pose
  {
    out << "goal_pose: ";
    to_flow_style_yaml(msg.goal_pose, out);
    out << ", ";
  }

  // member: horizon_steps
  {
    out << "horizon_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_steps, out);
    out << ", ";
  }

  // member: execution_window
  {
    out << "execution_window: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_window, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: sub_goal_type
  {
    out << "sub_goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_goal_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningRequest & msg,
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

  // member: start_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_pose:\n";
    to_block_style_yaml(msg.start_pose, out, indentation + 2);
  }

  // member: goal_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pose:\n";
    to_block_style_yaml(msg.goal_pose, out, indentation + 2);
  }

  // member: horizon_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizon_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.horizon_steps, out);
    out << "\n";
  }

  // member: execution_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_window: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_window, out);
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

  // member: sub_goal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_goal_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningRequest & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::PlanningRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::PlanningRequest & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::PlanningRequest>()
{
  return "amr_fleet_msgs::msg::PlanningRequest";
}

template<>
inline const char * name<amr_fleet_msgs::msg::PlanningRequest>()
{
  return "amr_fleet_msgs/msg/PlanningRequest";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::PlanningRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::PlanningRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::PlanningRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__TRAITS_HPP_
