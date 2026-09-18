// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_health.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/robot_health__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHealth_uptime_sec
{
public:
  explicit Init_RobotHealth_uptime_sec(::amr_fleet_msgs::msg::RobotHealth & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::RobotHealth uptime_sec(::amr_fleet_msgs::msg::RobotHealth::_uptime_sec_type arg)
  {
    msg_.uptime_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

class Init_RobotHealth_active_task_id
{
public:
  explicit Init_RobotHealth_active_task_id(::amr_fleet_msgs::msg::RobotHealth & msg)
  : msg_(msg)
  {}
  Init_RobotHealth_uptime_sec active_task_id(::amr_fleet_msgs::msg::RobotHealth::_active_task_id_type arg)
  {
    msg_.active_task_id = std::move(arg);
    return Init_RobotHealth_uptime_sec(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

class Init_RobotHealth_last_pose
{
public:
  explicit Init_RobotHealth_last_pose(::amr_fleet_msgs::msg::RobotHealth & msg)
  : msg_(msg)
  {}
  Init_RobotHealth_active_task_id last_pose(::amr_fleet_msgs::msg::RobotHealth::_last_pose_type arg)
  {
    msg_.last_pose = std::move(arg);
    return Init_RobotHealth_active_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

class Init_RobotHealth_health_state
{
public:
  explicit Init_RobotHealth_health_state(::amr_fleet_msgs::msg::RobotHealth & msg)
  : msg_(msg)
  {}
  Init_RobotHealth_last_pose health_state(::amr_fleet_msgs::msg::RobotHealth::_health_state_type arg)
  {
    msg_.health_state = std::move(arg);
    return Init_RobotHealth_last_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

class Init_RobotHealth_robot_id
{
public:
  explicit Init_RobotHealth_robot_id(::amr_fleet_msgs::msg::RobotHealth & msg)
  : msg_(msg)
  {}
  Init_RobotHealth_health_state robot_id(::amr_fleet_msgs::msg::RobotHealth::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotHealth_health_state(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

class Init_RobotHealth_header
{
public:
  Init_RobotHealth_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHealth_robot_id header(::amr_fleet_msgs::msg::RobotHealth::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHealth_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotHealth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::RobotHealth>()
{
  return amr_fleet_msgs::msg::builder::Init_RobotHealth_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__BUILDER_HPP_
