// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "godot_interfaces/msg/detail/rrc_command__functions.h"
#include "godot_interfaces/msg/detail/rrc_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace godot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RRCCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) godot_interfaces::msg::RRCCommand(_init);
}

void RRCCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<godot_interfaces::msg::RRCCommand *>(message_memory);
  typed_message->~RRCCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RRCCommand_message_member_array[3] = {
  {
    "gas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces::msg::RRCCommand, gas),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "brake",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces::msg::RRCCommand, brake),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(godot_interfaces::msg::RRCCommand, steer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RRCCommand_message_members = {
  "godot_interfaces::msg",  // message namespace
  "RRCCommand",  // message name
  3,  // number of fields
  sizeof(godot_interfaces::msg::RRCCommand),
  false,  // has_any_key_member_
  RRCCommand_message_member_array,  // message members
  RRCCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RRCCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RRCCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RRCCommand_message_members,
  get_message_typesupport_handle_function,
  &godot_interfaces__msg__RRCCommand__get_type_hash,
  &godot_interfaces__msg__RRCCommand__get_type_description,
  &godot_interfaces__msg__RRCCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace godot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<godot_interfaces::msg::RRCCommand>()
{
  return &::godot_interfaces::msg::rosidl_typesupport_introspection_cpp::RRCCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, godot_interfaces, msg, RRCCommand)() {
  return &::godot_interfaces::msg::rosidl_typesupport_introspection_cpp::RRCCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
