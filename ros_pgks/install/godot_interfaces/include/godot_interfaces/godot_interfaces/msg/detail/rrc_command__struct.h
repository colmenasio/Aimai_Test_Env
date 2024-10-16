// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_command.h"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_H_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RRCCommand in the package godot_interfaces.
typedef struct godot_interfaces__msg__RRCCommand
{
  double gas;
  double brake;
  /// Counter-clockwise horizontal rotation with origin in the z-axis in radians
  double steer;
} godot_interfaces__msg__RRCCommand;

// Struct for a sequence of godot_interfaces__msg__RRCCommand.
typedef struct godot_interfaces__msg__RRCCommand__Sequence
{
  godot_interfaces__msg__RRCCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godot_interfaces__msg__RRCCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_COMMAND__STRUCT_H_
