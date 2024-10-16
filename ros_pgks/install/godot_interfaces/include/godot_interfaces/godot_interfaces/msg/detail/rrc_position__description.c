// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice

#include "godot_interfaces/msg/detail/rrc_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_godot_interfaces
const rosidl_type_hash_t *
godot_interfaces__msg__RRCPosition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0x34, 0x8a, 0xf0, 0xd8, 0xce, 0xb6, 0xff,
      0x4d, 0x90, 0x35, 0x18, 0x98, 0x72, 0x47, 0x64,
      0xfe, 0x47, 0x91, 0x86, 0x06, 0x99, 0xd5, 0xb0,
      0xea, 0xf2, 0x4c, 0xc0, 0x84, 0xd6, 0xe5, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char godot_interfaces__msg__RRCPosition__TYPE_NAME[] = "godot_interfaces/msg/RRCPosition";

// Define type names, field names, and default values
static char godot_interfaces__msg__RRCPosition__FIELD_NAME__xpos[] = "xpos";
static char godot_interfaces__msg__RRCPosition__FIELD_NAME__zpos[] = "zpos";
static char godot_interfaces__msg__RRCPosition__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field godot_interfaces__msg__RRCPosition__FIELDS[] = {
  {
    {godot_interfaces__msg__RRCPosition__FIELD_NAME__xpos, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {godot_interfaces__msg__RRCPosition__FIELD_NAME__zpos, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {godot_interfaces__msg__RRCPosition__FIELD_NAME__angle, 5, 5},
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
godot_interfaces__msg__RRCPosition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {godot_interfaces__msg__RRCPosition__TYPE_NAME, 32, 32},
      {godot_interfaces__msg__RRCPosition__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 xpos\n"
  "float64 zpos\n"
  "float64 angle # Counter-clockwise horizontal rotation with origin in the z-axis in radians ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
godot_interfaces__msg__RRCPosition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {godot_interfaces__msg__RRCPosition__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 117, 117},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
godot_interfaces__msg__RRCPosition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *godot_interfaces__msg__RRCPosition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
