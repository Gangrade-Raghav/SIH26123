// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
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
#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__struct.h"
#include "amr_fleet_msgs/msg/detail/aisle_blockage_event__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__aisle_blockage_event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("amr_fleet_msgs.msg._aisle_blockage_event.AisleBlockageEvent", full_classname_dest, 59) == 0);
  }
  amr_fleet_msgs__msg__AisleBlockageEvent * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // blockage_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "blockage_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->blockage_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // min_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__aisle_blockage_event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AisleBlockageEvent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._aisle_blockage_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AisleBlockageEvent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__AisleBlockageEvent * ros_message = (amr_fleet_msgs__msg__AisleBlockageEvent *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blockage_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->blockage_id.data,
      strlen(ros_message->blockage_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "blockage_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
