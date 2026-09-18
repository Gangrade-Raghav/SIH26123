// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/DeadlockEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/deadlock_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/deadlock_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DeadlockEvent_recovery_duration_sec
{
public:
  explicit Init_DeadlockEvent_recovery_duration_sec(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::DeadlockEvent recovery_duration_sec(::amr_fleet_msgs::msg::DeadlockEvent::_recovery_duration_sec_type arg)
  {
    msg_.recovery_duration_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_recovery_success
{
public:
  explicit Init_DeadlockEvent_recovery_success(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  Init_DeadlockEvent_recovery_duration_sec recovery_success(::amr_fleet_msgs::msg::DeadlockEvent::_recovery_success_type arg)
  {
    msg_.recovery_success = std::move(arg);
    return Init_DeadlockEvent_recovery_duration_sec(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_recovery_action
{
public:
  explicit Init_DeadlockEvent_recovery_action(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  Init_DeadlockEvent_recovery_success recovery_action(::amr_fleet_msgs::msg::DeadlockEvent::_recovery_action_type arg)
  {
    msg_.recovery_action = std::move(arg);
    return Init_DeadlockEvent_recovery_success(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_persistence_duration_sec
{
public:
  explicit Init_DeadlockEvent_persistence_duration_sec(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  Init_DeadlockEvent_recovery_action persistence_duration_sec(::amr_fleet_msgs::msg::DeadlockEvent::_persistence_duration_sec_type arg)
  {
    msg_.persistence_duration_sec = std::move(arg);
    return Init_DeadlockEvent_recovery_action(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_root_cause
{
public:
  explicit Init_DeadlockEvent_root_cause(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  Init_DeadlockEvent_persistence_duration_sec root_cause(::amr_fleet_msgs::msg::DeadlockEvent::_root_cause_type arg)
  {
    msg_.root_cause = std::move(arg);
    return Init_DeadlockEvent_persistence_duration_sec(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_cycle_robot_ids
{
public:
  explicit Init_DeadlockEvent_cycle_robot_ids(::amr_fleet_msgs::msg::DeadlockEvent & msg)
  : msg_(msg)
  {}
  Init_DeadlockEvent_root_cause cycle_robot_ids(::amr_fleet_msgs::msg::DeadlockEvent::_cycle_robot_ids_type arg)
  {
    msg_.cycle_robot_ids = std::move(arg);
    return Init_DeadlockEvent_root_cause(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

class Init_DeadlockEvent_header
{
public:
  Init_DeadlockEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeadlockEvent_cycle_robot_ids header(::amr_fleet_msgs::msg::DeadlockEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeadlockEvent_cycle_robot_ids(msg_);
  }

private:
  ::amr_fleet_msgs::msg::DeadlockEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::DeadlockEvent>()
{
  return amr_fleet_msgs::msg::builder::Init_DeadlockEvent_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__DEADLOCK_EVENT__BUILDER_HPP_
