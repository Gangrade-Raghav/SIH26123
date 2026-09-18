# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/DeadlockEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeadlockEvent(type):
    """Metaclass of message 'DeadlockEvent'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('amr_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amr_fleet_msgs.msg.DeadlockEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__deadlock_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__deadlock_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__deadlock_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__deadlock_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__deadlock_event

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeadlockEvent(metaclass=Metaclass_DeadlockEvent):
    """Message class 'DeadlockEvent'."""

    __slots__ = [
        '_header',
        '_cycle_robot_ids',
        '_root_cause',
        '_persistence_duration_sec',
        '_recovery_action',
        '_recovery_success',
        '_recovery_duration_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cycle_robot_ids': 'sequence<string>',
        'root_cause': 'string',
        'persistence_duration_sec': 'double',
        'recovery_action': 'string',
        'recovery_success': 'boolean',
        'recovery_duration_sec': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cycle_robot_ids = kwargs.get('cycle_robot_ids', [])
        self.root_cause = kwargs.get('root_cause', str())
        self.persistence_duration_sec = kwargs.get('persistence_duration_sec', float())
        self.recovery_action = kwargs.get('recovery_action', str())
        self.recovery_success = kwargs.get('recovery_success', bool())
        self.recovery_duration_sec = kwargs.get('recovery_duration_sec', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.cycle_robot_ids != other.cycle_robot_ids:
            return False
        if self.root_cause != other.root_cause:
            return False
        if self.persistence_duration_sec != other.persistence_duration_sec:
            return False
        if self.recovery_action != other.recovery_action:
            return False
        if self.recovery_success != other.recovery_success:
            return False
        if self.recovery_duration_sec != other.recovery_duration_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def cycle_robot_ids(self):
        """Message field 'cycle_robot_ids'."""
        return self._cycle_robot_ids

    @cycle_robot_ids.setter
    def cycle_robot_ids(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'cycle_robot_ids' field must be a set or sequence and each value of type 'str'"
        self._cycle_robot_ids = value

    @builtins.property
    def root_cause(self):
        """Message field 'root_cause'."""
        return self._root_cause

    @root_cause.setter
    def root_cause(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'root_cause' field must be of type 'str'"
        self._root_cause = value

    @builtins.property
    def persistence_duration_sec(self):
        """Message field 'persistence_duration_sec'."""
        return self._persistence_duration_sec

    @persistence_duration_sec.setter
    def persistence_duration_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'persistence_duration_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'persistence_duration_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._persistence_duration_sec = value

    @builtins.property
    def recovery_action(self):
        """Message field 'recovery_action'."""
        return self._recovery_action

    @recovery_action.setter
    def recovery_action(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'recovery_action' field must be of type 'str'"
        self._recovery_action = value

    @builtins.property
    def recovery_success(self):
        """Message field 'recovery_success'."""
        return self._recovery_success

    @recovery_success.setter
    def recovery_success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'recovery_success' field must be of type 'bool'"
        self._recovery_success = value

    @builtins.property
    def recovery_duration_sec(self):
        """Message field 'recovery_duration_sec'."""
        return self._recovery_duration_sec

    @recovery_duration_sec.setter
    def recovery_duration_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'recovery_duration_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'recovery_duration_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._recovery_duration_sec = value
