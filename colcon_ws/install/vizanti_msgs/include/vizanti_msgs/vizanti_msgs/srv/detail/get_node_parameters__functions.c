// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vizanti_msgs:srv/GetNodeParameters.idl
// generated code does not contain a copyright notice
#include "vizanti_msgs/srv/detail/get_node_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `node`
#include "rosidl_runtime_c/string_functions.h"

bool
vizanti_msgs__srv__GetNodeParameters_Request__init(vizanti_msgs__srv__GetNodeParameters_Request * msg)
{
  if (!msg) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__init(&msg->node)) {
    vizanti_msgs__srv__GetNodeParameters_Request__fini(msg);
    return false;
  }
  return true;
}

void
vizanti_msgs__srv__GetNodeParameters_Request__fini(vizanti_msgs__srv__GetNodeParameters_Request * msg)
{
  if (!msg) {
    return;
  }
  // node
  rosidl_runtime_c__String__fini(&msg->node);
}

bool
vizanti_msgs__srv__GetNodeParameters_Request__are_equal(const vizanti_msgs__srv__GetNodeParameters_Request * lhs, const vizanti_msgs__srv__GetNodeParameters_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  return true;
}

bool
vizanti_msgs__srv__GetNodeParameters_Request__copy(
  const vizanti_msgs__srv__GetNodeParameters_Request * input,
  vizanti_msgs__srv__GetNodeParameters_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // node
  if (!rosidl_runtime_c__String__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  return true;
}

vizanti_msgs__srv__GetNodeParameters_Request *
vizanti_msgs__srv__GetNodeParameters_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Request * msg = (vizanti_msgs__srv__GetNodeParameters_Request *)allocator.allocate(sizeof(vizanti_msgs__srv__GetNodeParameters_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_msgs__srv__GetNodeParameters_Request));
  bool success = vizanti_msgs__srv__GetNodeParameters_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_msgs__srv__GetNodeParameters_Request__destroy(vizanti_msgs__srv__GetNodeParameters_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_msgs__srv__GetNodeParameters_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__init(vizanti_msgs__srv__GetNodeParameters_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Request * data = NULL;

  if (size) {
    data = (vizanti_msgs__srv__GetNodeParameters_Request *)allocator.zero_allocate(size, sizeof(vizanti_msgs__srv__GetNodeParameters_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_msgs__srv__GetNodeParameters_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_msgs__srv__GetNodeParameters_Request__fini(&data[i - 1]);
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
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__fini(vizanti_msgs__srv__GetNodeParameters_Request__Sequence * array)
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
      vizanti_msgs__srv__GetNodeParameters_Request__fini(&array->data[i]);
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

vizanti_msgs__srv__GetNodeParameters_Request__Sequence *
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Request__Sequence * array = (vizanti_msgs__srv__GetNodeParameters_Request__Sequence *)allocator.allocate(sizeof(vizanti_msgs__srv__GetNodeParameters_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_msgs__srv__GetNodeParameters_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__destroy(vizanti_msgs__srv__GetNodeParameters_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_msgs__srv__GetNodeParameters_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__are_equal(const vizanti_msgs__srv__GetNodeParameters_Request__Sequence * lhs, const vizanti_msgs__srv__GetNodeParameters_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_msgs__srv__GetNodeParameters_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_msgs__srv__GetNodeParameters_Request__Sequence__copy(
  const vizanti_msgs__srv__GetNodeParameters_Request__Sequence * input,
  vizanti_msgs__srv__GetNodeParameters_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_msgs__srv__GetNodeParameters_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_msgs__srv__GetNodeParameters_Request * data =
      (vizanti_msgs__srv__GetNodeParameters_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_msgs__srv__GetNodeParameters_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_msgs__srv__GetNodeParameters_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_msgs__srv__GetNodeParameters_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `parameters`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vizanti_msgs__srv__GetNodeParameters_Response__init(vizanti_msgs__srv__GetNodeParameters_Response * msg)
{
  if (!msg) {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__init(&msg->parameters)) {
    vizanti_msgs__srv__GetNodeParameters_Response__fini(msg);
    return false;
  }
  return true;
}

void
vizanti_msgs__srv__GetNodeParameters_Response__fini(vizanti_msgs__srv__GetNodeParameters_Response * msg)
{
  if (!msg) {
    return;
  }
  // parameters
  rosidl_runtime_c__String__fini(&msg->parameters);
}

bool
vizanti_msgs__srv__GetNodeParameters_Response__are_equal(const vizanti_msgs__srv__GetNodeParameters_Response * lhs, const vizanti_msgs__srv__GetNodeParameters_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
vizanti_msgs__srv__GetNodeParameters_Response__copy(
  const vizanti_msgs__srv__GetNodeParameters_Response * input,
  vizanti_msgs__srv__GetNodeParameters_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

vizanti_msgs__srv__GetNodeParameters_Response *
vizanti_msgs__srv__GetNodeParameters_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Response * msg = (vizanti_msgs__srv__GetNodeParameters_Response *)allocator.allocate(sizeof(vizanti_msgs__srv__GetNodeParameters_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vizanti_msgs__srv__GetNodeParameters_Response));
  bool success = vizanti_msgs__srv__GetNodeParameters_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vizanti_msgs__srv__GetNodeParameters_Response__destroy(vizanti_msgs__srv__GetNodeParameters_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vizanti_msgs__srv__GetNodeParameters_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__init(vizanti_msgs__srv__GetNodeParameters_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Response * data = NULL;

  if (size) {
    data = (vizanti_msgs__srv__GetNodeParameters_Response *)allocator.zero_allocate(size, sizeof(vizanti_msgs__srv__GetNodeParameters_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vizanti_msgs__srv__GetNodeParameters_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vizanti_msgs__srv__GetNodeParameters_Response__fini(&data[i - 1]);
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
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__fini(vizanti_msgs__srv__GetNodeParameters_Response__Sequence * array)
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
      vizanti_msgs__srv__GetNodeParameters_Response__fini(&array->data[i]);
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

vizanti_msgs__srv__GetNodeParameters_Response__Sequence *
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vizanti_msgs__srv__GetNodeParameters_Response__Sequence * array = (vizanti_msgs__srv__GetNodeParameters_Response__Sequence *)allocator.allocate(sizeof(vizanti_msgs__srv__GetNodeParameters_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vizanti_msgs__srv__GetNodeParameters_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__destroy(vizanti_msgs__srv__GetNodeParameters_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vizanti_msgs__srv__GetNodeParameters_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__are_equal(const vizanti_msgs__srv__GetNodeParameters_Response__Sequence * lhs, const vizanti_msgs__srv__GetNodeParameters_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vizanti_msgs__srv__GetNodeParameters_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vizanti_msgs__srv__GetNodeParameters_Response__Sequence__copy(
  const vizanti_msgs__srv__GetNodeParameters_Response__Sequence * input,
  vizanti_msgs__srv__GetNodeParameters_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vizanti_msgs__srv__GetNodeParameters_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vizanti_msgs__srv__GetNodeParameters_Response * data =
      (vizanti_msgs__srv__GetNodeParameters_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vizanti_msgs__srv__GetNodeParameters_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vizanti_msgs__srv__GetNodeParameters_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vizanti_msgs__srv__GetNodeParameters_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
