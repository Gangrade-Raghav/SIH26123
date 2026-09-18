// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/TaskList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_list.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'tasks'
#include "amr_fleet_msgs/msg/detail/task_definition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__TaskList __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__TaskList __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskList_
{
  using Type = TaskList_<ContainerAllocator>;

  explicit TaskList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TaskList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tasks_type =
    std::vector<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>>;
  _tasks_type tasks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tasks(
    const std::vector<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::TaskList_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::TaskList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskList
    std::shared_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskList
    std::shared_ptr<amr_fleet_msgs::msg::TaskList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tasks != other.tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskList_

// alias to use template instance with default allocator
using TaskList =
  amr_fleet_msgs::msg::TaskList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_LIST__STRUCT_HPP_
