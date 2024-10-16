// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from godot_interfaces:msg/RRCCommand.idl
// generated code does not contain a copyright notice
#include "godot_interfaces/msg/detail/rrc_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
godot_interfaces__msg__RRCCommand__init(godot_interfaces__msg__RRCCommand * msg)
{
  if (!msg) {
    return false;
  }
  // gas
  // brake
  // steer
  return true;
}

void
godot_interfaces__msg__RRCCommand__fini(godot_interfaces__msg__RRCCommand * msg)
{
  if (!msg) {
    return;
  }
  // gas
  // brake
  // steer
}

bool
godot_interfaces__msg__RRCCommand__are_equal(const godot_interfaces__msg__RRCCommand * lhs, const godot_interfaces__msg__RRCCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gas
  if (lhs->gas != rhs->gas) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // steer
  if (lhs->steer != rhs->steer) {
    return false;
  }
  return true;
}

bool
godot_interfaces__msg__RRCCommand__copy(
  const godot_interfaces__msg__RRCCommand * input,
  godot_interfaces__msg__RRCCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // gas
  output->gas = input->gas;
  // brake
  output->brake = input->brake;
  // steer
  output->steer = input->steer;
  return true;
}

godot_interfaces__msg__RRCCommand *
godot_interfaces__msg__RRCCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godot_interfaces__msg__RRCCommand * msg = (godot_interfaces__msg__RRCCommand *)allocator.allocate(sizeof(godot_interfaces__msg__RRCCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(godot_interfaces__msg__RRCCommand));
  bool success = godot_interfaces__msg__RRCCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
godot_interfaces__msg__RRCCommand__destroy(godot_interfaces__msg__RRCCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    godot_interfaces__msg__RRCCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
godot_interfaces__msg__RRCCommand__Sequence__init(godot_interfaces__msg__RRCCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godot_interfaces__msg__RRCCommand * data = NULL;

  if (size) {
    data = (godot_interfaces__msg__RRCCommand *)allocator.zero_allocate(size, sizeof(godot_interfaces__msg__RRCCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = godot_interfaces__msg__RRCCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        godot_interfaces__msg__RRCCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
godot_interfaces__msg__RRCCommand__Sequence__fini(godot_interfaces__msg__RRCCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      godot_interfaces__msg__RRCCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

godot_interfaces__msg__RRCCommand__Sequence *
godot_interfaces__msg__RRCCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  godot_interfaces__msg__RRCCommand__Sequence * array = (godot_interfaces__msg__RRCCommand__Sequence *)allocator.allocate(sizeof(godot_interfaces__msg__RRCCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = godot_interfaces__msg__RRCCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
godot_interfaces__msg__RRCCommand__Sequence__destroy(godot_interfaces__msg__RRCCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    godot_interfaces__msg__RRCCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
godot_interfaces__msg__RRCCommand__Sequence__are_equal(const godot_interfaces__msg__RRCCommand__Sequence * lhs, const godot_interfaces__msg__RRCCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!godot_interfaces__msg__RRCCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
godot_interfaces__msg__RRCCommand__Sequence__copy(
  const godot_interfaces__msg__RRCCommand__Sequence * input,
  godot_interfaces__msg__RRCCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(godot_interfaces__msg__RRCCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    godot_interfaces__msg__RRCCommand * data =
      (godot_interfaces__msg__RRCCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!godot_interfaces__msg__RRCCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          godot_interfaces__msg__RRCCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!godot_interfaces__msg__RRCCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
