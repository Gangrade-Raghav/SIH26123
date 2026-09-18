// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/compute_mode_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/compute_mode_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ComputeModeEvent_dwell_time_sec
{
public:
  explicit Init_ComputeModeEvent_dwell_time_sec(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::ComputeModeEvent dwell_time_sec(::amr_fleet_msgs::msg::ComputeModeEvent::_dwell_time_sec_type arg)
  {
    msg_.dwell_time_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_reason
{
public:
  explicit Init_ComputeModeEvent_reason(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_dwell_time_sec reason(::amr_fleet_msgs::msg::ComputeModeEvent::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return Init_ComputeModeEvent_dwell_time_sec(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_threshold_value
{
public:
  explicit Init_ComputeModeEvent_threshold_value(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_reason threshold_value(::amr_fleet_msgs::msg::ComputeModeEvent::_threshold_value_type arg)
  {
    msg_.threshold_value = std::move(arg);
    return Init_ComputeModeEvent_reason(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_trigger_value
{
public:
  explicit Init_ComputeModeEvent_trigger_value(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_threshold_value trigger_value(::amr_fleet_msgs::msg::ComputeModeEvent::_trigger_value_type arg)
  {
    msg_.trigger_value = std::move(arg);
    return Init_ComputeModeEvent_threshold_value(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_trigger_signal
{
public:
  explicit Init_ComputeModeEvent_trigger_signal(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_trigger_value trigger_signal(::amr_fleet_msgs::msg::ComputeModeEvent::_trigger_signal_type arg)
  {
    msg_.trigger_signal = std::move(arg);
    return Init_ComputeModeEvent_trigger_value(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_current_mode
{
public:
  explicit Init_ComputeModeEvent_current_mode(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_trigger_signal current_mode(::amr_fleet_msgs::msg::ComputeModeEvent::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_ComputeModeEvent_trigger_signal(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_previous_mode
{
public:
  explicit Init_ComputeModeEvent_previous_mode(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_current_mode previous_mode(::amr_fleet_msgs::msg::ComputeModeEvent::_previous_mode_type arg)
  {
    msg_.previous_mode = std::move(arg);
    return Init_ComputeModeEvent_current_mode(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_robot_id
{
public:
  explicit Init_ComputeModeEvent_robot_id(::amr_fleet_msgs::msg::ComputeModeEvent & msg)
  : msg_(msg)
  {}
  Init_ComputeModeEvent_previous_mode robot_id(::amr_fleet_msgs::msg::ComputeModeEvent::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ComputeModeEvent_previous_mode(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

class Init_ComputeModeEvent_header
{
public:
  Init_ComputeModeEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeModeEvent_robot_id header(::amr_fleet_msgs::msg::ComputeModeEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ComputeModeEvent_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ComputeModeEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::ComputeModeEvent>()
{
  return amr_fleet_msgs::msg::builder::Init_ComputeModeEvent_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMPUTE_MODE_EVENT__BUILDER_HPP_
