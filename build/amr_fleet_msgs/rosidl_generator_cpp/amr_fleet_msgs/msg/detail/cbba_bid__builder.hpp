// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/cbba_bid.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/cbba_bid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_CBBABid_timestamps
{
public:
  explicit Init_CBBABid_timestamps(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::CBBABid timestamps(::amr_fleet_msgs::msg::CBBABid::_timestamps_type arg)
  {
    msg_.timestamps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_winning_robots
{
public:
  explicit Init_CBBABid_winning_robots(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  Init_CBBABid_timestamps winning_robots(::amr_fleet_msgs::msg::CBBABid::_winning_robots_type arg)
  {
    msg_.winning_robots = std::move(arg);
    return Init_CBBABid_timestamps(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_winning_bids
{
public:
  explicit Init_CBBABid_winning_bids(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  Init_CBBABid_winning_robots winning_bids(::amr_fleet_msgs::msg::CBBABid::_winning_bids_type arg)
  {
    msg_.winning_bids = std::move(arg);
    return Init_CBBABid_winning_robots(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_task_ids
{
public:
  explicit Init_CBBABid_task_ids(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  Init_CBBABid_winning_bids task_ids(::amr_fleet_msgs::msg::CBBABid::_task_ids_type arg)
  {
    msg_.task_ids = std::move(arg);
    return Init_CBBABid_winning_bids(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_iteration
{
public:
  explicit Init_CBBABid_iteration(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  Init_CBBABid_task_ids iteration(::amr_fleet_msgs::msg::CBBABid::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return Init_CBBABid_task_ids(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_robot_id
{
public:
  explicit Init_CBBABid_robot_id(::amr_fleet_msgs::msg::CBBABid & msg)
  : msg_(msg)
  {}
  Init_CBBABid_iteration robot_id(::amr_fleet_msgs::msg::CBBABid::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_CBBABid_iteration(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

class Init_CBBABid_header
{
public:
  Init_CBBABid_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CBBABid_robot_id header(::amr_fleet_msgs::msg::CBBABid::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CBBABid_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CBBABid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::CBBABid>()
{
  return amr_fleet_msgs::msg::builder::Init_CBBABid_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__BUILDER_HPP_
