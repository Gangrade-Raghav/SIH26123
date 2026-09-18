// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/rolling_horizon_plan.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/rolling_horizon_plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'current_goal'
// Member 'horizon_path'
// Member 'execution_path'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RollingHorizonPlan & msg,
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

  // member: assigned_bundle
  {
    if (msg.assigned_bundle.size() == 0) {
      out << "assigned_bundle: []";
    } else {
      out << "assigned_bundle: [";
      size_t pending_items = msg.assigned_bundle.size();
      for (auto item : msg.assigned_bundle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_task_id
  {
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << ", ";
  }

  // member: current_phase
  {
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << ", ";
  }

  // member: current_goal
  {
    out << "current_goal: ";
    to_flow_style_yaml(msg.current_goal, out);
    out << ", ";
  }

  // member: horizon_path
  {
    if (msg.horizon_path.size() == 0) {
      out << "horizon_path: []";
    } else {
      out << "horizon_path: [";
      size_t pending_items = msg.horizon_path.size();
      for (auto item : msg.horizon_path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: execution_path
  {
    if (msg.execution_path.size() == 0) {
      out << "execution_path: []";
    } else {
      out << "execution_path: [";
      size_t pending_items = msg.execution_path.size();
      for (auto item : msg.execution_path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: replan_count
  {
    out << "replan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_count, out);
    out << ", ";
  }

  // member: planning_latency_ms
  {
    out << "planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_latency_ms, out);
    out << ", ";
  }

  // member: is_valid
  {
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RollingHorizonPlan & msg,
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

  // member: assigned_bundle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.assigned_bundle.size() == 0) {
      out << "assigned_bundle: []\n";
    } else {
      out << "assigned_bundle:\n";
      for (auto item : msg.assigned_bundle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << "\n";
  }

  // member: current_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_phase: ";
    rosidl_generator_traits::value_to_yaml(msg.current_phase, out);
    out << "\n";
  }

  // member: current_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_goal:\n";
    to_block_style_yaml(msg.current_goal, out, indentation + 2);
  }

  // member: horizon_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.horizon_path.size() == 0) {
      out << "horizon_path: []\n";
    } else {
      out << "horizon_path:\n";
      for (auto item : msg.horizon_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: execution_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.execution_path.size() == 0) {
      out << "execution_path: []\n";
    } else {
      out << "execution_path:\n";
      for (auto item : msg.execution_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: replan_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "replan_count: ";
    rosidl_generator_traits::value_to_yaml(msg.replan_count, out);
    out << "\n";
  }

  // member: planning_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_latency_ms, out);
    out << "\n";
  }

  // member: is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.is_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RollingHorizonPlan & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::RollingHorizonPlan & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::RollingHorizonPlan & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::RollingHorizonPlan>()
{
  return "amr_fleet_msgs::msg::RollingHorizonPlan";
}

template<>
inline const char * name<amr_fleet_msgs::msg::RollingHorizonPlan>()
{
  return "amr_fleet_msgs/msg/RollingHorizonPlan";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::RollingHorizonPlan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::RollingHorizonPlan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::RollingHorizonPlan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__TRAITS_HPP_
