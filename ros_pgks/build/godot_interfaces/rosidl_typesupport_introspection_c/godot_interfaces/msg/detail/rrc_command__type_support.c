// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "godot_interfaces/msg/detail/rrc_command__rosidl_typesupport_introspection_c.h"
#include "godot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "godot_interfaces/msg/detail/rrc_command__functions.h"
#include "godot_interfaces/msg/detail/rrc_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  godot_interfaces__msg__RRCCommand__init(message_memory);
}

void godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_fini_function(void * message_memory)
{
  godot_interfaces__msg__RRCCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_member_array[3] = {
  {
    "gas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces__msg__RRCCommand, gas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces__msg__RRCCommand, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces__msg__RRCCommand, steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_members = {
  "godot_interfaces__msg",  // message namespace
  "RRCCommand",  // message name
  3,  // number of fields
  sizeof(godot_interfaces__msg__RRCCommand),
  false,  // has_any_key_member_
  godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_member_array,  // message members
  godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_type_support_handle = {
  0,
  &godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_members,
  get_message_typesupport_handle_function,
  &godot_interfaces__msg__RRCCommand__get_type_hash,
  &godot_interfaces__msg__RRCCommand__get_type_description,
  &godot_interfaces__msg__RRCCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_godot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, godot_interfaces, msg, RRCCommand)() {
  if (!godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_type_support_handle.typesupport_identifier) {
    godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &godot_interfaces__msg__RRCCommand__rosidl_typesupport_introspection_c__RRCCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
