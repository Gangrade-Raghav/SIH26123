// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/CBBABid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/cbba_bid.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__CBBABid __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__CBBABid __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CBBABid_
{
  using Type = CBBABid_<ContainerAllocator>;

  explicit CBBABid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->iteration = 0ul;
    }
  }

  explicit CBBABid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->iteration = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _iteration_type =
    uint32_t;
  _iteration_type iteration;
  using _task_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _task_ids_type task_ids;
  using _winning_bids_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _winning_bids_type winning_bids;
  using _winning_robots_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _winning_robots_type winning_robots;
  using _timestamps_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _timestamps_type timestamps;

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
  Type & set__iteration(
    const uint32_t & _arg)
  {
    this->iteration = _arg;
    return *this;
  }
  Type & set__task_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->task_ids = _arg;
    return *this;
  }
  Type & set__winning_bids(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->winning_bids = _arg;
    return *this;
  }
  Type & set__winning_robots(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->winning_robots = _arg;
    return *this;
  }
  Type & set__timestamps(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->timestamps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__CBBABid
    std::shared_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__CBBABid
    std::shared_ptr<amr_fleet_msgs::msg::CBBABid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CBBABid_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->iteration != other.iteration) {
      return false;
    }
    if (this->task_ids != other.task_ids) {
      return false;
    }
    if (this->winning_bids != other.winning_bids) {
      return false;
    }
    if (this->winning_robots != other.winning_robots) {
      return false;
    }
    if (this->timestamps != other.timestamps) {
      return false;
    }
    return true;
  }
  bool operator!=(const CBBABid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CBBABid_

// alias to use template instance with default allocator
using CBBABid =
  amr_fleet_msgs::msg::CBBABid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__CBBA_BID__STRUCT_HPP_
