// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/TaskDefinition.idl
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
#include "amr_fleet_msgs/msg/detail/task_definition__struct.h"
#include "amr_fleet_msgs/msg/detail/task_definition__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__task_definition__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("amr_fleet_msgs.msg._task_definition.TaskDefinition", full_classname_dest, 50) == 0);
  }
  amr_fleet_msgs__msg__TaskDefinition * ros_message = _ros_message;
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
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // pickup_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pickup_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->pickup_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dropoff_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "dropoff_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->dropoff_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->priority = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // created_at
    PyObject * field = PyObject_GetAttrString(_pymsg, "created_at");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->created_at)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // deadline
    PyObject * field = PyObject_GetAttrString(_pymsg, "deadline");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->deadline)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // assigned_robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "assigned_robot_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->assigned_robot_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // requested_robot
    PyObject * field = PyObject_GetAttrString(_pymsg, "requested_robot");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->requested_robot, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__task_definition__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TaskDefinition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._task_definition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TaskDefinition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__TaskDefinition * ros_message = (amr_fleet_msgs__msg__TaskDefinition *)raw_ros_message;
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
  {  // task_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_id.data,
      strlen(ros_message->task_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pickup_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->pickup_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pickup_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dropoff_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->dropoff_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dropoff_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // created_at
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->created_at);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "created_at", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deadline
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->deadline);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "deadline", field);
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
  {  // assigned_robot_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->assigned_robot_id.data,
      strlen(ros_message->assigned_robot_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "assigned_robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // requested_robot
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->requested_robot.data,
      strlen(ros_message->requested_robot.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "requested_robot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
