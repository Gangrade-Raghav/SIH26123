// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:srv/CreateTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/create_task.hpp"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__CREATE_TASK__BUILDER_HPP_
#define AMR_FLEET_MSGS__SRV__DETAIL__CREATE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/srv/detail/create_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateTask_Request_requested_robot
{
public:
  explicit Init_CreateTask_Request_requested_robot(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::CreateTask_Request requested_robot(::amr_fleet_msgs::srv::CreateTask_Request::_requested_robot_type arg)
  {
    msg_.requested_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_deadline
{
public:
  explicit Init_CreateTask_Request_deadline(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_requested_robot deadline(::amr_fleet_msgs::srv::CreateTask_Request::_deadline_type arg)
  {
    msg_.deadline = std::move(arg);
    return Init_CreateTask_Request_requested_robot(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_priority
{
public:
  explicit Init_CreateTask_Request_priority(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_deadline priority(::amr_fleet_msgs::srv::CreateTask_Request::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_CreateTask_Request_deadline(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_dropoff_y
{
public:
  explicit Init_CreateTask_Request_dropoff_y(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_priority dropoff_y(::amr_fleet_msgs::srv::CreateTask_Request::_dropoff_y_type arg)
  {
    msg_.dropoff_y = std::move(arg);
    return Init_CreateTask_Request_priority(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_dropoff_x
{
public:
  explicit Init_CreateTask_Request_dropoff_x(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_dropoff_y dropoff_x(::amr_fleet_msgs::srv::CreateTask_Request::_dropoff_x_type arg)
  {
    msg_.dropoff_x = std::move(arg);
    return Init_CreateTask_Request_dropoff_y(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_pickup_y
{
public:
  explicit Init_CreateTask_Request_pickup_y(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_dropoff_x pickup_y(::amr_fleet_msgs::srv::CreateTask_Request::_pickup_y_type arg)
  {
    msg_.pickup_y = std::move(arg);
    return Init_CreateTask_Request_dropoff_x(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_pickup_x
{
public:
  explicit Init_CreateTask_Request_pickup_x(::amr_fleet_msgs::srv::CreateTask_Request & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Request_pickup_y pickup_x(::amr_fleet_msgs::srv::CreateTask_Request::_pickup_x_type arg)
  {
    msg_.pickup_x = std::move(arg);
    return Init_CreateTask_Request_pickup_y(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

class Init_CreateTask_Request_task_id
{
public:
  Init_CreateTask_Request_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateTask_Request_pickup_x task_id(::amr_fleet_msgs::srv::CreateTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_CreateTask_Request_pickup_x(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::CreateTask_Request>()
{
  return amr_fleet_msgs::srv::builder::Init_CreateTask_Request_task_id();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateTask_Response_message
{
public:
  explicit Init_CreateTask_Response_message(::amr_fleet_msgs::srv::CreateTask_Response & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::CreateTask_Response message(::amr_fleet_msgs::srv::CreateTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Response msg_;
};

class Init_CreateTask_Response_task_id
{
public:
  explicit Init_CreateTask_Response_task_id(::amr_fleet_msgs::srv::CreateTask_Response & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Response_message task_id(::amr_fleet_msgs::srv::CreateTask_Response::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_CreateTask_Response_message(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Response msg_;
};

class Init_CreateTask_Response_accepted
{
public:
  Init_CreateTask_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateTask_Response_task_id accepted(::amr_fleet_msgs::srv::CreateTask_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CreateTask_Response_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::CreateTask_Response>()
{
  return amr_fleet_msgs::srv::builder::Init_CreateTask_Response_accepted();
}

}  // namespace amr_fleet_msgs


namespace amr_fleet_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateTask_Event_response
{
public:
  explicit Init_CreateTask_Event_response(::amr_fleet_msgs::srv::CreateTask_Event & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::srv::CreateTask_Event response(::amr_fleet_msgs::srv::CreateTask_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Event msg_;
};

class Init_CreateTask_Event_request
{
public:
  explicit Init_CreateTask_Event_request(::amr_fleet_msgs::srv::CreateTask_Event & msg)
  : msg_(msg)
  {}
  Init_CreateTask_Event_response request(::amr_fleet_msgs::srv::CreateTask_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CreateTask_Event_response(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Event msg_;
};

class Init_CreateTask_Event_info
{
public:
  Init_CreateTask_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateTask_Event_request info(::amr_fleet_msgs::srv::CreateTask_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CreateTask_Event_request(msg_);
  }

private:
  ::amr_fleet_msgs::srv::CreateTask_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::srv::CreateTask_Event>()
{
  return amr_fleet_msgs::srv::builder::Init_CreateTask_Event_info();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__CREATE_TASK__BUILDER_HPP_
