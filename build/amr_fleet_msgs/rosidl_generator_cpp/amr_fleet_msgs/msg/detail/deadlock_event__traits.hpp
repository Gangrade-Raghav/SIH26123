// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/deadlock_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/deadlock_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeadlockEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cycle_robot_ids
  {
    if (msg.cycle_robot_ids.size() == 0) {
      out << "cycle_robot_ids: []";
    } else {
      out << "cycle_robot_ids: [";
      size_t pending_items = msg.cycle_robot_ids.size();
      for (auto item : msg.cycle_robot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: root_cause
  {
    out << "root_cause: ";
    rosidl_generator_traits::value_to_yaml(msg.root_cause, out);
    out << ", ";
  }

  // member: persistence_duration_sec
  {
    out << "persistence_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.persistence_duration_sec, out);
    out << ", ";
  }

  // member: recovery_action
  {
    out << "recovery_action: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_action, out);
    out << ", ";
  }

  // member: recovery_success
  {
    out << "recovery_success: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_success, out);
    out << ", ";
  }

  // member: recovery_duration_sec
  {
    out << "recovery_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_duration_sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeadlockEvent & msg,
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

  // member: cycle_robot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cycle_robot_ids.size() == 0) {
      out << "cycle_robot_ids: []\n";
    } else {
      out << "cycle_robot_ids:\n";
      for (auto item : msg.cycle_robot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: root_cause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_cause: ";
    rosidl_generator_traits::value_to_yaml(msg.root_cause, out);
    out << "\n";
  }

  // member: persistence_duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "persistence_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.persistence_duration_sec, out);
    out << "\n";
  }

  // member: recovery_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recovery_action: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_action, out);
    out << "\n";
  }

  // member: recovery_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recovery_success: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_success, out);
    out << "\n";
  }

  // member: recovery_duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recovery_duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.recovery_duration_sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeadlockEvent & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::DeadlockEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::DeadlockEvent & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::DeadlockEvent>()
{
  return "amr_fleet_msgs::msg::DeadlockEvent";
}

template<>
inline const char * name<amr_fleet_msgs::msg::DeadlockEvent>()
{
  return "amr_fleet_msgs/msg/DeadlockEvent";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::DeadlockEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::DeadlockEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::DeadlockEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__TRAITS_HPP_
