// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_cpu_load
{
public:
  explicit Init_RobotStatus_cpu_load(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::RobotStatus cpu_load(::amr_fleet_msgs::msg::RobotStatus::_cpu_load_type arg)
  {
    msg_.cpu_load = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_battery_percentage
{
public:
  explicit Init_RobotStatus_battery_percentage(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_cpu_load battery_percentage(::amr_fleet_msgs::msg::RobotStatus::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_RobotStatus_cpu_load(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_plan_epoch
{
public:
  explicit Init_RobotStatus_plan_epoch(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_battery_percentage plan_epoch(::amr_fleet_msgs::msg::RobotStatus::_plan_epoch_type arg)
  {
    msg_.plan_epoch = std::move(arg);
    return Init_RobotStatus_battery_percentage(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_state
{
public:
  explicit Init_RobotStatus_state(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_plan_epoch state(::amr_fleet_msgs::msg::RobotStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotStatus_plan_epoch(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_velocity
{
public:
  explicit Init_RobotStatus_velocity(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_state velocity(::amr_fleet_msgs::msg::RobotStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotStatus_state(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_velocity pose(::amr_fleet_msgs::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotStatus_velocity(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_robot_id
{
public:
  explicit Init_RobotStatus_robot_id(::amr_fleet_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_pose robot_id(::amr_fleet_msgs::msg::RobotStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_robot_id header(::amr_fleet_msgs::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::RobotStatus>()
{
  return amr_fleet_msgs::msg::builder::Init_RobotStatus_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
