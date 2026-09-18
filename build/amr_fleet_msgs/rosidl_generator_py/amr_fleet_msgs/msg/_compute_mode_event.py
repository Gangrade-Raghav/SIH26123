# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/ComputeModeEvent.idl
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


class Metaclass_ComputeModeEvent(type):
    """Metaclass of message 'ComputeModeEvent'."""

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
                'amr_fleet_msgs.msg.ComputeModeEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__compute_mode_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__compute_mode_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__compute_mode_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__compute_mode_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__compute_mode_event

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


class ComputeModeEvent(metaclass=Metaclass_ComputeModeEvent):
    """Message class 'ComputeModeEvent'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_previous_mode',
        '_current_mode',
        '_trigger_signal',
        '_trigger_value',
        '_threshold_value',
        '_reason',
        '_dwell_time_sec',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'previous_mode': 'string',
        'current_mode': 'string',
        'trigger_signal': 'string',
        'trigger_value': 'double',
        'threshold_value': 'double',
        'reason': 'string',
        'dwell_time_sec': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.robot_id = kwargs.get('robot_id', str())
        self.previous_mode = kwargs.get('previous_mode', str())
        self.current_mode = kwargs.get('current_mode', str())
        self.trigger_signal = kwargs.get('trigger_signal', str())
        self.trigger_value = kwargs.get('trigger_value', float())
        self.threshold_value = kwargs.get('threshold_value', float())
        self.reason = kwargs.get('reason', str())
        self.dwell_time_sec = kwargs.get('dwell_time_sec', float())

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
        if self.robot_id != other.robot_id:
            return False
        if self.previous_mode != other.previous_mode:
            return False
        if self.current_mode != other.current_mode:
            return False
        if self.trigger_signal != other.trigger_signal:
            return False
        if self.trigger_value != other.trigger_value:
            return False
        if self.threshold_value != other.threshold_value:
            return False
        if self.reason != other.reason:
            return False
        if self.dwell_time_sec != other.dwell_time_sec:
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
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot_id' field must be of type 'str'"
        self._robot_id = value

    @builtins.property
    def previous_mode(self):
        """Message field 'previous_mode'."""
        return self._previous_mode

    @previous_mode.setter
    def previous_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'previous_mode' field must be of type 'str'"
        self._previous_mode = value

    @builtins.property
    def current_mode(self):
        """Message field 'current_mode'."""
        return self._current_mode

    @current_mode.setter
    def current_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_mode' field must be of type 'str'"
        self._current_mode = value

    @builtins.property
    def trigger_signal(self):
        """Message field 'trigger_signal'."""
        return self._trigger_signal

    @trigger_signal.setter
    def trigger_signal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'trigger_signal' field must be of type 'str'"
        self._trigger_signal = value

    @builtins.property
    def trigger_value(self):
        """Message field 'trigger_value'."""
        return self._trigger_value

    @trigger_value.setter
    def trigger_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'trigger_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'trigger_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._trigger_value = value

    @builtins.property
    def threshold_value(self):
        """Message field 'threshold_value'."""
        return self._threshold_value

    @threshold_value.setter
    def threshold_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'threshold_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'threshold_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._threshold_value = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

    @builtins.property
    def dwell_time_sec(self):
        """Message field 'dwell_time_sec'."""
        return self._dwell_time_sec

    @dwell_time_sec.setter
    def dwell_time_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dwell_time_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dwell_time_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dwell_time_sec = value
