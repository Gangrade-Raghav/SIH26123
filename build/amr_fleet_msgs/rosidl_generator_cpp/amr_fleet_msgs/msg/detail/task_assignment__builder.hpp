// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/TaskAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_assignment.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/task_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskAssignment_confirmed
{
public:
  explicit Init_TaskAssignment_confirmed(::amr_fleet_msgs::msg::TaskAssignment & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::TaskAssignment confirmed(::amr_fleet_msgs::msg::TaskAssignment::_confirmed_type arg)
  {
    msg_.confirmed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskAssignment msg_;
};

class Init_TaskAssignment_allocation_epoch
{
public:
  explicit Init_TaskAssignment_allocation_epoch(::amr_fleet_msgs::msg::TaskAssignment & msg)
  : msg_(msg)
  {}
  Init_TaskAssignment_confirmed allocation_epoch(::amr_fleet_msgs::msg::TaskAssignment::_allocation_epoch_type arg)
  {
    msg_.allocation_epoch = std::move(arg);
    return Init_TaskAssignment_confirmed(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskAssignment msg_;
};

class Init_TaskAssignment_assigned_robot_id
{
public:
  explicit Init_TaskAssignment_assigned_robot_id(::amr_fleet_msgs::msg::TaskAssignment & msg)
  : msg_(msg)
  {}
  Init_TaskAssignment_allocation_epoch assigned_robot_id(::amr_fleet_msgs::msg::TaskAssignment::_assigned_robot_id_type arg)
  {
    msg_.assigned_robot_id = std::move(arg);
    return Init_TaskAssignment_allocation_epoch(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskAssignment msg_;
};

class Init_TaskAssignment_task_id
{
public:
  explicit Init_TaskAssignment_task_id(::amr_fleet_msgs::msg::TaskAssignment & msg)
  : msg_(msg)
  {}
  Init_TaskAssignment_assigned_robot_id task_id(::amr_fleet_msgs::msg::TaskAssignment::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskAssignment_assigned_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskAssignment msg_;
};

class Init_TaskAssignment_header
{
public:
  Init_TaskAssignment_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskAssignment_task_id header(::amr_fleet_msgs::msg::TaskAssignment::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaskAssignment_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskAssignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::TaskAssignment>()
{
  return amr_fleet_msgs::msg::builder::Init_TaskAssignment_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_ASSIGNMENT__BUILDER_HPP_
