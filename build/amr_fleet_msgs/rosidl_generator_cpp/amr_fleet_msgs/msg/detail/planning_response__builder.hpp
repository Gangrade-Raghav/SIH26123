// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_response.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/planning_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningResponse_replan_count
{
public:
  explicit Init_PlanningResponse_replan_count(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::PlanningResponse replan_count(::amr_fleet_msgs::msg::PlanningResponse::_replan_count_type arg)
  {
    msg_.replan_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_execution_window
{
public:
  explicit Init_PlanningResponse_execution_window(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_replan_count execution_window(::amr_fleet_msgs::msg::PlanningResponse::_execution_window_type arg)
  {
    msg_.execution_window = std::move(arg);
    return Init_PlanningResponse_replan_count(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_horizon_steps
{
public:
  explicit Init_PlanningResponse_horizon_steps(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_execution_window horizon_steps(::amr_fleet_msgs::msg::PlanningResponse::_horizon_steps_type arg)
  {
    msg_.horizon_steps = std::move(arg);
    return Init_PlanningResponse_execution_window(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_status_message
{
public:
  explicit Init_PlanningResponse_status_message(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_horizon_steps status_message(::amr_fleet_msgs::msg::PlanningResponse::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return Init_PlanningResponse_horizon_steps(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_success
{
public:
  explicit Init_PlanningResponse_success(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_status_message success(::amr_fleet_msgs::msg::PlanningResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanningResponse_status_message(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_planning_latency_ms
{
public:
  explicit Init_PlanningResponse_planning_latency_ms(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_success planning_latency_ms(::amr_fleet_msgs::msg::PlanningResponse::_planning_latency_ms_type arg)
  {
    msg_.planning_latency_ms = std::move(arg);
    return Init_PlanningResponse_success(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_total_cost
{
public:
  explicit Init_PlanningResponse_total_cost(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_planning_latency_ms total_cost(::amr_fleet_msgs::msg::PlanningResponse::_total_cost_type arg)
  {
    msg_.total_cost = std::move(arg);
    return Init_PlanningResponse_planning_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_execution_path
{
public:
  explicit Init_PlanningResponse_execution_path(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_total_cost execution_path(::amr_fleet_msgs::msg::PlanningResponse::_execution_path_type arg)
  {
    msg_.execution_path = std::move(arg);
    return Init_PlanningResponse_total_cost(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_horizon_path
{
public:
  explicit Init_PlanningResponse_horizon_path(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_execution_path horizon_path(::amr_fleet_msgs::msg::PlanningResponse::_horizon_path_type arg)
  {
    msg_.horizon_path = std::move(arg);
    return Init_PlanningResponse_execution_path(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_full_path
{
public:
  explicit Init_PlanningResponse_full_path(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_horizon_path full_path(::amr_fleet_msgs::msg::PlanningResponse::_full_path_type arg)
  {
    msg_.full_path = std::move(arg);
    return Init_PlanningResponse_horizon_path(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_sub_goal_type
{
public:
  explicit Init_PlanningResponse_sub_goal_type(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_full_path sub_goal_type(::amr_fleet_msgs::msg::PlanningResponse::_sub_goal_type_type arg)
  {
    msg_.sub_goal_type = std::move(arg);
    return Init_PlanningResponse_full_path(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_task_id
{
public:
  explicit Init_PlanningResponse_task_id(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_sub_goal_type task_id(::amr_fleet_msgs::msg::PlanningResponse::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_PlanningResponse_sub_goal_type(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_robot_id
{
public:
  explicit Init_PlanningResponse_robot_id(::amr_fleet_msgs::msg::PlanningResponse & msg)
  : msg_(msg)
  {}
  Init_PlanningResponse_task_id robot_id(::amr_fleet_msgs::msg::PlanningResponse::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_PlanningResponse_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

class Init_PlanningResponse_header
{
public:
  Init_PlanningResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningResponse_robot_id header(::amr_fleet_msgs::msg::PlanningResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningResponse_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::PlanningResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::PlanningResponse>()
{
  return amr_fleet_msgs::msg::builder::Init_PlanningResponse_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__BUILDER_HPP_
