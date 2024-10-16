// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_position.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__godot_interfaces__msg__RRCPosition __attribute__((deprecated))
#else
# define DEPRECATED__godot_interfaces__msg__RRCPosition __declspec(deprecated)
#endif

namespace godot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RRCPosition_
{
  using Type = RRCPosition_<ContainerAllocator>;

  explicit RRCPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xpos = 0.0;
      this->zpos = 0.0;
      this->angle = 0.0;
    }
  }

  explicit RRCPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xpos = 0.0;
      this->zpos = 0.0;
      this->angle = 0.0;
    }
  }

  // field types and members
  using _xpos_type =
    double;
  _xpos_type xpos;
  using _zpos_type =
    double;
  _zpos_type zpos;
  using _angle_type =
    double;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__xpos(
    const double & _arg)
  {
    this->xpos = _arg;
    return *this;
  }
  Type & set__zpos(
    const double & _arg)
  {
    this->zpos = _arg;
    return *this;
  }
  Type & set__angle(
    const double & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    godot_interfaces::msg::RRCPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const godot_interfaces::msg::RRCPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      godot_interfaces::msg::RRCPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      godot_interfaces::msg::RRCPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__godot_interfaces__msg__RRCPosition
    std::shared_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__godot_interfaces__msg__RRCPosition
    std::shared_ptr<godot_interfaces::msg::RRCPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRCPosition_ & other) const
  {
    if (this->xpos != other.xpos) {
      return false;
    }
    if (this->zpos != other.zpos) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRCPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRCPosition_

// alias to use template instance with default allocator
using RRCPosition =
  godot_interfaces::msg::RRCPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace godot_interfaces

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_HPP_
