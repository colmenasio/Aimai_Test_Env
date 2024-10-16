// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_command.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__TRAITS_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "godot_interfaces/msg/detail/rrc_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace godot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RRCCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: gas
  {
    out << "gas: ";
    rosidl_generator_traits::value_to_yaml(msg.gas, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRCCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gas: ";
    rosidl_generator_traits::value_to_yaml(msg.gas, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRCCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace godot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use godot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const godot_interfaces::msg::RRCCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  godot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const godot_interfaces::msg::RRCCommand & msg)
{
  return godot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<godot_interfaces::msg::RRCCommand>()
{
  return "godot_interfaces::msg::RRCCommand";
}

template<>
inline const char * name<godot_interfaces::msg::RRCCommand>()
{
  return "godot_interfaces/msg/RRCCommand";
}

template<>
struct has_fixed_size<godot_interfaces::msg::RRCCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<godot_interfaces::msg::RRCCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<godot_interfaces::msg::RRCCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__TRAITS_HPP_
