// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/aisle_blockage_event.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_AisleBlockageEvent_timestamp
{
public:
  explicit Init_AisleBlockageEvent_timestamp(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::AisleBlockageEvent timestamp(::amr_fleet_msgs::msg::AisleBlockageEvent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_max_y
{
public:
  explicit Init_AisleBlockageEvent_max_y(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_timestamp max_y(::amr_fleet_msgs::msg::AisleBlockageEvent::_max_y_type arg)
  {
    msg_.max_y = std::move(arg);
    return Init_AisleBlockageEvent_timestamp(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_min_y
{
public:
  explicit Init_AisleBlockageEvent_min_y(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_max_y min_y(::amr_fleet_msgs::msg::AisleBlockageEvent::_min_y_type arg)
  {
    msg_.min_y = std::move(arg);
    return Init_AisleBlockageEvent_max_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_max_x
{
public:
  explicit Init_AisleBlockageEvent_max_x(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_min_y max_x(::amr_fleet_msgs::msg::AisleBlockageEvent::_max_x_type arg)
  {
    msg_.max_x = std::move(arg);
    return Init_AisleBlockageEvent_min_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_min_x
{
public:
  explicit Init_AisleBlockageEvent_min_x(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_max_x min_x(::amr_fleet_msgs::msg::AisleBlockageEvent::_min_x_type arg)
  {
    msg_.min_x = std::move(arg);
    return Init_AisleBlockageEvent_max_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_is_blocked
{
public:
  explicit Init_AisleBlockageEvent_is_blocked(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_min_x is_blocked(::amr_fleet_msgs::msg::AisleBlockageEvent::_is_blocked_type arg)
  {
    msg_.is_blocked = std::move(arg);
    return Init_AisleBlockageEvent_min_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_blockage_id
{
public:
  explicit Init_AisleBlockageEvent_blockage_id(::amr_fleet_msgs::msg::AisleBlockageEvent & msg)
  : msg_(msg)
  {}
  Init_AisleBlockageEvent_is_blocked blockage_id(::amr_fleet_msgs::msg::AisleBlockageEvent::_blockage_id_type arg)
  {
    msg_.blockage_id = std::move(arg);
    return Init_AisleBlockageEvent_is_blocked(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

class Init_AisleBlockageEvent_header
{
public:
  Init_AisleBlockageEvent_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AisleBlockageEvent_blockage_id header(::amr_fleet_msgs::msg::AisleBlockageEvent::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AisleBlockageEvent_blockage_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::AisleBlockageEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::AisleBlockageEvent>()
{
  return amr_fleet_msgs::msg::builder::Init_AisleBlockageEvent_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__AISLE_BLOCKAGE_EVENT__BUILDER_HPP_
