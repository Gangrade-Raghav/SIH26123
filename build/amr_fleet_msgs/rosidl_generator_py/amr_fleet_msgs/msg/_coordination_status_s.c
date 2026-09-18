// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/CoordinationStatus.idl
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
#include "amr_fleet_msgs/msg/detail/coordination_status__struct.h"
#include "amr_fleet_msgs/msg/detail/coordination_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__coordination_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("amr_fleet_msgs.msg._coordination_status.CoordinationStatus", full_classname_dest, 58) == 0);
  }
  amr_fleet_msgs__msg__CoordinationStatus * ros_message = _ros_message;
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
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->priority = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_cell_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_cell_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_cell_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_cell_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_cell_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_cell_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_cell_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_cell_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_cell_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_cell_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_cell_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_cell_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // time_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_step = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // waiting_for_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "waiting_for_robot");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->waiting_for_robot, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pose_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pose_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pose_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pose_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__coordination_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CoordinationStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._coordination_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CoordinationStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__CoordinationStatus * ros_message = (amr_fleet_msgs__msg__CoordinationStatus *)raw_ros_message;
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
  {  // priority
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_cell_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_cell_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_cell_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_cell_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_cell_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_cell_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_cell_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_cell_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_cell_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_cell_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_cell_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_cell_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_step
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->time_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waiting_for_robot
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->waiting_for_robot.data,
      strlen(ros_message->waiting_for_robot.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "waiting_for_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pose_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pose_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
