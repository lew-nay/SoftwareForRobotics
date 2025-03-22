// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cooing_code_interfaces:srv/TurnRobotOn.idl
// generated code does not contain a copyright notice
#include "cooing_code_interfaces/srv/detail/turn_robot_on__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cooing_code_interfaces__srv__TurnRobotOn_Request__init(cooing_code_interfaces__srv__TurnRobotOn_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Request__fini(cooing_code_interfaces__srv__TurnRobotOn_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Request__are_equal(const cooing_code_interfaces__srv__TurnRobotOn_Request * lhs, const cooing_code_interfaces__srv__TurnRobotOn_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Request__copy(
  const cooing_code_interfaces__srv__TurnRobotOn_Request * input,
  cooing_code_interfaces__srv__TurnRobotOn_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

cooing_code_interfaces__srv__TurnRobotOn_Request *
cooing_code_interfaces__srv__TurnRobotOn_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Request * msg = (cooing_code_interfaces__srv__TurnRobotOn_Request *)allocator.allocate(sizeof(cooing_code_interfaces__srv__TurnRobotOn_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cooing_code_interfaces__srv__TurnRobotOn_Request));
  bool success = cooing_code_interfaces__srv__TurnRobotOn_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Request__destroy(cooing_code_interfaces__srv__TurnRobotOn_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cooing_code_interfaces__srv__TurnRobotOn_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__init(cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Request * data = NULL;

  if (size) {
    data = (cooing_code_interfaces__srv__TurnRobotOn_Request *)allocator.zero_allocate(size, sizeof(cooing_code_interfaces__srv__TurnRobotOn_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cooing_code_interfaces__srv__TurnRobotOn_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cooing_code_interfaces__srv__TurnRobotOn_Request__fini(&data[i - 1]);
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
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__fini(cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * array)
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
      cooing_code_interfaces__srv__TurnRobotOn_Request__fini(&array->data[i]);
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

cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence *
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * array = (cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence *)allocator.allocate(sizeof(cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__destroy(cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__are_equal(const cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * lhs, const cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cooing_code_interfaces__srv__TurnRobotOn_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence__copy(
  const cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * input,
  cooing_code_interfaces__srv__TurnRobotOn_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cooing_code_interfaces__srv__TurnRobotOn_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cooing_code_interfaces__srv__TurnRobotOn_Request * data =
      (cooing_code_interfaces__srv__TurnRobotOn_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cooing_code_interfaces__srv__TurnRobotOn_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cooing_code_interfaces__srv__TurnRobotOn_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cooing_code_interfaces__srv__TurnRobotOn_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cooing_code_interfaces__srv__TurnRobotOn_Response__init(cooing_code_interfaces__srv__TurnRobotOn_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Response__fini(cooing_code_interfaces__srv__TurnRobotOn_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Response__are_equal(const cooing_code_interfaces__srv__TurnRobotOn_Response * lhs, const cooing_code_interfaces__srv__TurnRobotOn_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Response__copy(
  const cooing_code_interfaces__srv__TurnRobotOn_Response * input,
  cooing_code_interfaces__srv__TurnRobotOn_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

cooing_code_interfaces__srv__TurnRobotOn_Response *
cooing_code_interfaces__srv__TurnRobotOn_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Response * msg = (cooing_code_interfaces__srv__TurnRobotOn_Response *)allocator.allocate(sizeof(cooing_code_interfaces__srv__TurnRobotOn_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cooing_code_interfaces__srv__TurnRobotOn_Response));
  bool success = cooing_code_interfaces__srv__TurnRobotOn_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Response__destroy(cooing_code_interfaces__srv__TurnRobotOn_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cooing_code_interfaces__srv__TurnRobotOn_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__init(cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Response * data = NULL;

  if (size) {
    data = (cooing_code_interfaces__srv__TurnRobotOn_Response *)allocator.zero_allocate(size, sizeof(cooing_code_interfaces__srv__TurnRobotOn_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cooing_code_interfaces__srv__TurnRobotOn_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cooing_code_interfaces__srv__TurnRobotOn_Response__fini(&data[i - 1]);
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
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__fini(cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * array)
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
      cooing_code_interfaces__srv__TurnRobotOn_Response__fini(&array->data[i]);
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

cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence *
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * array = (cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence *)allocator.allocate(sizeof(cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__destroy(cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__are_equal(const cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * lhs, const cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cooing_code_interfaces__srv__TurnRobotOn_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence__copy(
  const cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * input,
  cooing_code_interfaces__srv__TurnRobotOn_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cooing_code_interfaces__srv__TurnRobotOn_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cooing_code_interfaces__srv__TurnRobotOn_Response * data =
      (cooing_code_interfaces__srv__TurnRobotOn_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cooing_code_interfaces__srv__TurnRobotOn_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cooing_code_interfaces__srv__TurnRobotOn_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cooing_code_interfaces__srv__TurnRobotOn_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
