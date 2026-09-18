// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/TaskBid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_bid.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/task_bid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskBid_allocation_epoch
{
public:
  explicit Init_TaskBid_allocation_epoch(::amr_fleet_msgs::msg::TaskBid & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::TaskBid allocation_epoch(::amr_fleet_msgs::msg::TaskBid::_allocation_epoch_type arg)
  {
    msg_.allocation_epoch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

class Init_TaskBid_path_cost
{
public:
  explicit Init_TaskBid_path_cost(::amr_fleet_msgs::msg::TaskBid & msg)
  : msg_(msg)
  {}
  Init_TaskBid_allocation_epoch path_cost(::amr_fleet_msgs::msg::TaskBid::_path_cost_type arg)
  {
    msg_.path_cost = std::move(arg);
    return Init_TaskBid_allocation_epoch(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

class Init_TaskBid_bid_value
{
public:
  explicit Init_TaskBid_bid_value(::amr_fleet_msgs::msg::TaskBid & msg)
  : msg_(msg)
  {}
  Init_TaskBid_path_cost bid_value(::amr_fleet_msgs::msg::TaskBid::_bid_value_type arg)
  {
    msg_.bid_value = std::move(arg);
    return Init_TaskBid_path_cost(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

class Init_TaskBid_task_id
{
public:
  explicit Init_TaskBid_task_id(::amr_fleet_msgs::msg::TaskBid & msg)
  : msg_(msg)
  {}
  Init_TaskBid_bid_value task_id(::amr_fleet_msgs::msg::TaskBid::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskBid_bid_value(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

class Init_TaskBid_robot_id
{
public:
  explicit Init_TaskBid_robot_id(::amr_fleet_msgs::msg::TaskBid & msg)
  : msg_(msg)
  {}
  Init_TaskBid_task_id robot_id(::amr_fleet_msgs::msg::TaskBid::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_TaskBid_task_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

class Init_TaskBid_header
{
public:
  Init_TaskBid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskBid_robot_id header(::amr_fleet_msgs::msg::TaskBid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaskBid_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskBid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::TaskBid>()
{
  return amr_fleet_msgs::msg::builder::Init_TaskBid_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_BID__BUILDER_HPP_
