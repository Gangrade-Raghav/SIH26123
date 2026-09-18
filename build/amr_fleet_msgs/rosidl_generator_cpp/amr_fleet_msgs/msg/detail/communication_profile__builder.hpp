// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/msg/communication_profile.hpp"


#ifndef AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__BUILDER_HPP_
#define AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_fleet_msgs/msg/detail/communication_profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_CommunicationProfile_isolated_robots
{
public:
  explicit Init_CommunicationProfile_isolated_robots(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  ::amr_fleet_msgs::msg::CommunicationProfile isolated_robots(::amr_fleet_msgs::msg::CommunicationProfile::_isolated_robots_type arg)
  {
    msg_.isolated_robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_seed
{
public:
  explicit Init_CommunicationProfile_seed(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_isolated_robots seed(::amr_fleet_msgs::msg::CommunicationProfile::_seed_type arg)
  {
    msg_.seed = std::move(arg);
    return Init_CommunicationProfile_isolated_robots(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_outage_duration_s
{
public:
  explicit Init_CommunicationProfile_outage_duration_s(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_seed outage_duration_s(::amr_fleet_msgs::msg::CommunicationProfile::_outage_duration_s_type arg)
  {
    msg_.outage_duration_s = std::move(arg);
    return Init_CommunicationProfile_seed(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_burst_loss_probability
{
public:
  explicit Init_CommunicationProfile_burst_loss_probability(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_outage_duration_s burst_loss_probability(::amr_fleet_msgs::msg::CommunicationProfile::_burst_loss_probability_type arg)
  {
    msg_.burst_loss_probability = std::move(arg);
    return Init_CommunicationProfile_outage_duration_s(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_loss_probability
{
public:
  explicit Init_CommunicationProfile_loss_probability(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_burst_loss_probability loss_probability(::amr_fleet_msgs::msg::CommunicationProfile::_loss_probability_type arg)
  {
    msg_.loss_probability = std::move(arg);
    return Init_CommunicationProfile_burst_loss_probability(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_jitter_ms
{
public:
  explicit Init_CommunicationProfile_jitter_ms(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_loss_probability jitter_ms(::amr_fleet_msgs::msg::CommunicationProfile::_jitter_ms_type arg)
  {
    msg_.jitter_ms = std::move(arg);
    return Init_CommunicationProfile_loss_probability(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_latency_ms
{
public:
  explicit Init_CommunicationProfile_latency_ms(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_jitter_ms latency_ms(::amr_fleet_msgs::msg::CommunicationProfile::_latency_ms_type arg)
  {
    msg_.latency_ms = std::move(arg);
    return Init_CommunicationProfile_jitter_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_enabled
{
public:
  explicit Init_CommunicationProfile_enabled(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_latency_ms enabled(::amr_fleet_msgs::msg::CommunicationProfile::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_CommunicationProfile_latency_ms(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_profile_name
{
public:
  explicit Init_CommunicationProfile_profile_name(::amr_fleet_msgs::msg::CommunicationProfile & msg)
  : msg_(msg)
  {}
  Init_CommunicationProfile_enabled profile_name(::amr_fleet_msgs::msg::CommunicationProfile::_profile_name_type arg)
  {
    msg_.profile_name = std::move(arg);
    return Init_CommunicationProfile_enabled(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

class Init_CommunicationProfile_header
{
public:
  Init_CommunicationProfile_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommunicationProfile_profile_name header(::amr_fleet_msgs::msg::CommunicationProfile::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CommunicationProfile_profile_name(msg_);
  }

private:
  ::amr_fleet_msgs::msg::CommunicationProfile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_fleet_msgs::msg::CommunicationProfile>()
{
  return amr_fleet_msgs::msg::builder::Init_CommunicationProfile_header();
}

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__MSG__DETAIL__COMMUNICATION_PROFILE__BUILDER_HPP_
