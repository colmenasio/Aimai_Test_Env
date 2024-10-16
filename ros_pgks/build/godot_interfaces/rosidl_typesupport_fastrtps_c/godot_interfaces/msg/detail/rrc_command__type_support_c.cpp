// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice
#include "godot_interfaces/msg/detail/rrc_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "godot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "godot_interfaces/msg/detail/rrc_command__struct.h"
#include "godot_interfaces/msg/detail/rrc_command__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RRCCommand__ros_msg_type = godot_interfaces__msg__RRCCommand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_godot_interfaces__msg__RRCCommand(
  const godot_interfaces__msg__RRCCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gas
  {
    cdr << ros_message->gas;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: steer
  {
    cdr << ros_message->steer;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_deserialize_godot_interfaces__msg__RRCCommand(
  eprosima::fastcdr::Cdr & cdr,
  godot_interfaces__msg__RRCCommand * ros_message)
{
  // Field name: gas
  {
    cdr >> ros_message->gas;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: steer
  {
    cdr >> ros_message->steer;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_godot_interfaces__msg__RRCCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRCCommand__ros_msg_type * ros_message = static_cast<const _RRCCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gas
  {
    size_t item_size = sizeof(ros_message->gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steer
  {
    size_t item_size = sizeof(ros_message->steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_godot_interfaces__msg__RRCCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: gas
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = godot_interfaces__msg__RRCCommand;
    is_plain =
      (
      offsetof(DataType, steer) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_key_godot_interfaces__msg__RRCCommand(
  const godot_interfaces__msg__RRCCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gas
  {
    cdr << ros_message->gas;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: steer
  {
    cdr << ros_message->steer;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_key_godot_interfaces__msg__RRCCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRCCommand__ros_msg_type * ros_message = static_cast<const _RRCCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gas
  {
    size_t item_size = sizeof(ros_message->gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: steer
  {
    size_t item_size = sizeof(ros_message->steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_key_godot_interfaces__msg__RRCCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: gas
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: brake
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: steer
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = godot_interfaces__msg__RRCCommand;
    is_plain =
      (
      offsetof(DataType, steer) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RRCCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const godot_interfaces__msg__RRCCommand * ros_message = static_cast<const godot_interfaces__msg__RRCCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_godot_interfaces__msg__RRCCommand(ros_message, cdr);
}

static bool _RRCCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  godot_interfaces__msg__RRCCommand * ros_message = static_cast<godot_interfaces__msg__RRCCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_godot_interfaces__msg__RRCCommand(cdr, ros_message);
}

static uint32_t _RRCCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_godot_interfaces__msg__RRCCommand(
      untyped_ros_message, 0));
}

static size_t _RRCCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_godot_interfaces__msg__RRCCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRCCommand = {
  "godot_interfaces::msg",
  "RRCCommand",
  _RRCCommand__cdr_serialize,
  _RRCCommand__cdr_deserialize,
  _RRCCommand__get_serialized_size,
  _RRCCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RRCCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRCCommand,
  get_message_typesupport_handle_function,
  &godot_interfaces__msg__RRCCommand__get_type_hash,
  &godot_interfaces__msg__RRCCommand__get_type_description,
  &godot_interfaces__msg__RRCCommand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, godot_interfaces, msg, RRCCommand)() {
  return &_RRCCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
