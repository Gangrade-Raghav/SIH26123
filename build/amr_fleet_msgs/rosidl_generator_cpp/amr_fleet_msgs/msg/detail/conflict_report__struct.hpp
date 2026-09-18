// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/ConflictReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/conflict_report.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__ConflictReport __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__ConflictReport __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConflictReport_
{
  using Type = ConflictReport_<ContainerAllocator>;

  explicit ConflictReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_type = "";
      this->robot_a = "";
      this->robot_b = "";
      this->cell_x = 0l;
      this->cell_y = 0l;
      this->time_step = 0l;
      this->resolved = false;
    }
  }

  explicit ConflictReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    conflict_type(_alloc),
    robot_a(_alloc),
    robot_b(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->conflict_type = "";
      this->robot_a = "";
      this->robot_b = "";
      this->cell_x = 0l;
      this->cell_y = 0l;
      this->time_step = 0l;
      this->resolved = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _conflict_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _conflict_type_type conflict_type;
  using _robot_a_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_a_type robot_a;
  using _robot_b_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_b_type robot_b;
  using _cell_x_type =
    int32_t;
  _cell_x_type cell_x;
  using _cell_y_type =
    int32_t;
  _cell_y_type cell_y;
  using _time_step_type =
    int32_t;
  _time_step_type time_step;
  using _resolved_type =
    bool;
  _resolved_type resolved;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__conflict_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->conflict_type = _arg;
    return *this;
  }
  Type & set__robot_a(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_a = _arg;
    return *this;
  }
  Type & set__robot_b(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_b = _arg;
    return *this;
  }
  Type & set__cell_x(
    const int32_t & _arg)
  {
    this->cell_x = _arg;
    return *this;
  }
  Type & set__cell_y(
    const int32_t & _arg)
  {
    this->cell_y = _arg;
    return *this;
  }
  Type & set__time_step(
    const int32_t & _arg)
  {
    this->time_step = _arg;
    return *this;
  }
  Type & set__resolved(
    const bool & _arg)
  {
    this->resolved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__ConflictReport
    std::shared_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__ConflictReport
    std::shared_ptr<amr_fleet_msgs::msg::ConflictReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConflictReport_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->conflict_type != other.conflict_type) {
      return false;
    }
    if (this->robot_a != other.robot_a) {
      return false;
    }
    if (this->robot_b != other.robot_b) {
      return false;
    }
    if (this->cell_x != other.cell_x) {
      return false;
    }
    if (this->cell_y != other.cell_y) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    if (this->resolved != other.resolved) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConflictReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConflictReport_

// alias to use template instance with default allocator
using ConflictReport =
  amr_fleet_msgs::msg::ConflictReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CONFLICT_REPORT__STRUCT_HPP_
