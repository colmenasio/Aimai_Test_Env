// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

#include "godot_interfaces/msg/detail/rrc_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_type_hash_t *
godot_interfaces__msg__RRCCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x18, 0xf0, 0xab, 0x50, 0x1f, 0x60, 0xc2,
      0xe8, 0x98, 0xe2, 0xb1, 0x5f, 0xdb, 0xcc, 0x26,
      0xb8, 0xe8, 0x86, 0xf7, 0xdf, 0x80, 0x27, 0x23,
      0x59, 0x39, 0x31, 0x72, 0xdd, 0x17, 0xfb, 0xa9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char godot_interfaces__msg__RRCCommand__TYPE_NAME[] = "godot_interfaces/msg/RRCCommand";

// Define type names, field names, and default values
static char godot_interfaces__msg__RRCCommand__FIELD_NAME__gas[] = "gas";
static char godot_interfaces__msg__RRCCommand__FIELD_NAME__brake[] = "brake";
static char godot_interfaces__msg__RRCCommand__FIELD_NAME__steer[] = "steer";

static rosidl_runtime_c__type_description__Field godot_interfaces__msg__RRCCommand__FIELDS[] = {
  {
    {godot_interfaces__msg__RRCCommand__FIELD_NAME__gas, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {godot_interfaces__msg__RRCCommand__FIELD_NAME__brake, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {godot_interfaces__msg__RRCCommand__FIELD_NAME__steer, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
godot_interfaces__msg__RRCCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {godot_interfaces__msg__RRCCommand__TYPE_NAME, 31, 31},
      {godot_interfaces__msg__RRCCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 gas\n"
  "float64 brake\n"
  "float64 steer # Counter-clockwise horizontal rotation with origin in the z-axis in radians";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
godot_interfaces__msg__RRCCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {godot_interfaces__msg__RRCCommand__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 116, 116},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
godot_interfaces__msg__RRCCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *godot_interfaces__msg__RRCCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
