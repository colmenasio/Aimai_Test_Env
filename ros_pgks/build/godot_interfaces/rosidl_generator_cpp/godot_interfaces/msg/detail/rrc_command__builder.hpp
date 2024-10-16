// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_command.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__BUILDER_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "godot_interfaces/msg/detail/rrc_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace godot_interfaces
{

namespace msg
{

namespace builder
{

class Init_RRCCommand_steer
{
public:
  explicit Init_RRCCommand_steer(::godot_interfaces::msg::RRCCommand & msg)
  : msg_(msg)
  {}
  ::godot_interfaces::msg::RRCCommand steer(::godot_interfaces::msg::RRCCommand::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::godot_interfaces::msg::RRCCommand msg_;
};

class Init_RRCCommand_brake
{
public:
  explicit Init_RRCCommand_brake(::godot_interfaces::msg::RRCCommand & msg)
  : msg_(msg)
  {}
  Init_RRCCommand_steer brake(::godot_interfaces::msg::RRCCommand::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_RRCCommand_steer(msg_);
  }

private:
  ::godot_interfaces::msg::RRCCommand msg_;
};

class Init_RRCCommand_gas
{
public:
  Init_RRCCommand_gas()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRCCommand_brake gas(::godot_interfaces::msg::RRCCommand::_gas_type arg)
  {
    msg_.gas = std::move(arg);
    return Init_RRCCommand_brake(msg_);
  }

private:
  ::godot_interfaces::msg::RRCCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::godot_interfaces::msg::RRCCommand>()
{
  return godot_interfaces::msg::builder::Init_RRCCommand_gas();
}

}  // namespace godot_interfaces

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__BUILDER_HPP_
