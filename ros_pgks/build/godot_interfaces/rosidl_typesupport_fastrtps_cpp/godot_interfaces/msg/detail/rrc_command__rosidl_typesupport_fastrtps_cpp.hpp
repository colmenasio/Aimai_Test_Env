// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "godot_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "godot_interfaces/msg/detail/rrc_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace godot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
cdr_serialize(
  const godot_interfaces::msg::RRCCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  godot_interfaces::msg::RRCCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
get_serialized_size(
  const godot_interfaces::msg::RRCCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
max_serialized_size_RRCCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
cdr_serialize_key(
  const godot_interfaces::msg::RRCCommand & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
get_serialized_size_key(
  const godot_interfaces::msg::RRCCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
max_serialized_size_key_RRCCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace godot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_godot_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, godot_interfaces, msg, RRCCommand)();

#ifdef __cplusplus
}
#endif

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
