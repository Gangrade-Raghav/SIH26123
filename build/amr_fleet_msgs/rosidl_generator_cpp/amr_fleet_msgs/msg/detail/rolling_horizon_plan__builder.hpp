// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/rolling_horizon_plan.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/rolling_horizon_plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RollingHorizonPlan_is_valid
{
public:
  explicit Init_RollingHorizonPlan_is_valid(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::RollingHorizonPlan is_valid(::amr_fleet_msgs::msg::RollingHorizonPlan::_is_valid_type arg)
  {
    msg_.is_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_planning_latency_ms
{
public:
  explicit Init_RollingHorizonPlan_planning_latency_ms(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_is_valid planning_latency_ms(::amr_fleet_msgs::msg::RollingHorizonPlan::_planning_latency_ms_type arg)
  {
    msg_.planning_latency_ms = std::move(arg);
    return Init_RollingHorizonPlan_is_valid(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_replan_count
{
public:
  explicit Init_RollingHorizonPlan_replan_count(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_planning_latency_ms replan_count(::amr_fleet_msgs::msg::RollingHorizonPlan::_replan_count_type arg)
  {
    msg_.replan_count = std::move(arg);
    return Init_RollingHorizonPlan_planning_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_execution_window
{
public:
  explicit Init_RollingHorizonPlan_execution_window(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_replan_count execution_window(::amr_fleet_msgs::msg::RollingHorizonPlan::_execution_window_type arg)
  {
    msg_.execution_window = std::move(arg);
    return Init_RollingHorizonPlan_replan_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_horizon_steps
{
public:
  explicit Init_RollingHorizonPlan_horizon_steps(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_execution_window horizon_steps(::amr_fleet_msgs::msg::RollingHorizonPlan::_horizon_steps_type arg)
  {
    msg_.horizon_steps = std::move(arg);
    return Init_RollingHorizonPlan_execution_window(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_execution_path
{
public:
  explicit Init_RollingHorizonPlan_execution_path(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_horizon_steps execution_path(::amr_fleet_msgs::msg::RollingHorizonPlan::_execution_path_type arg)
  {
    msg_.execution_path = std::move(arg);
    return Init_RollingHorizonPlan_horizon_steps(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_horizon_path
{
public:
  explicit Init_RollingHorizonPlan_horizon_path(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_execution_path horizon_path(::amr_fleet_msgs::msg::RollingHorizonPlan::_horizon_path_type arg)
  {
    msg_.horizon_path = std::move(arg);
    return Init_RollingHorizonPlan_execution_path(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_current_goal
{
public:
  explicit Init_RollingHorizonPlan_current_goal(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_horizon_path current_goal(::amr_fleet_msgs::msg::RollingHorizonPlan::_current_goal_type arg)
  {
    msg_.current_goal = std::move(arg);
    return Init_RollingHorizonPlan_horizon_path(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_current_phase
{
public:
  explicit Init_RollingHorizonPlan_current_phase(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_current_goal current_phase(::amr_fleet_msgs::msg::RollingHorizonPlan::_current_phase_type arg)
  {
    msg_.current_phase = std::move(arg);
    return Init_RollingHorizonPlan_current_goal(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_current_task_id
{
public:
  explicit Init_RollingHorizonPlan_current_task_id(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_current_phase current_task_id(::amr_fleet_msgs::msg::RollingHorizonPlan::_current_task_id_type arg)
  {
    msg_.current_task_id = std::move(arg);
    return Init_RollingHorizonPlan_current_phase(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_assigned_bundle
{
public:
  explicit Init_RollingHorizonPlan_assigned_bundle(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_current_task_id assigned_bundle(::amr_fleet_msgs::msg::RollingHorizonPlan::_assigned_bundle_type arg)
  {
    msg_.assigned_bundle = std::move(arg);
    return Init_RollingHorizonPlan_current_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_robot_id
{
public:
  explicit Init_RollingHorizonPlan_robot_id(::amr_fleet_msgs::msg::RollingHorizonPlan & msg)
  : msg_(msg)
  {}
  Init_RollingHorizonPlan_assigned_bundle robot_id(::amr_fleet_msgs::msg::RollingHorizonPlan::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RollingHorizonPlan_assigned_bundle(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

class Init_RollingHorizonPlan_header
{
public:
  Init_RollingHorizonPlan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RollingHorizonPlan_robot_id header(::amr_fleet_msgs::msg::RollingHorizonPlan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RollingHorizonPlan_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RollingHorizonPlan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::RollingHorizonPlan>()
{
  return amr_fleet_msgs::msg::builder::Init_RollingHorizonPlan_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROLLING_HORIZON_PLAN__BUILDER_HPP_
