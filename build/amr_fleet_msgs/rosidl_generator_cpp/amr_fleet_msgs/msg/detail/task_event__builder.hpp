// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/TaskEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/task_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskEvent_details
{
public:
  explicit Init_TaskEvent_details(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::TaskEvent details(::amr_fleet_msgs::msg::TaskEvent::_details_type arg)
  {
    msg_.details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_timestamp
{
public:
  explicit Init_TaskEvent_timestamp(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_details timestamp(::amr_fleet_msgs::msg::TaskEvent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TaskEvent_details(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_robot_id
{
public:
  explicit Init_TaskEvent_robot_id(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_timestamp robot_id(::amr_fleet_msgs::msg::TaskEvent::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_TaskEvent_timestamp(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_new_state
{
public:
  explicit Init_TaskEvent_new_state(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_robot_id new_state(::amr_fleet_msgs::msg::TaskEvent::_new_state_type arg)
  {
    msg_.new_state = std::move(arg);
    return Init_TaskEvent_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_previous_state
{
public:
  explicit Init_TaskEvent_previous_state(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_new_state previous_state(::amr_fleet_msgs::msg::TaskEvent::_previous_state_type arg)
  {
    msg_.previous_state = std::move(arg);
    return Init_TaskEvent_new_state(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_event_type
{
public:
  explicit Init_TaskEvent_event_type(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_previous_state event_type(::amr_fleet_msgs::msg::TaskEvent::_event_type_type arg)
  {
    msg_.event_type = std::move(arg);
    return Init_TaskEvent_previous_state(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_task_id
{
public:
  explicit Init_TaskEvent_task_id(::amr_fleet_msgs::msg::TaskEvent & msg)
  : msg_(msg)
  {}
  Init_TaskEvent_event_type task_id(::amr_fleet_msgs::msg::TaskEvent::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskEvent_event_type(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

class Init_TaskEvent_header
{
public:
  Init_TaskEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskEvent_task_id header(::amr_fleet_msgs::msg::TaskEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaskEvent_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::TaskEvent>()
{
  return amr_fleet_msgs::msg::builder::Init_TaskEvent_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_EVENT__BUILDER_HPP_
