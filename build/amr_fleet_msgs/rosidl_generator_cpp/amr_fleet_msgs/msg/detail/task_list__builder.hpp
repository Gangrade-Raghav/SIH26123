// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_list.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/task_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskList_tasks
{
public:
  explicit Init_TaskList_tasks(::amr_fleet_msgs::msg::TaskList & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::TaskList tasks(::amr_fleet_msgs::msg::TaskList::_tasks_type arg)
  {
    msg_.tasks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskList msg_;
};

class Init_TaskList_header
{
public:
  Init_TaskList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskList_tasks header(::amr_fleet_msgs::msg::TaskList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TaskList_tasks(msg_);
  }

private:
  ::amr_fleet_msgs::msg::TaskList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::TaskList>()
{
  return amr_fleet_msgs::msg::builder::Init_TaskList_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__BUILDER_HPP_
