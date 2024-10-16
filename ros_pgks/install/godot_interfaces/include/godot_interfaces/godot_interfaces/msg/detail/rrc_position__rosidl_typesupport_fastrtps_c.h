// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice
#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "godot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "godot_interfaces/msg/detail/rrc_position__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_godot_interfaces__msg__RRCPosition(
  const godot_interfaces__msg__RRCPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_deserialize_godot_interfaces__msg__RRCPosition(
  eprosima::fastcdr::Cdr &,
  godot_interfaces__msg__RRCPosition * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_godot_interfaces__msg__RRCPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_godot_interfaces__msg__RRCPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_key_godot_interfaces__msg__RRCPosition(
  const godot_interfaces__msg__RRCPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_key_godot_interfaces__msg__RRCPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_key_godot_interfaces__msg__RRCPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, godot_interfaces, msg, RRCPosition)();

#ifdef __cplusplus
}
#endif

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
