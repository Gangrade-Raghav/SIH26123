// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/SpaceTimeReservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/space_time_reservation.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__SpaceTimeReservation __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__SpaceTimeReservation __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpaceTimeReservation_
{
  using Type = SpaceTimeReservation_<ContainerAllocator>;

  explicit SpaceTimeReservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->from_x = 0l;
      this->from_y = 0l;
      this->to_x = 0l;
      this->to_y = 0l;
      this->time_step = 0l;
      this->duration_sec = 0.0;
      this->is_edge = false;
      this->priority = 0.0;
    }
  }

  explicit SpaceTimeReservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->from_x = 0l;
      this->from_y = 0l;
      this->to_x = 0l;
      this->to_y = 0l;
      this->time_step = 0l;
      this->duration_sec = 0.0;
      this->is_edge = false;
      this->priority = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _from_x_type =
    int32_t;
  _from_x_type from_x;
  using _from_y_type =
    int32_t;
  _from_y_type from_y;
  using _to_x_type =
    int32_t;
  _to_x_type to_x;
  using _to_y_type =
    int32_t;
  _to_y_type to_y;
  using _time_step_type =
    int32_t;
  _time_step_type time_step;
  using _duration_sec_type =
    double;
  _duration_sec_type duration_sec;
  using _is_edge_type =
    bool;
  _is_edge_type is_edge;
  using _priority_type =
    double;
  _priority_type priority;

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
  Type & set__from_x(
    const int32_t & _arg)
  {
    this->from_x = _arg;
    return *this;
  }
  Type & set__from_y(
    const int32_t & _arg)
  {
    this->from_y = _arg;
    return *this;
  }
  Type & set__to_x(
    const int32_t & _arg)
  {
    this->to_x = _arg;
    return *this;
  }
  Type & set__to_y(
    const int32_t & _arg)
  {
    this->to_y = _arg;
    return *this;
  }
  Type & set__time_step(
    const int32_t & _arg)
  {
    this->time_step = _arg;
    return *this;
  }
  Type & set__duration_sec(
    const double & _arg)
  {
    this->duration_sec = _arg;
    return *this;
  }
  Type & set__is_edge(
    const bool & _arg)
  {
    this->is_edge = _arg;
    return *this;
  }
  Type & set__priority(
    const double & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__SpaceTimeReservation
    std::shared_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__SpaceTimeReservation
    std::shared_ptr<amr_fleet_msgs::msg::SpaceTimeReservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpaceTimeReservation_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->from_x != other.from_x) {
      return false;
    }
    if (this->from_y != other.from_y) {
      return false;
    }
    if (this->to_x != other.to_x) {
      return false;
    }
    if (this->to_y != other.to_y) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    if (this->duration_sec != other.duration_sec) {
      return false;
    }
    if (this->is_edge != other.is_edge) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpaceTimeReservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpaceTimeReservation_

// alias to use template instance with default allocator
using SpaceTimeReservation =
  amr_fleet_msgs::msg::SpaceTimeReservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__SPACE_TIME_RESERVATION__STRUCT_HPP_
