// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
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
#include "amr_fleet_msgs/msg/detail/compute_mode_event__struct.h"
#include "amr_fleet_msgs/msg/detail/compute_mode_event__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__compute_mode_event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("amr_fleet_msgs.msg._compute_mode_event.ComputeModeEvent", full_classname_dest, 55) == 0);
  }
  amr_fleet_msgs__msg__ComputeModeEvent * ros_message = _ros_message;
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
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->robot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // previous_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "previous_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->previous_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // current_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_mode");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_mode, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // trigger_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_signal");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->trigger_signal, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // trigger_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "trigger_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trigger_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // threshold_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "threshold_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->threshold_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // dwell_time_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "dwell_time_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dwell_time_sec = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__compute_mode_event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ComputeModeEvent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._compute_mode_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ComputeModeEvent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__ComputeModeEvent * ros_message = (amr_fleet_msgs__msg__ComputeModeEvent *)raw_ros_message;
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
  {  // robot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->robot_id.data,
      strlen(ros_message->robot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // previous_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->previous_mode.data,
      strlen(ros_message->previous_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "previous_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_mode
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_mode.data,
      strlen(ros_message->current_mode.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_signal
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->trigger_signal.data,
      strlen(ros_message->trigger_signal.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trigger_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trigger_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trigger_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // threshold_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->threshold_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "threshold_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dwell_time_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dwell_time_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dwell_time_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
