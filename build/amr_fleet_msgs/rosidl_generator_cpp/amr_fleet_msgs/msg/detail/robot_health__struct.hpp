// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/RobotHealth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/robot_health.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_HPP_

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
// Member 'last_pose'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__RobotHealth __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__RobotHealth __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHealth_
{
  using Type = RobotHealth_<ContainerAllocator>;

  explicit RobotHealth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    last_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->health_state = "";
      this->active_task_id = "";
      this->uptime_sec = 0.0;
    }
  }

  explicit RobotHealth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    health_state(_alloc),
    last_pose(_alloc, _init),
    active_task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->health_state = "";
      this->active_task_id = "";
      this->uptime_sec = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _health_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _health_state_type health_state;
  using _last_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _last_pose_type last_pose;
  using _active_task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _active_task_id_type active_task_id;
  using _uptime_sec_type =
    double;
  _uptime_sec_type uptime_sec;

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
  Type & set__health_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->health_state = _arg;
    return *this;
  }
  Type & set__last_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->last_pose = _arg;
    return *this;
  }
  Type & set__active_task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->active_task_id = _arg;
    return *this;
  }
  Type & set__uptime_sec(
    const double & _arg)
  {
    this->uptime_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__RobotHealth
    std::shared_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__RobotHealth
    std::shared_ptr<amr_fleet_msgs::msg::RobotHealth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHealth_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->health_state != other.health_state) {
      return false;
    }
    if (this->last_pose != other.last_pose) {
      return false;
    }
    if (this->active_task_id != other.active_task_id) {
      return false;
    }
    if (this->uptime_sec != other.uptime_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHealth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHealth_

// alias to use template instance with default allocator
using RobotHealth =
  amr_fleet_msgs::msg::RobotHealth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__ROBOT_HEALTH__STRUCT_HPP_
