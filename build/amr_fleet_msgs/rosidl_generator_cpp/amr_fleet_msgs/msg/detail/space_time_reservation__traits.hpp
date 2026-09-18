// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/SpaceTimeReservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/space_time_reservation.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/space_time_reservation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpaceTimeReservation & msg,
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

  // member: from_x
  {
    out << "from_x: ";
    rosidl_generator_traits::value_to_yaml(msg.from_x, out);
    out << ", ";
  }

  // member: from_y
  {
    out << "from_y: ";
    rosidl_generator_traits::value_to_yaml(msg.from_y, out);
    out << ", ";
  }

  // member: to_x
  {
    out << "to_x: ";
    rosidl_generator_traits::value_to_yaml(msg.to_x, out);
    out << ", ";
  }

  // member: to_y
  {
    out << "to_y: ";
    rosidl_generator_traits::value_to_yaml(msg.to_y, out);
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: duration_sec
  {
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << ", ";
  }

  // member: is_edge
  {
    out << "is_edge: ";
    rosidl_generator_traits::value_to_yaml(msg.is_edge, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpaceTimeReservation & msg,
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

  // member: from_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_x: ";
    rosidl_generator_traits::value_to_yaml(msg.from_x, out);
    out << "\n";
  }

  // member: from_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_y: ";
    rosidl_generator_traits::value_to_yaml(msg.from_y, out);
    out << "\n";
  }

  // member: to_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_x: ";
    rosidl_generator_traits::value_to_yaml(msg.to_x, out);
    out << "\n";
  }

  // member: to_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_y: ";
    rosidl_generator_traits::value_to_yaml(msg.to_y, out);
    out << "\n";
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }

  // member: duration_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_sec, out);
    out << "\n";
  }

  // member: is_edge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_edge: ";
    rosidl_generator_traits::value_to_yaml(msg.is_edge, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpaceTimeReservation & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::SpaceTimeReservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::SpaceTimeReservation & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::SpaceTimeReservation>()
{
  return "amr_fleet_msgs::msg::SpaceTimeReservation";
}

template<>
inline const char * name<amr_fleet_msgs::msg::SpaceTimeReservation>()
{
  return "amr_fleet_msgs/msg/SpaceTimeReservation";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::SpaceTimeReservation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::SpaceTimeReservation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::SpaceTimeReservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__TRAITS_HPP_
