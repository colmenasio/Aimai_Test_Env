// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_command.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__godot_interfaces__msg__RRCCommand __attribute__((deprecated))
#else
# define DEPRECATED__godot_interfaces__msg__RRCCommand __declspec(deprecated)
#endif

namespace godot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RRCCommand_
{
  using Type = RRCCommand_<ContainerAllocator>;

  explicit RRCCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gas = 0.0;
      this->brake = 0.0;
      this->steer = 0.0;
    }
  }

  explicit RRCCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gas = 0.0;
      this->brake = 0.0;
      this->steer = 0.0;
    }
  }

  // field types and members
  using _gas_type =
    double;
  _gas_type gas;
  using _brake_type =
    double;
  _brake_type brake;
  using _steer_type =
    double;
  _steer_type steer;

  // setters for named parameter idiom
  Type & set__gas(
    const double & _arg)
  {
    this->gas = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__steer(
    const double & _arg)
  {
    this->steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    godot_interfaces::msg::RRCCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const godot_interfaces::msg::RRCCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      godot_interfaces::msg::RRCCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      godot_interfaces::msg::RRCCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__godot_interfaces__msg__RRCCommand
    std::shared_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__godot_interfaces__msg__RRCCommand
    std::shared_ptr<godot_interfaces::msg::RRCCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRCCommand_ & other) const
  {
    if (this->gas != other.gas) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRCCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRCCommand_

// alias to use template instance with default allocator
using RRCCommand =
  godot_interfaces::msg::RRCCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace godot_interfaces

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_HPP_
