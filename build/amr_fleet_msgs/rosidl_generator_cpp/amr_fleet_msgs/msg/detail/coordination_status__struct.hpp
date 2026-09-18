// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/coordination_status.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__CoordinationStatus __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__CoordinationStatus __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CoordinationStatus_
{
  using Type = CoordinationStatus_<ContainerAllocator>;

  explicit CoordinationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->priority = 0.0;
      this->current_cell_x = 0l;
      this->current_cell_y = 0l;
      this->target_cell_x = 0l;
      this->target_cell_y = 0l;
      this->time_step = 0l;
      this->status = "";
      this->waiting_for_robot = "";
      this->pose_x = 0.0;
      this->pose_y = 0.0;
    }
  }

  explicit CoordinationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    status(_alloc),
    waiting_for_robot(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->priority = 0.0;
      this->current_cell_x = 0l;
      this->current_cell_y = 0l;
      this->target_cell_x = 0l;
      this->target_cell_y = 0l;
      this->time_step = 0l;
      this->status = "";
      this->waiting_for_robot = "";
      this->pose_x = 0.0;
      this->pose_y = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _priority_type =
    double;
  _priority_type priority;
  using _current_cell_x_type =
    int32_t;
  _current_cell_x_type current_cell_x;
  using _current_cell_y_type =
    int32_t;
  _current_cell_y_type current_cell_y;
  using _target_cell_x_type =
    int32_t;
  _target_cell_x_type target_cell_x;
  using _target_cell_y_type =
    int32_t;
  _target_cell_y_type target_cell_y;
  using _time_step_type =
    int32_t;
  _time_step_type time_step;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _waiting_for_robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _waiting_for_robot_type waiting_for_robot;
  using _pose_x_type =
    double;
  _pose_x_type pose_x;
  using _pose_y_type =
    double;
  _pose_y_type pose_y;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__priority(
    const double & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__current_cell_x(
    const int32_t & _arg)
  {
    this->current_cell_x = _arg;
    return *this;
  }
  Type & set__current_cell_y(
    const int32_t & _arg)
  {
    this->current_cell_y = _arg;
    return *this;
  }
  Type & set__target_cell_x(
    const int32_t & _arg)
  {
    this->target_cell_x = _arg;
    return *this;
  }
  Type & set__target_cell_y(
    const int32_t & _arg)
  {
    this->target_cell_y = _arg;
    return *this;
  }
  Type & set__time_step(
    const int32_t & _arg)
  {
    this->time_step = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__waiting_for_robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->waiting_for_robot = _arg;
    return *this;
  }
  Type & set__pose_x(
    const double & _arg)
  {
    this->pose_x = _arg;
    return *this;
  }
  Type & set__pose_y(
    const double & _arg)
  {
    this->pose_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__CoordinationStatus
    std::shared_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__CoordinationStatus
    std::shared_ptr<amr_fleet_msgs::msg::CoordinationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinationStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->current_cell_x != other.current_cell_x) {
      return false;
    }
    if (this->current_cell_y != other.current_cell_y) {
      return false;
    }
    if (this->target_cell_x != other.target_cell_x) {
      return false;
    }
    if (this->target_cell_y != other.target_cell_y) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->waiting_for_robot != other.waiting_for_robot) {
      return false;
    }
    if (this->pose_x != other.pose_x) {
      return false;
    }
    if (this->pose_y != other.pose_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinationStatus_

// alias to use template instance with default allocator
using CoordinationStatus =
  amr_fleet_msgs::msg::CoordinationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COORDINATION_STATUS__STRUCT_HPP_
