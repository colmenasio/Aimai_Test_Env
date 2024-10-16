// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice
#include "godot_interfaces/msg/detail/rrc_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "godot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "godot_interfaces/msg/detail/rrc_position__struct.h"
#include "godot_interfaces/msg/detail/rrc_position__functions.h"
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


using _RRCPosition__ros_msg_type = godot_interfaces__msg__RRCPosition;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_godot_interfaces__msg__RRCPosition(
  const godot_interfaces__msg__RRCPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xpos
  {
    cdr << ros_message->xpos;
  }

  // Field name: zpos
  {
    cdr << ros_message->zpos;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_deserialize_godot_interfaces__msg__RRCPosition(
  eprosima::fastcdr::Cdr & cdr,
  godot_interfaces__msg__RRCPosition * ros_message)
{
  // Field name: xpos
  {
    cdr >> ros_message->xpos;
  }

  // Field name: zpos
  {
    cdr >> ros_message->zpos;
  }

  // Field name: angle
  {
    cdr >> ros_message->angle;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_godot_interfaces__msg__RRCPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRCPosition__ros_msg_type * ros_message = static_cast<const _RRCPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xpos
  {
    size_t item_size = sizeof(ros_message->xpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: zpos
  {
    size_t item_size = sizeof(ros_message->zpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_godot_interfaces__msg__RRCPosition(
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

  // Field name: xpos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: zpos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: angle
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
    using DataType = godot_interfaces__msg__RRCPosition;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
bool cdr_serialize_key_godot_interfaces__msg__RRCPosition(
  const godot_interfaces__msg__RRCPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: xpos
  {
    cdr << ros_message->xpos;
  }

  // Field name: zpos
  {
    cdr << ros_message->zpos;
  }

  // Field name: angle
  {
    cdr << ros_message->angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t get_serialized_size_key_godot_interfaces__msg__RRCPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRCPosition__ros_msg_type * ros_message = static_cast<const _RRCPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: xpos
  {
    size_t item_size = sizeof(ros_message->xpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: zpos
  {
    size_t item_size = sizeof(ros_message->zpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: angle
  {
    size_t item_size = sizeof(ros_message->angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_godot_interfaces
size_t max_serialized_size_key_godot_interfaces__msg__RRCPosition(
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
  // Field name: xpos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: zpos
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: angle
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
    using DataType = godot_interfaces__msg__RRCPosition;
    is_plain =
      (
      offsetof(DataType, angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RRCPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const godot_interfaces__msg__RRCPosition * ros_message = static_cast<const godot_interfaces__msg__RRCPosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_godot_interfaces__msg__RRCPosition(ros_message, cdr);
}

static bool _RRCPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  godot_interfaces__msg__RRCPosition * ros_message = static_cast<godot_interfaces__msg__RRCPosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_godot_interfaces__msg__RRCPosition(cdr, ros_message);
}

static uint32_t _RRCPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_godot_interfaces__msg__RRCPosition(
      untyped_ros_message, 0));
}

static size_t _RRCPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_godot_interfaces__msg__RRCPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRCPosition = {
  "godot_interfaces::msg",
  "RRCPosition",
  _RRCPosition__cdr_serialize,
  _RRCPosition__cdr_deserialize,
  _RRCPosition__get_serialized_size,
  _RRCPosition__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RRCPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRCPosition,
  get_message_typesupport_handle_function,
  &godot_interfaces__msg__RRCPosition__get_type_hash,
  &godot_interfaces__msg__RRCPosition__get_type_description,
  &godot_interfaces__msg__RRCPosition__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, godot_interfaces, msg, RRCPosition)() {
  return &_RRCPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
