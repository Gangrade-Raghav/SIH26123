// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/TaskDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/task_definition.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_HPP_

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
// Member 'pickup_pose'
// Member 'dropoff_pose'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'created_at'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__TaskDefinition __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__TaskDefinition __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskDefinition_
{
  using Type = TaskDefinition_<ContainerAllocator>;

  explicit TaskDefinition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pickup_pose(_init),
    dropoff_pose(_init),
    created_at(_init),
    deadline(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->priority = 0l;
      this->status = "";
      this->assigned_robot_id = "";
      this->requested_robot = "";
    }
  }

  explicit TaskDefinition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    task_id(_alloc),
    pickup_pose(_alloc, _init),
    dropoff_pose(_alloc, _init),
    created_at(_alloc, _init),
    deadline(_alloc, _init),
    status(_alloc),
    assigned_robot_id(_alloc),
    requested_robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->priority = 0l;
      this->status = "";
      this->assigned_robot_id = "";
      this->requested_robot = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _pickup_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pickup_pose_type pickup_pose;
  using _dropoff_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _dropoff_pose_type dropoff_pose;
  using _priority_type =
    int32_t;
  _priority_type priority;
  using _created_at_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _created_at_type created_at;
  using _deadline_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _deadline_type deadline;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _assigned_robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _assigned_robot_id_type assigned_robot_id;
  using _requested_robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requested_robot_type requested_robot;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__pickup_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pickup_pose = _arg;
    return *this;
  }
  Type & set__dropoff_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->dropoff_pose = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__created_at(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->created_at = _arg;
    return *this;
  }
  Type & set__deadline(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->deadline = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__assigned_robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->assigned_robot_id = _arg;
    return *this;
  }
  Type & set__requested_robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requested_robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskDefinition
    std::shared_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__TaskDefinition
    std::shared_ptr<amr_fleet_msgs::msg::TaskDefinition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskDefinition_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->pickup_pose != other.pickup_pose) {
      return false;
    }
    if (this->dropoff_pose != other.dropoff_pose) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->created_at != other.created_at) {
      return false;
    }
    if (this->deadline != other.deadline) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->assigned_robot_id != other.assigned_robot_id) {
      return false;
    }
    if (this->requested_robot != other.requested_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskDefinition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskDefinition_

// alias to use template instance with default allocator
using TaskDefinition =
  amr_fleet_msgs::msg::TaskDefinition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__TASK_DEFINITION__STRUCT_HPP_
