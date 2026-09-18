// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/PlanningRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_request.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_

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
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__PlanningRequest __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__PlanningRequest __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningRequest_
{
  using Type = PlanningRequest_<ContainerAllocator>;

  explicit PlanningRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start_pose(_init),
    goal_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->task_id = "";
      this->sub_goal_type = "";
    }
  }

  explicit PlanningRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    start_pose(_alloc, _init),
    goal_pose(_alloc, _init),
    task_id(_alloc),
    sub_goal_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->task_id = "";
      this->sub_goal_type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _start_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_pose_type start_pose;
  using _goal_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _horizon_steps_type =
    uint32_t;
  _horizon_steps_type horizon_steps;
  using _execution_window_type =
    uint32_t;
  _execution_window_type execution_window;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _sub_goal_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sub_goal_type_type sub_goal_type;

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
  Type & set__start_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start_pose = _arg;
    return *this;
  }
  Type & set__goal_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }
  Type & set__horizon_steps(
    const uint32_t & _arg)
  {
    this->horizon_steps = _arg;
    return *this;
  }
  Type & set__execution_window(
    const uint32_t & _arg)
  {
    this->execution_window = _arg;
    return *this;
  }
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__sub_goal_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sub_goal_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__PlanningRequest
    std::shared_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__PlanningRequest
    std::shared_ptr<amr_fleet_msgs::msg::PlanningRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->start_pose != other.start_pose) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->horizon_steps != other.horizon_steps) {
      return false;
    }
    if (this->execution_window != other.execution_window) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->sub_goal_type != other.sub_goal_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningRequest_

// alias to use template instance with default allocator
using PlanningRequest =
  amr_fleet_msgs::msg::PlanningRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_REQUEST__STRUCT_HPP_
