// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_profile.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_HPP_

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
# define DEPRECATED__amr_fleet_msgs__msg__CommunicationProfile __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__msg__CommunicationProfile __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CommunicationProfile_
{
  using Type = CommunicationProfile_<ContainerAllocator>;

  explicit CommunicationProfile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile_name = "";
      this->enabled = false;
      this->latency_ms = 0.0;
      this->jitter_ms = 0.0;
      this->loss_probability = 0.0;
      this->burst_loss_probability = 0.0;
      this->outage_duration_s = 0.0;
      this->seed = 0ul;
    }
  }

  explicit CommunicationProfile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    profile_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->profile_name = "";
      this->enabled = false;
      this->latency_ms = 0.0;
      this->jitter_ms = 0.0;
      this->loss_probability = 0.0;
      this->burst_loss_probability = 0.0;
      this->outage_duration_s = 0.0;
      this->seed = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _profile_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _profile_name_type profile_name;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _latency_ms_type =
    double;
  _latency_ms_type latency_ms;
  using _jitter_ms_type =
    double;
  _jitter_ms_type jitter_ms;
  using _loss_probability_type =
    double;
  _loss_probability_type loss_probability;
  using _burst_loss_probability_type =
    double;
  _burst_loss_probability_type burst_loss_probability;
  using _outage_duration_s_type =
    double;
  _outage_duration_s_type outage_duration_s;
  using _seed_type =
    uint32_t;
  _seed_type seed;
  using _isolated_robots_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _isolated_robots_type isolated_robots;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__profile_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->profile_name = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__latency_ms(
    const double & _arg)
  {
    this->latency_ms = _arg;
    return *this;
  }
  Type & set__jitter_ms(
    const double & _arg)
  {
    this->jitter_ms = _arg;
    return *this;
  }
  Type & set__loss_probability(
    const double & _arg)
  {
    this->loss_probability = _arg;
    return *this;
  }
  Type & set__burst_loss_probability(
    const double & _arg)
  {
    this->burst_loss_probability = _arg;
    return *this;
  }
  Type & set__outage_duration_s(
    const double & _arg)
  {
    this->outage_duration_s = _arg;
    return *this;
  }
  Type & set__seed(
    const uint32_t & _arg)
  {
    this->seed = _arg;
    return *this;
  }
  Type & set__isolated_robots(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->isolated_robots = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__msg__CommunicationProfile
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__msg__CommunicationProfile
    std::shared_ptr<amr_fleet_msgs::msg::CommunicationProfile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CommunicationProfile_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->profile_name != other.profile_name) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->latency_ms != other.latency_ms) {
      return false;
    }
    if (this->jitter_ms != other.jitter_ms) {
      return false;
    }
    if (this->loss_probability != other.loss_probability) {
      return false;
    }
    if (this->burst_loss_probability != other.burst_loss_probability) {
      return false;
    }
    if (this->outage_duration_s != other.outage_duration_s) {
      return false;
    }
    if (this->seed != other.seed) {
      return false;
    }
    if (this->isolated_robots != other.isolated_robots) {
      return false;
    }
    return true;
  }
  bool operator!=(const CommunicationProfile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CommunicationProfile_

// alias to use template instance with default allocator
using CommunicationProfile =
  amr_fleet_msgs::msg::CommunicationProfile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__STRUCT_HPP_
