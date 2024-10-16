// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "godot_interfaces/msg/rrc_position.h"


#ifndef GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_H_
#define GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RRCPosition in the package godot_interfaces.
typedef struct godot_interfaces__msg__RRCPosition
{
  double xpos;
  double zpos;
  /// Counter-clockwise horizontal rotation with origin in the z-axis in radians
  double angle;
} godot_interfaces__msg__RRCPosition;

// Struct for a sequence of godot_interfaces__msg__RRCPosition.
typedef struct godot_interfaces__msg__RRCPosition__Sequence
{
  godot_interfaces__msg__RRCPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} godot_interfaces__msg__RRCPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GODOT_INTERFACES__MSG__DETAIL__RRC_POSITION__STRUCT_H_
