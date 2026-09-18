// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:srv/ControlTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/control_task.hpp"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__BUILDER_HPP_
#define AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/srv/detail/control_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlTask_Request_action
{
public:
  explicit Init_ControlTask_Request_action(::amr_fleet_msgs::srv::ControlTask_Request & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::ControlTask_Request action(::amr_fleet_msgs::srv::ControlTask_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Request msg_;
};

class Init_ControlTask_Request_task_id
{
public:
  Init_ControlTask_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTask_Request_action task_id(::amr_fleet_msgs::srv::ControlTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_ControlTask_Request_action(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::ControlTask_Request>()
{
  return amr_fleet_msgs::srv::builder::Init_ControlTask_Request_task_id();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlTask_Response_message
{
public:
  explicit Init_ControlTask_Response_message(::amr_fleet_msgs::srv::ControlTask_Response & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::ControlTask_Response message(::amr_fleet_msgs::srv::ControlTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Response msg_;
};

class Init_ControlTask_Response_success
{
public:
  Init_ControlTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTask_Response_message success(::amr_fleet_msgs::srv::ControlTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ControlTask_Response_message(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::ControlTask_Response>()
{
  return amr_fleet_msgs::srv::builder::Init_ControlTask_Response_success();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_ControlTask_Event_response
{
public:
  explicit Init_ControlTask_Event_response(::amr_fleet_msgs::srv::ControlTask_Event & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::ControlTask_Event response(::amr_fleet_msgs::srv::ControlTask_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Event msg_;
};

class Init_ControlTask_Event_request
{
public:
  explicit Init_ControlTask_Event_request(::amr_fleet_msgs::srv::ControlTask_Event & msg)
  : msg_(msg)
  {}
  Init_ControlTask_Event_response request(::amr_fleet_msgs::srv::ControlTask_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ControlTask_Event_response(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Event msg_;
};

class Init_ControlTask_Event_info
{
public:
  Init_ControlTask_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTask_Event_request info(::amr_fleet_msgs::srv::ControlTask_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ControlTask_Event_request(msg_);
  }

private:
  ::amr_fleet_msgs::srv::ControlTask_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::ControlTask_Event>()
{
  return amr_fleet_msgs::srv::builder::Init_ControlTask_Event_info();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__BUILDER_HPP_
