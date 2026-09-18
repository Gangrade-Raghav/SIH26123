// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_fleet_msgs:srv/ControlTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/control_task.hpp"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__TRAITS_HPP_
#define AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_fleet_msgs/srv/detail/control_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amr_fleet_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlTask_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use amr_fleet_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_fleet_msgs::srv::ControlTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::srv::ControlTask_Request & msg)
{
  return amr_fleet_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::srv::ControlTask_Request>()
{
  return "amr_fleet_msgs::srv::ControlTask_Request";
}

template<>
inline const char * name<amr_fleet_msgs::srv::ControlTask_Request>()
{
  return "amr_fleet_msgs/srv/ControlTask_Request";
}

template<>
struct has_fixed_size<amr_fleet_msgs::srv::ControlTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::srv::ControlTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::srv::ControlTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace amr_fleet_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlTask_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use amr_fleet_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_fleet_msgs::srv::ControlTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::srv::ControlTask_Response & msg)
{
  return amr_fleet_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::srv::ControlTask_Response>()
{
  return "amr_fleet_msgs::srv::ControlTask_Response";
}

template<>
inline const char * name<amr_fleet_msgs::srv::ControlTask_Response>()
{
  return "amr_fleet_msgs/srv/ControlTask_Response";
}

template<>
struct has_fixed_size<amr_fleet_msgs::srv::ControlTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::srv::ControlTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_fleet_msgs::srv::ControlTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace amr_fleet_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlTask_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const ControlTask_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlTask_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use amr_fleet_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_fleet_msgs::srv::ControlTask_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_fleet_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_fleet_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_fleet_msgs::srv::ControlTask_Event & msg)
{
  return amr_fleet_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<amr_fleet_msgs::srv::ControlTask_Event>()
{
  return "amr_fleet_msgs::srv::ControlTask_Event";
}

template<>
inline const char * name<amr_fleet_msgs::srv::ControlTask_Event>()
{
  return "amr_fleet_msgs/srv/ControlTask_Event";
}

template<>
struct has_fixed_size<amr_fleet_msgs::srv::ControlTask_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_fleet_msgs::srv::ControlTask_Event>
  : std::integral_constant<bool, has_bounded_size<amr_fleet_msgs::srv::ControlTask_Request>::value && has_bounded_size<amr_fleet_msgs::srv::ControlTask_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<amr_fleet_msgs::srv::ControlTask_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<amr_fleet_msgs::srv::ControlTask>()
{
  return "amr_fleet_msgs::srv::ControlTask";
}

template<>
inline const char * name<amr_fleet_msgs::srv::ControlTask>()
{
  return "amr_fleet_msgs/srv/ControlTask";
}

template<>
struct has_fixed_size<amr_fleet_msgs::srv::ControlTask>
  : std::integral_constant<
    bool,
    has_fixed_size<amr_fleet_msgs::srv::ControlTask_Request>::value &&
    has_fixed_size<amr_fleet_msgs::srv::ControlTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<amr_fleet_msgs::srv::ControlTask>
  : std::integral_constant<
    bool,
    has_bounded_size<amr_fleet_msgs::srv::ControlTask_Request>::value &&
    has_bounded_size<amr_fleet_msgs::srv::ControlTask_Response>::value
  >
{
};

template<>
struct is_service<amr_fleet_msgs::srv::ControlTask>
  : std::true_type
{
};

template<>
struct is_service_request<amr_fleet_msgs::srv::ControlTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<amr_fleet_msgs::srv::ControlTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__TRAITS_HPP_
