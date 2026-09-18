// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:msg/CommunicationProfile.idl
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
#include "amr_fleet_msgs/msg/detail/communication_profile__struct.h"
#include "amr_fleet_msgs/msg/detail/communication_profile__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__msg__communication_profile__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("amr_fleet_msgs.msg._communication_profile.CommunicationProfile", full_classname_dest, 62) == 0);
  }
  amr_fleet_msgs__msg__CommunicationProfile * ros_message = _ros_message;
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
  {  // enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // latency_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "latency_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latency_ms = PyFloat_AS_DOUBLE(field);
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
  {  // loss_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "loss_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loss_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // burst_loss_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "burst_loss_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->burst_loss_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outage_duration_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "outage_duration_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outage_duration_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // seed
    PyObject * field = PyObject_GetAttrString(_pymsg, "seed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // isolated_robots
    PyObject * field = PyObject_GetAttrString(_pymsg, "isolated_robots");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'isolated_robots'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->isolated_robots), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->isolated_robots.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__msg__communication_profile__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CommunicationProfile */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.msg._communication_profile");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CommunicationProfile");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__msg__CommunicationProfile * ros_message = (amr_fleet_msgs__msg__CommunicationProfile *)raw_ros_message;
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
  {  // enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latency_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latency_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latency_ms", field);
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
  {  // loss_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loss_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loss_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // burst_loss_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->burst_loss_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "burst_loss_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outage_duration_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outage_duration_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outage_duration_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isolated_robots
    PyObject * field = NULL;
    size_t size = ros_message->isolated_robots.size;
    rosidl_runtime_c__String * src = ros_message->isolated_robots.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "isolated_robots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
