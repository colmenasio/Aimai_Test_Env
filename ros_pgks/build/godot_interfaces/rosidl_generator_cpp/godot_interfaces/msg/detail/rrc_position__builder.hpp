// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_position.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__BUILDER_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "godot_interfaces/msg/detail/rrc_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace godot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RRCPosition_angle
{
public:
  explicit Init_RRCPosition_angle(::godot_interfaces::msg::RRCPosition & msg)
  : msg_(msg)
  {}
  ::godot_interfaces::msg::RRCPosition angle(::godot_interfaces::msg::RRCPosition::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godot_interfaces::msg::RRCPosition msg_;
};

class Init_RRCPosition_zpos
{
public:
  explicit Init_RRCPosition_zpos(::godot_interfaces::msg::RRCPosition & msg)
  : msg_(msg)
  {}
  Init_RRCPosition_angle zpos(::godot_interfaces::msg::RRCPosition::_zpos_type arg)
  {
    msg_.zpos = std::move(arg);
    return Init_RRCPosition_angle(msg_);
  }

private:
  ::godot_interfaces::msg::RRCPosition msg_;
};

class Init_RRCPosition_xpos
{
public:
  Init_RRCPosition_xpos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRCPosition_zpos xpos(::godot_interfaces::msg::RRCPosition::_xpos_type arg)
  {
    msg_.xpos = std::move(arg);
    return Init_RRCPosition_zpos(msg_);
  }

private:
  ::godot_interfaces::msg::RRCPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::godot_interfaces::msg::RRCPosition>()
{
  return godot_interfaces::msg::builder::Init_RRCPosition_xpos();
}

}  // namespace godot_interfaces

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__BUILDER_HPP_
