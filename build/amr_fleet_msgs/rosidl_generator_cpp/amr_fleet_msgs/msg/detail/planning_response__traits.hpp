// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_response.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/planning_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'full_path'
// Member 'horizon_path'
// Member 'execution_path'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningResponse & msg,
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

  // member: sub_goal_type
  {
    out << "sub_goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_goal_type, out);
    out << ", ";
  }

  // member: full_path
  {
    if (msg.full_path.size() == 0) {
      out << "full_path: []";
    } else {
      out << "full_path: [";
      size_t pending_items = msg.full_path.size();
      for (auto item : msg.full_path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: total_cost
  {
    out << "total_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.total_cost, out);
    out << ", ";
  }

  // member: planning_latency_ms
  {
    out << "planning_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_latency_ms, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningResponse & msg,
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

  // member: sub_goal_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_goal_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_goal_type, out);
    out << "\n";
  }

  // member: full_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.full_path.size() == 0) {
      out << "full_path: []\n";
    } else {
      out << "full_path:\n";
      for (auto item : msg.full_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: total_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.total_cost, out);
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningResponse & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::PlanningResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::PlanningResponse & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::PlanningResponse>()
{
  return "amr_fleet_msgs::msg::PlanningResponse";
}

template<>
inline const char * name<amr_fleet_msgs::msg::PlanningResponse>()
{
  return "amr_fleet_msgs/msg/PlanningResponse";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::PlanningResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::PlanningResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::PlanningResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__TRAITS_HPP_
