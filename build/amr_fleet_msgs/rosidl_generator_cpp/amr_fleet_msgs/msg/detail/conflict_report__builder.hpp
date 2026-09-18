// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/conflict_report.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/conflict_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ConflictReport_resolved
{
public:
  explicit Init_ConflictReport_resolved(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::ConflictReport resolved(::amr_fleet_msgs::msg::ConflictReport::_resolved_type arg)
  {
    msg_.resolved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_time_step
{
public:
  explicit Init_ConflictReport_time_step(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_resolved time_step(::amr_fleet_msgs::msg::ConflictReport::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_ConflictReport_resolved(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_cell_y
{
public:
  explicit Init_ConflictReport_cell_y(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_time_step cell_y(::amr_fleet_msgs::msg::ConflictReport::_cell_y_type arg)
  {
    msg_.cell_y = std::move(arg);
    return Init_ConflictReport_time_step(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_cell_x
{
public:
  explicit Init_ConflictReport_cell_x(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_cell_y cell_x(::amr_fleet_msgs::msg::ConflictReport::_cell_x_type arg)
  {
    msg_.cell_x = std::move(arg);
    return Init_ConflictReport_cell_y(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_robot_b
{
public:
  explicit Init_ConflictReport_robot_b(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_cell_x robot_b(::amr_fleet_msgs::msg::ConflictReport::_robot_b_type arg)
  {
    msg_.robot_b = std::move(arg);
    return Init_ConflictReport_cell_x(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_robot_a
{
public:
  explicit Init_ConflictReport_robot_a(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_robot_b robot_a(::amr_fleet_msgs::msg::ConflictReport::_robot_a_type arg)
  {
    msg_.robot_a = std::move(arg);
    return Init_ConflictReport_robot_b(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_conflict_type
{
public:
  explicit Init_ConflictReport_conflict_type(::amr_fleet_msgs::msg::ConflictReport & msg)
  : msg_(msg)
  {}
  Init_ConflictReport_robot_a conflict_type(::amr_fleet_msgs::msg::ConflictReport::_conflict_type_type arg)
  {
    msg_.conflict_type = std::move(arg);
    return Init_ConflictReport_robot_a(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

class Init_ConflictReport_header
{
public:
  Init_ConflictReport_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConflictReport_conflict_type header(::amr_fleet_msgs::msg::ConflictReport::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConflictReport_conflict_type(msg_);
  }

private:
  ::amr_fleet_msgs::msg::ConflictReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::ConflictReport>()
{
  return amr_fleet_msgs::msg::builder::Init_ConflictReport_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__BUILDER_HPP_
