// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_fleet_msgs:srv/ControlTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "amr_fleet_msgs/srv/control_task.hpp"


#ifndef AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_HPP_
#define AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Request __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlTask_Request_
{
  using Type = ControlTask_Request_<ContainerAllocator>;

  explicit ControlTask_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->action = "";
    }
  }

  explicit ControlTask_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc),
    action(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
      this->action = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Request
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Request
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTask_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTask_Request_

// alias to use template instance with default allocator
using ControlTask_Request =
  amr_fleet_msgs::srv::ControlTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amr_fleet_msgs


#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Response __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlTask_Response_
{
  using Type = ControlTask_Response_<ContainerAllocator>;

  explicit ControlTask_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ControlTask_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Response
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Response
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTask_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTask_Response_

// alias to use template instance with default allocator
using ControlTask_Response =
  amr_fleet_msgs::srv::ControlTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amr_fleet_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Event __attribute__((deprecated))
#else
# define DEPRECATED__amr_fleet_msgs__srv__ControlTask_Event __declspec(deprecated)
#endif

namespace amr_fleet_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlTask_Event_
{
  using Type = ControlTask_Event_<ContainerAllocator>;

  explicit ControlTask_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ControlTask_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::srv::ControlTask_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<amr_fleet_msgs::srv::ControlTask_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Event
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_fleet_msgs__srv__ControlTask_Event
    std::shared_ptr<amr_fleet_msgs::srv::ControlTask_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTask_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTask_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTask_Event_

// alias to use template instance with default allocator
using ControlTask_Event =
  amr_fleet_msgs::srv::ControlTask_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amr_fleet_msgs

namespace amr_fleet_msgs
{

namespace srv
{

struct ControlTask
{
  using Request = amr_fleet_msgs::srv::ControlTask_Request;
  using Response = amr_fleet_msgs::srv::ControlTask_Response;
  using Event = amr_fleet_msgs::srv::ControlTask_Event;
};

}  // namespace srv

}  // namespace amr_fleet_msgs

#endif  // AMR_FLEET_MSGS__SRV__DETAIL__CONTROL_TASK__STRUCT_HPP_
