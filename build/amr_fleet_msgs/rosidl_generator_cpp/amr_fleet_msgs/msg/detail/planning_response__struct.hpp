// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/PlanningResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/planning_response.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_

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
// Member 'full_path'
// Member 'horizon_path'
// Member 'execution_path'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__msg__PlanningResponse __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__PlanningResponse __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningResponse_
{
  using Type = PlanningResponse_<ContainerAllocator>;

  explicit PlanningResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->sub_goal_type = "";
      this->total_cost = 0.0;
      this->planning_latency_ms = 0.0;
      this->success = false;
      this->status_message = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->replan_count = 0ul;
    }
  }

  explicit PlanningResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc),
    task_id(_alloc),
    sub_goal_type(_alloc),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->task_id = "";
      this->sub_goal_type = "";
      this->total_cost = 0.0;
      this->planning_latency_ms = 0.0;
      this->success = false;
      this->status_message = "";
      this->horizon_steps = 0ul;
      this->execution_window = 0ul;
      this->replan_count = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _sub_goal_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sub_goal_type_type sub_goal_type;
  using _full_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _full_path_type full_path;
  using _horizon_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _horizon_path_type horizon_path;
  using _execution_path_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _execution_path_type execution_path;
  using _total_cost_type =
    double;
  _total_cost_type total_cost;
  using _planning_latency_ms_type =
    double;
  _planning_latency_ms_type planning_latency_ms;
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;
  using _horizon_steps_type =
    uint32_t;
  _horizon_steps_type horizon_steps;
  using _execution_window_type =
    uint32_t;
  _execution_window_type execution_window;
  using _replan_count_type =
    uint32_t;
  _replan_count_type replan_count;

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
  Type & set__full_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->full_path = _arg;
    return *this;
  }
  Type & set__horizon_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->horizon_path = _arg;
    return *this;
  }
  Type & set__execution_path(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->execution_path = _arg;
    return *this;
  }
  Type & set__total_cost(
    const double & _arg)
  {
    this->total_cost = _arg;
    return *this;
  }
  Type & set__planning_latency_ms(
    const double & _arg)
  {
    this->planning_latency_ms = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
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
  Type & set__replan_count(
    const uint32_t & _arg)
  {
    this->replan_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__PlanningResponse
    std::shared_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__PlanningResponse
    std::shared_ptr<amr_fleet_msgs::msg::PlanningResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->sub_goal_type != other.sub_goal_type) {
      return false;
    }
    if (this->full_path != other.full_path) {
      return false;
    }
    if (this->horizon_path != other.horizon_path) {
      return false;
    }
    if (this->execution_path != other.execution_path) {
      return false;
    }
    if (this->total_cost != other.total_cost) {
      return false;
    }
    if (this->planning_latency_ms != other.planning_latency_ms) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    if (this->horizon_steps != other.horizon_steps) {
      return false;
    }
    if (this->execution_window != other.execution_window) {
      return false;
    }
    if (this->replan_count != other.replan_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningResponse_

// alias to use template instance with default allocator
using PlanningResponse =
  amr_fleet_msgs::msg::PlanningResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__PLANNING_RESPONSE__STRUCT_HPP_
