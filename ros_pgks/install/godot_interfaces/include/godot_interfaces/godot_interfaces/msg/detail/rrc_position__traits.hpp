// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_position.hpp"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__TRAITS_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "godot_interfaces/msg/detail/rrc_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace godot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RRCPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: xpos
  {
    out << "xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.xpos, out);
    out << ", ";
  }

  // member: zpos
  {
    out << "zpos: ";
    rosidl_generator_traits::value_to_yaml(msg.zpos, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRCPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.xpos, out);
    out << "\n";
  }

  // member: zpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zpos: ";
    rosidl_generator_traits::value_to_yaml(msg.zpos, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRCPosition & msg, bool use_flow_style = false)
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
  const godot_interfaces::msg::RRCPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  godot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use godot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const godot_interfaces::msg::RRCPosition & msg)
{
  return godot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<godot_interfaces::msg::RRCPosition>()
{
  return "godot_interfaces::msg::RRCPosition";
}

template<>
inline const char * name<godot_interfaces::msg::RRCPosition>()
{
  return "godot_interfaces/msg/RRCPosition";
}

template<>
struct has_fixed_size<godot_interfaces::msg::RRCPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<godot_interfaces::msg::RRCPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<godot_interfaces::msg::RRCPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__TRAITS_HPP_
