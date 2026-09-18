// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from amr_fleet_msgs:srv/InjectFault.idl
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
#include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
#include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__srv__inject_fault__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("amr_fleet_msgs.srv._inject_fault.InjectFault_Request", full_classname_dest, 52) == 0);
  }
  amr_fleet_msgs__srv__InjectFault_Request * ros_message = _ros_message;
  {  // fault_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fault_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // duration_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_sec");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration_sec = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__srv__inject_fault__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InjectFault_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.srv._inject_fault");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InjectFault_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__srv__InjectFault_Request * ros_message = (amr_fleet_msgs__srv__InjectFault_Request *)raw_ros_message;
  {  // fault_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fault_type.data,
      strlen(ros_message->fault_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_sec
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__srv__inject_fault__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("amr_fleet_msgs.srv._inject_fault.InjectFault_Response", full_classname_dest, 53) == 0);
  }
  amr_fleet_msgs__srv__InjectFault_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__srv__inject_fault__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InjectFault_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.srv._inject_fault");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InjectFault_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__srv__InjectFault_Response * ros_message = (amr_fleet_msgs__srv__InjectFault_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__struct.h"
// already included above
// #include "amr_fleet_msgs/srv/detail/inject_fault__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool amr_fleet_msgs__srv__inject_fault__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * amr_fleet_msgs__srv__inject_fault__request__convert_to_py(void * raw_ros_message);
bool amr_fleet_msgs__srv__inject_fault__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * amr_fleet_msgs__srv__inject_fault__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool amr_fleet_msgs__srv__inject_fault__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("amr_fleet_msgs.srv._inject_fault.InjectFault_Event", full_classname_dest, 50) == 0);
  }
  amr_fleet_msgs__srv__InjectFault_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!amr_fleet_msgs__srv__InjectFault_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create amr_fleet_msgs__srv__InjectFault_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    amr_fleet_msgs__srv__InjectFault_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!amr_fleet_msgs__srv__inject_fault__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!amr_fleet_msgs__srv__InjectFault_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create amr_fleet_msgs__srv__InjectFault_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    amr_fleet_msgs__srv__InjectFault_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!amr_fleet_msgs__srv__inject_fault__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * amr_fleet_msgs__srv__inject_fault__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InjectFault_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("amr_fleet_msgs.srv._inject_fault");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InjectFault_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  amr_fleet_msgs__srv__InjectFault_Event * ros_message = (amr_fleet_msgs__srv__InjectFault_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    amr_fleet_msgs__srv__InjectFault_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = amr_fleet_msgs__srv__inject_fault__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    amr_fleet_msgs__srv__InjectFault_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = amr_fleet_msgs__srv__inject_fault__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
