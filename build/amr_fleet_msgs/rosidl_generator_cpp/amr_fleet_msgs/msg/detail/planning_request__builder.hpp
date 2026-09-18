// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_request.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/planning_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningRequest_sub_goal_type
{
public:
  explicit Init_PlanningRequest_sub_goal_type(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::PlanningRequest sub_goal_type(::amr_fleet_msgs::msg::PlanningRequest::_sub_goal_type_type arg)
  {
    msg_.sub_goal_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_task_id
{
public:
  explicit Init_PlanningRequest_task_id(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_sub_goal_type task_id(::amr_fleet_msgs::msg::PlanningRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_PlanningRequest_sub_goal_type(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_execution_window
{
public:
  explicit Init_PlanningRequest_execution_window(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_task_id execution_window(::amr_fleet_msgs::msg::PlanningRequest::_execution_window_type arg)
  {
    msg_.execution_window = std::move(arg);
    return Init_PlanningRequest_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_horizon_steps
{
public:
  explicit Init_PlanningRequest_horizon_steps(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_execution_window horizon_steps(::amr_fleet_msgs::msg::PlanningRequest::_horizon_steps_type arg)
  {
    msg_.horizon_steps = std::move(arg);
    return Init_PlanningRequest_execution_window(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_goal_pose
{
public:
  explicit Init_PlanningRequest_goal_pose(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_horizon_steps goal_pose(::amr_fleet_msgs::msg::PlanningRequest::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_PlanningRequest_horizon_steps(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_start_pose
{
public:
  explicit Init_PlanningRequest_start_pose(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_goal_pose start_pose(::amr_fleet_msgs::msg::PlanningRequest::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_PlanningRequest_goal_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_robot_id
{
public:
  explicit Init_PlanningRequest_robot_id(::amr_fleet_msgs::msg::PlanningRequest & msg)
  : msg_(msg)
  {}
  Init_PlanningRequest_start_pose robot_id(::amr_fleet_msgs::msg::PlanningRequest::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_PlanningRequest_start_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

class Init_PlanningRequest_header
{
public:
  Init_PlanningRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningRequest_robot_id header(::amr_fleet_msgs::msg::PlanningRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningRequest_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::PlanningRequest>()
{
  return amr_fleet_msgs::msg::builder::Init_PlanningRequest_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__BUILDER_HPP_
