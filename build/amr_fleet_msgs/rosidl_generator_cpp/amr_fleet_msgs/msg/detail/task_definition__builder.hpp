// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/TaskDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_definition.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/task_definition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskDefinition_requested_robot
{
public:
  explicit Init_TaskDefinition_requested_robot(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::TaskDefinition requested_robot(::amr_fleet_msgs::msg::TaskDefinition::_requested_robot_type arg)
  {
    msg_.requested_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_assigned_robot_id
{
public:
  explicit Init_TaskDefinition_assigned_robot_id(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_requested_robot assigned_robot_id(::amr_fleet_msgs::msg::TaskDefinition::_assigned_robot_id_type arg)
  {
    msg_.assigned_robot_id = std::move(arg);
    return Init_TaskDefinition_requested_robot(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_status
{
public:
  explicit Init_TaskDefinition_status(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_assigned_robot_id status(::amr_fleet_msgs::msg::TaskDefinition::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskDefinition_assigned_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_deadline
{
public:
  explicit Init_TaskDefinition_deadline(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_status deadline(::amr_fleet_msgs::msg::TaskDefinition::_deadline_type arg)
  {
    msg_.deadline = std::move(arg);
    return Init_TaskDefinition_status(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_created_at
{
public:
  explicit Init_TaskDefinition_created_at(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_deadline created_at(::amr_fleet_msgs::msg::TaskDefinition::_created_at_type arg)
  {
    msg_.created_at = std::move(arg);
    return Init_TaskDefinition_deadline(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_priority
{
public:
  explicit Init_TaskDefinition_priority(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_created_at priority(::amr_fleet_msgs::msg::TaskDefinition::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_TaskDefinition_created_at(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_dropoff_pose
{
public:
  explicit Init_TaskDefinition_dropoff_pose(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_priority dropoff_pose(::amr_fleet_msgs::msg::TaskDefinition::_dropoff_pose_type arg)
  {
    msg_.dropoff_pose = std::move(arg);
    return Init_TaskDefinition_priority(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_pickup_pose
{
public:
  explicit Init_TaskDefinition_pickup_pose(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_dropoff_pose pickup_pose(::amr_fleet_msgs::msg::TaskDefinition::_pickup_pose_type arg)
  {
    msg_.pickup_pose = std::move(arg);
    return Init_TaskDefinition_dropoff_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_task_id
{
public:
  explicit Init_TaskDefinition_task_id(::amr_fleet_msgs::msg::TaskDefinition & msg)
  : msg_(msg)
  {}
  Init_TaskDefinition_pickup_pose task_id(::amr_fleet_msgs::msg::TaskDefinition::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskDefinition_pickup_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

class Init_TaskDefinition_header
{
public:
  Init_TaskDefinition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskDefinition_task_id header(::amr_fleet_msgs::msg::TaskDefinition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaskDefinition_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskDefinition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::TaskDefinition>()
{
  return amr_fleet_msgs::msg::builder::Init_TaskDefinition_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__BUILDER_HPP_
