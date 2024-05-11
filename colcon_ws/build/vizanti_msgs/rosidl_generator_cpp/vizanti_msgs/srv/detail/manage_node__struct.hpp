// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vizanti_msgs:srv/ManageNode.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__STRUCT_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vizanti_msgs__srv__ManageNode_Request __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_msgs__srv__ManageNode_Request __declspec(deprecated)
#endif

namespace vizanti_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManageNode_Request_
{
  using Type = ManageNode_Request_<ContainerAllocator>;

  explicit ManageNode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  explicit ManageNode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  // field types and members
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_type node;

  // setters for named parameter idiom
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_msgs__srv__ManageNode_Request
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_msgs__srv__ManageNode_Request
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManageNode_Request_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManageNode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManageNode_Request_

// alias to use template instance with default allocator
using ManageNode_Request =
  vizanti_msgs::srv::ManageNode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vizanti_msgs


#ifndef _WIN32
# define DEPRECATED__vizanti_msgs__srv__ManageNode_Response __attribute__((deprecated))
#else
# define DEPRECATED__vizanti_msgs__srv__ManageNode_Response __declspec(deprecated)
#endif

namespace vizanti_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ManageNode_Response_
{
  using Type = ManageNode_Response_<ContainerAllocator>;

  explicit ManageNode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ManageNode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vizanti_msgs__srv__ManageNode_Response
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vizanti_msgs__srv__ManageNode_Response
    std::shared_ptr<vizanti_msgs::srv::ManageNode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManageNode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManageNode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManageNode_Response_

// alias to use template instance with default allocator
using ManageNode_Response =
  vizanti_msgs::srv::ManageNode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vizanti_msgs

namespace vizanti_msgs
{

namespace srv
{

struct ManageNode
{
  using Request = vizanti_msgs::srv::ManageNode_Request;
  using Response = vizanti_msgs::srv::ManageNode_Response;
};

}  // namespace srv

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__MANAGE_NODE__STRUCT_HPP_
