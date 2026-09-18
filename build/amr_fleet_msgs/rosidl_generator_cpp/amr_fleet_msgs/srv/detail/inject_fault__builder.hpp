// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:srv/InjectFault.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/inject_fault.hpp"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_
#define AMR_FLEET_MSGS__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/srv/detail/inject_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_InjectFault_Request_duration_sec
{
public:
  explicit Init_InjectFault_Request_duration_sec(::amr_fleet_msgs::srv::InjectFault_Request & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::InjectFault_Request duration_sec(::amr_fleet_msgs::srv::InjectFault_Request::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Request msg_;
};

class Init_InjectFault_Request_fault_type
{
public:
  Init_InjectFault_Request_fault_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjectFault_Request_duration_sec fault_type(::amr_fleet_msgs::srv::InjectFault_Request::_fault_type_type arg)
  {
    msg_.fault_type = std::move(arg);
    return Init_InjectFault_Request_duration_sec(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::InjectFault_Request>()
{
  return amr_fleet_msgs::srv::builder::Init_InjectFault_Request_fault_type();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_InjectFault_Response_message
{
public:
  explicit Init_InjectFault_Response_message(::amr_fleet_msgs::srv::InjectFault_Response & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::InjectFault_Response message(::amr_fleet_msgs::srv::InjectFault_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Response msg_;
};

class Init_InjectFault_Response_success
{
public:
  Init_InjectFault_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjectFault_Response_message success(::amr_fleet_msgs::srv::InjectFault_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_InjectFault_Response_message(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::InjectFault_Response>()
{
  return amr_fleet_msgs::srv::builder::Init_InjectFault_Response_success();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_InjectFault_Event_response
{
public:
  explicit Init_InjectFault_Event_response(::amr_fleet_msgs::srv::InjectFault_Event & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::InjectFault_Event response(::amr_fleet_msgs::srv::InjectFault_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Event msg_;
};

class Init_InjectFault_Event_request
{
public:
  explicit Init_InjectFault_Event_request(::amr_fleet_msgs::srv::InjectFault_Event & msg)
  : msg_(msg)
  {}
  Init_InjectFault_Event_response request(::amr_fleet_msgs::srv::InjectFault_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_InjectFault_Event_response(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Event msg_;
};

class Init_InjectFault_Event_info
{
public:
  Init_InjectFault_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjectFault_Event_request info(::amr_fleet_msgs::srv::InjectFault_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_InjectFault_Event_request(msg_);
  }

private:
  ::amr_fleet_msgs::srv::InjectFault_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::InjectFault_Event>()
{
  return amr_fleet_msgs::srv::builder::Init_InjectFault_Event_info();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_
