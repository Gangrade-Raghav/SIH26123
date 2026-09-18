// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
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
#include "amr_fleet_msgs/msg/detail/communication_metrics__struct.h"
#include "amr_fleet_msgs/msg/detail/communication_metrics__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__communication_metrics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("amr_fleet_msgs.msg._communication_metrics.CommunicationMetrics", full_classname_dest, 62) == 0);
  }
  amr_fleet_msgs__msg__CommunicationMetrics * ros_message = _ros_message;
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
  {  // profile_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "profile_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->profile_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // messages_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "messages_sent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->messages_sent = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // messages_delivered
    PyObject * field = PyObject_GetAttrString(_pymsg, "messages_delivered");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->messages_delivered = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // messages_dropped
    PyObject * field = PyObject_GetAttrString(_pymsg, "messages_dropped");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->messages_dropped = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // packet_loss_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "packet_loss_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->packet_loss_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avg_latency_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "avg_latency_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->avg_latency_ms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p95_latency_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "p95_latency_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p95_latency_ms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // jitter_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "jitter_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->jitter_ms = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // burst_events_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "burst_events_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->burst_events_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // outage_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "outage_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->outage_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stale_messages_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "stale_messages_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stale_messages_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // expired_reservations_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "expired_reservations_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->expired_reservations_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // min_distance_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_distance_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_distance_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->collision_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safety_interventions
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_interventions");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_interventions = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__communication_metrics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommunicationMetrics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._communication_metrics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommunicationMetrics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__CommunicationMetrics * ros_message = (amr_fleet_msgs__msg__CommunicationMetrics *)raw_ros_message;
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
  {  // profile_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->profile_name.data,
      strlen(ros_message->profile_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "profile_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // messages_sent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->messages_sent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "messages_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // messages_delivered
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->messages_delivered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "messages_delivered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // messages_dropped
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->messages_dropped);
    {
      int rc = PyObject_SetAttrString(_pymessage, "messages_dropped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // packet_loss_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->packet_loss_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "packet_loss_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avg_latency_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->avg_latency_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avg_latency_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p95_latency_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p95_latency_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p95_latency_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jitter_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->jitter_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "jitter_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // burst_events_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->burst_events_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "burst_events_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outage_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->outage_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outage_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stale_messages_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stale_messages_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stale_messages_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // expired_reservations_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->expired_reservations_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "expired_reservations_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_distance_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_distance_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_distance_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->collision_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_interventions
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_interventions);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_interventions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
