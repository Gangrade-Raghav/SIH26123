// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/RobotBundle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_bundle.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/robot_bundle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotBundle_is_converged
{
public:
  explicit Init_RobotBundle_is_converged(::amr_fleet_msgs::msg::RobotBundle & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::RobotBundle is_converged(::amr_fleet_msgs::msg::RobotBundle::_is_converged_type arg)
  {
    msg_.is_converged = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotBundle msg_;
};

class Init_RobotBundle_bid_values
{
public:
  explicit Init_RobotBundle_bid_values(::amr_fleet_msgs::msg::RobotBundle & msg)
  : msg_(msg)
  {}
  Init_RobotBundle_is_converged bid_values(::amr_fleet_msgs::msg::RobotBundle::_bid_values_type arg)
  {
    msg_.bid_values = std::move(arg);
    return Init_RobotBundle_is_converged(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotBundle msg_;
};

class Init_RobotBundle_task_ids
{
public:
  explicit Init_RobotBundle_task_ids(::amr_fleet_msgs::msg::RobotBundle & msg)
  : msg_(msg)
  {}
  Init_RobotBundle_bid_values task_ids(::amr_fleet_msgs::msg::RobotBundle::_task_ids_type arg)
  {
    msg_.task_ids = std::move(arg);
    return Init_RobotBundle_bid_values(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotBundle msg_;
};

class Init_RobotBundle_robot_id
{
public:
  explicit Init_RobotBundle_robot_id(::amr_fleet_msgs::msg::RobotBundle & msg)
  : msg_(msg)
  {}
  Init_RobotBundle_task_ids robot_id(::amr_fleet_msgs::msg::RobotBundle::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotBundle_task_ids(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotBundle msg_;
};

class Init_RobotBundle_header
{
public:
  Init_RobotBundle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBundle_robot_id header(::amr_fleet_msgs::msg::RobotBundle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotBundle_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::RobotBundle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::RobotBundle>()
{
  return amr_fleet_msgs::msg::builder::Init_RobotBundle_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_BUNDLE__BUILDER_HPP_
