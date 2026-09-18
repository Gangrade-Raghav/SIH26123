# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/SpaceTimeReservation.idl
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


class Metaclass_SpaceTimeReservation(type):
    """Metaclass of message 'SpaceTimeReservation'."""

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
                'amr_fleet_msgs.msg.SpaceTimeReservation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__space_time_reservation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__space_time_reservation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__space_time_reservation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__space_time_reservation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__space_time_reservation

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


class SpaceTimeReservation(metaclass=Metaclass_SpaceTimeReservation):
    """Message class 'SpaceTimeReservation'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_from_x',
        '_from_y',
        '_to_x',
        '_to_y',
        '_time_step',
        '_duration_sec',
        '_is_edge',
        '_priority',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'from_x': 'int32',
        'from_y': 'int32',
        'to_x': 'int32',
        'to_y': 'int32',
        'time_step': 'int32',
        'duration_sec': 'double',
        'is_edge': 'boolean',
        'priority': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.robot_id = kwargs.get('robot_id', str())
        self.from_x = kwargs.get('from_x', int())
        self.from_y = kwargs.get('from_y', int())
        self.to_x = kwargs.get('to_x', int())
        self.to_y = kwargs.get('to_y', int())
        self.time_step = kwargs.get('time_step', int())
        self.duration_sec = kwargs.get('duration_sec', float())
        self.is_edge = kwargs.get('is_edge', bool())
        self.priority = kwargs.get('priority', float())

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
        if self.from_x != other.from_x:
            return False
        if self.from_y != other.from_y:
            return False
        if self.to_x != other.to_x:
            return False
        if self.to_y != other.to_y:
            return False
        if self.time_step != other.time_step:
            return False
        if self.duration_sec != other.duration_sec:
            return False
        if self.is_edge != other.is_edge:
            return False
        if self.priority != other.priority:
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
    def from_x(self):
        """Message field 'from_x'."""
        return self._from_x

    @from_x.setter
    def from_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'from_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'from_x' field must be an integer in [-2147483648, 2147483647]"
        self._from_x = value

    @builtins.property
    def from_y(self):
        """Message field 'from_y'."""
        return self._from_y

    @from_y.setter
    def from_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'from_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'from_y' field must be an integer in [-2147483648, 2147483647]"
        self._from_y = value

    @builtins.property
    def to_x(self):
        """Message field 'to_x'."""
        return self._to_x

    @to_x.setter
    def to_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'to_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'to_x' field must be an integer in [-2147483648, 2147483647]"
        self._to_x = value

    @builtins.property
    def to_y(self):
        """Message field 'to_y'."""
        return self._to_y

    @to_y.setter
    def to_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'to_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'to_y' field must be an integer in [-2147483648, 2147483647]"
        self._to_y = value

    @builtins.property
    def time_step(self):
        """Message field 'time_step'."""
        return self._time_step

    @time_step.setter
    def time_step(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_step' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_step' field must be an integer in [-2147483648, 2147483647]"
        self._time_step = value

    @builtins.property
    def duration_sec(self):
        """Message field 'duration_sec'."""
        return self._duration_sec

    @duration_sec.setter
    def duration_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration_sec' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration_sec' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration_sec = value

    @builtins.property
    def is_edge(self):
        """Message field 'is_edge'."""
        return self._is_edge

    @is_edge.setter
    def is_edge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_edge' field must be of type 'bool'"
        self._is_edge = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'priority' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'priority' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._priority = value
