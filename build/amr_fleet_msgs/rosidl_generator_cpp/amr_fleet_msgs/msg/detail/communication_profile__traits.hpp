// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_profile.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__TRAITS_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/msg/detail/communication_profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace amr_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommunicationProfile & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: profile_name
  {
    out << "profile_name: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_name, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: latency_ms
  {
    out << "latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_ms, out);
    out << ", ";
  }

  // member: jitter_ms
  {
    out << "jitter_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter_ms, out);
    out << ", ";
  }

  // member: loss_probability
  {
    out << "loss_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.loss_probability, out);
    out << ", ";
  }

  // member: burst_loss_probability
  {
    out << "burst_loss_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_loss_probability, out);
    out << ", ";
  }

  // member: outage_duration_s
  {
    out << "outage_duration_s: ";
    rosidl_generator_traits::value_to_yaml(msg.outage_duration_s, out);
    out << ", ";
  }

  // member: seed
  {
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << ", ";
  }

  // member: isolated_robots
  {
    if (msg.isolated_robots.size() == 0) {
      out << "isolated_robots: []";
    } else {
      out << "isolated_robots: [";
      size_t pending_items = msg.isolated_robots.size();
      for (auto item : msg.isolated_robots) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CommunicationProfile & msg,
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

  // member: profile_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile_name: ";
    rosidl_generator_traits::value_to_yaml(msg.profile_name, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_ms, out);
    out << "\n";
  }

  // member: jitter_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jitter_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter_ms, out);
    out << "\n";
  }

  // member: loss_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loss_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.loss_probability, out);
    out << "\n";
  }

  // member: burst_loss_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "burst_loss_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_loss_probability, out);
    out << "\n";
  }

  // member: outage_duration_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "outage_duration_s: ";
    rosidl_generator_traits::value_to_yaml(msg.outage_duration_s, out);
    out << "\n";
  }

  // member: seed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << "\n";
  }

  // member: isolated_robots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.isolated_robots.size() == 0) {
      out << "isolated_robots: []\n";
    } else {
      out << "isolated_robots:\n";
      for (auto item : msg.isolated_robots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommunicationProfile & msg, bool use_flow_style = false)
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
  const amr_fleet_msgs::msg::CommunicationProfile & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::msg::CommunicationProfile & msg)
{
  return amr_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::msg::CommunicationProfile>()
{
  return "amr_fleet_msgs::msg::CommunicationProfile";
}

template<>
inline const char * name<amr_fleet_msgs::msg::CommunicationProfile>()
{
  return "amr_fleet_msgs/msg/CommunicationProfile";
}

template<>
struct has_fixed_size<amr_fleet_msgs::msg::CommunicationProfile>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::msg::CommunicationProfile>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::msg::CommunicationProfile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__TRAITS_HPP_
