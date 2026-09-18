// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/coordination_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/coordination_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_CoordinationStatus_pose_y
{
public:
  explicit Init_CoordinationStatus_pose_y(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::CoordinationStatus pose_y(::amr_fleet_msgs::msg::CoordinationStatus::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_pose_x
{
public:
  explicit Init_CoordinationStatus_pose_x(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_pose_y pose_x(::amr_fleet_msgs::msg::CoordinationStatus::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_CoordinationStatus_pose_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_waiting_for_robot
{
public:
  explicit Init_CoordinationStatus_waiting_for_robot(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_pose_x waiting_for_robot(::amr_fleet_msgs::msg::CoordinationStatus::_waiting_for_robot_type arg)
  {
    msg_.waiting_for_robot = std::move(arg);
    return Init_CoordinationStatus_pose_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_status
{
public:
  explicit Init_CoordinationStatus_status(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_waiting_for_robot status(::amr_fleet_msgs::msg::CoordinationStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CoordinationStatus_waiting_for_robot(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_time_step
{
public:
  explicit Init_CoordinationStatus_time_step(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_status time_step(::amr_fleet_msgs::msg::CoordinationStatus::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_CoordinationStatus_status(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_target_cell_y
{
public:
  explicit Init_CoordinationStatus_target_cell_y(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_time_step target_cell_y(::amr_fleet_msgs::msg::CoordinationStatus::_target_cell_y_type arg)
  {
    msg_.target_cell_y = std::move(arg);
    return Init_CoordinationStatus_time_step(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_target_cell_x
{
public:
  explicit Init_CoordinationStatus_target_cell_x(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_target_cell_y target_cell_x(::amr_fleet_msgs::msg::CoordinationStatus::_target_cell_x_type arg)
  {
    msg_.target_cell_x = std::move(arg);
    return Init_CoordinationStatus_target_cell_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_current_cell_y
{
public:
  explicit Init_CoordinationStatus_current_cell_y(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_target_cell_x current_cell_y(::amr_fleet_msgs::msg::CoordinationStatus::_current_cell_y_type arg)
  {
    msg_.current_cell_y = std::move(arg);
    return Init_CoordinationStatus_target_cell_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_current_cell_x
{
public:
  explicit Init_CoordinationStatus_current_cell_x(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_current_cell_y current_cell_x(::amr_fleet_msgs::msg::CoordinationStatus::_current_cell_x_type arg)
  {
    msg_.current_cell_x = std::move(arg);
    return Init_CoordinationStatus_current_cell_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_priority
{
public:
  explicit Init_CoordinationStatus_priority(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_current_cell_x priority(::amr_fleet_msgs::msg::CoordinationStatus::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_CoordinationStatus_current_cell_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_robot_id
{
public:
  explicit Init_CoordinationStatus_robot_id(::amr_fleet_msgs::msg::CoordinationStatus & msg)
  : msg_(msg)
  {}
  Init_CoordinationStatus_priority robot_id(::amr_fleet_msgs::msg::CoordinationStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_CoordinationStatus_priority(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

class Init_CoordinationStatus_header
{
public:
  Init_CoordinationStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinationStatus_robot_id header(::amr_fleet_msgs::msg::CoordinationStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CoordinationStatus_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CoordinationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::CoordinationStatus>()
{
  return amr_fleet_msgs::msg::builder::Init_CoordinationStatus_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__BUILDER_HPP_
