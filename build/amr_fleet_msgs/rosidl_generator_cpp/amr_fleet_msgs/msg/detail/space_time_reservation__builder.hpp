// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/SpaceTimeReservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/space_time_reservation.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/space_time_reservation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_SpaceTimeReservation_priority
{
public:
  explicit Init_SpaceTimeReservation_priority(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::SpaceTimeReservation priority(::amr_fleet_msgs::msg::SpaceTimeReservation::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_is_edge
{
public:
  explicit Init_SpaceTimeReservation_is_edge(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_priority is_edge(::amr_fleet_msgs::msg::SpaceTimeReservation::_is_edge_type arg)
  {
    msg_.is_edge = std::move(arg);
    return Init_SpaceTimeReservation_priority(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_duration_sec
{
public:
  explicit Init_SpaceTimeReservation_duration_sec(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_is_edge duration_sec(::amr_fleet_msgs::msg::SpaceTimeReservation::_duration_sec_type arg)
  {
    msg_.duration_sec = std::move(arg);
    return Init_SpaceTimeReservation_is_edge(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_time_step
{
public:
  explicit Init_SpaceTimeReservation_time_step(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_duration_sec time_step(::amr_fleet_msgs::msg::SpaceTimeReservation::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_SpaceTimeReservation_duration_sec(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_to_y
{
public:
  explicit Init_SpaceTimeReservation_to_y(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_time_step to_y(::amr_fleet_msgs::msg::SpaceTimeReservation::_to_y_type arg)
  {
    msg_.to_y = std::move(arg);
    return Init_SpaceTimeReservation_time_step(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_to_x
{
public:
  explicit Init_SpaceTimeReservation_to_x(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_to_y to_x(::amr_fleet_msgs::msg::SpaceTimeReservation::_to_x_type arg)
  {
    msg_.to_x = std::move(arg);
    return Init_SpaceTimeReservation_to_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_from_y
{
public:
  explicit Init_SpaceTimeReservation_from_y(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_to_x from_y(::amr_fleet_msgs::msg::SpaceTimeReservation::_from_y_type arg)
  {
    msg_.from_y = std::move(arg);
    return Init_SpaceTimeReservation_to_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_from_x
{
public:
  explicit Init_SpaceTimeReservation_from_x(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_from_y from_x(::amr_fleet_msgs::msg::SpaceTimeReservation::_from_x_type arg)
  {
    msg_.from_x = std::move(arg);
    return Init_SpaceTimeReservation_from_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_robot_id
{
public:
  explicit Init_SpaceTimeReservation_robot_id(::amr_fleet_msgs::msg::SpaceTimeReservation & msg)
  : msg_(msg)
  {}
  Init_SpaceTimeReservation_from_x robot_id(::amr_fleet_msgs::msg::SpaceTimeReservation::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_SpaceTimeReservation_from_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

class Init_SpaceTimeReservation_header
{
public:
  Init_SpaceTimeReservation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpaceTimeReservation_robot_id header(::amr_fleet_msgs::msg::SpaceTimeReservation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpaceTimeReservation_robot_id(msg_);
  }

private:
  ::amr_fleet_msgs::msg::SpaceTimeReservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::SpaceTimeReservation>()
{
  return amr_fleet_msgs::msg::builder::Init_SpaceTimeReservation_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__BUILDER_HPP_
