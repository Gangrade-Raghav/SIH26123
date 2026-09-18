// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/BlockedResource.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/blocked_resource.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/blocked_resource__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockedResource_epoch
{
public:
  explicit Init_BlockedResource_epoch(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::BlockedResource epoch(::amr_fleet_msgs::msg::BlockedResource::_epoch_type arg)
  {
    msg_.epoch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_resource_t
{
public:
  explicit Init_BlockedResource_resource_t(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  Init_BlockedResource_epoch resource_t(::amr_fleet_msgs::msg::BlockedResource::_resource_t_type arg)
  {
    msg_.resource_t = std::move(arg);
    return Init_BlockedResource_epoch(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_resource_y
{
public:
  explicit Init_BlockedResource_resource_y(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  Init_BlockedResource_resource_t resource_y(::amr_fleet_msgs::msg::BlockedResource::_resource_y_type arg)
  {
    msg_.resource_y = std::move(arg);
    return Init_BlockedResource_resource_t(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_resource_x
{
public:
  explicit Init_BlockedResource_resource_x(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  Init_BlockedResource_resource_y resource_x(::amr_fleet_msgs::msg::BlockedResource::_resource_x_type arg)
  {
    msg_.resource_x = std::move(arg);
    return Init_BlockedResource_resource_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_waiting_for_robot_id
{
public:
  explicit Init_BlockedResource_waiting_for_robot_id(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  Init_BlockedResource_resource_x waiting_for_robot_id(::amr_fleet_msgs::msg::BlockedResource::_waiting_for_robot_id_type arg)
  {
    msg_.waiting_for_robot_id = std::move(arg);
    return Init_BlockedResource_resource_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_robot_id
{
public:
  explicit Init_BlockedResource_robot_id(::amr_fleet_msgs::msg::BlockedResource & msg)
  : msg_(msg)
  {}
  Init_BlockedResource_waiting_for_robot_id robot_id(::amr_fleet_msgs::msg::BlockedResource::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_BlockedResource_waiting_for_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

class Init_BlockedResource_header
{
public:
  Init_BlockedResource_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockedResource_robot_id header(::amr_fleet_msgs::msg::BlockedResource::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BlockedResource_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::BlockedResource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::BlockedResource>()
{
  return amr_fleet_msgs::msg::builder::Init_BlockedResource_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__BLOCKED_RESOURCE__BUILDER_HPP_
