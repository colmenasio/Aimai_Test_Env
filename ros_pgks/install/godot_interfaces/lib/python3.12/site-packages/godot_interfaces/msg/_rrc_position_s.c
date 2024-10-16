// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from godot_interfaces:msg/RRCPosition.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "godot_interfaces/msg/detail/rrc_position__struct.h"
#include "godot_interfaces/msg/detail/rrc_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool godot_interfaces__msg__rrc_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("godot_interfaces.msg._rrc_position.RRCPosition", full_classname_dest, 46) == 0);
  }
  godot_interfaces__msg__RRCPosition * ros_message = _ros_message;
  {  // xpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "xpos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xpos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // zpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "zpos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->zpos = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * godot_interfaces__msg__rrc_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRCPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("godot_interfaces.msg._rrc_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRCPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  godot_interfaces__msg__RRCPosition * ros_message = (godot_interfaces__msg__RRCPosition *)raw_ros_message;
  {  // xpos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zpos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->zpos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "zpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
