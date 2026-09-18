# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/AisleBlockageEvent.idl
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


class Metaclass_AisleBlockageEvent(type):
    """Metaclass of message 'AisleBlockageEvent'."""

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
                'amr_fleet_msgs.msg.AisleBlockageEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aisle_blockage_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aisle_blockage_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aisle_blockage_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aisle_blockage_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aisle_blockage_event

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class AisleBlockageEvent(metaclass=Metaclass_AisleBlockageEvent):
    """Message class 'AisleBlockageEvent'."""

    __slots__ = [
        '_header',
        '_blockage_id',
        '_is_blocked',
        '_min_x',
        '_max_x',
        '_min_y',
        '_max_y',
        '_timestamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'blockage_id': 'string',
        'is_blocked': 'boolean',
        'min_x': 'double',
        'max_x': 'double',
        'min_y': 'double',
        'max_y': 'double',
        'timestamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.blockage_id = kwargs.get('blockage_id', str())
        self.is_blocked = kwargs.get('is_blocked', bool())
        self.min_x = kwargs.get('min_x', float())
        self.max_x = kwargs.get('max_x', float())
        self.min_y = kwargs.get('min_y', float())
        self.max_y = kwargs.get('max_y', float())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())

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
        if self.blockage_id != other.blockage_id:
            return False
        if self.is_blocked != other.is_blocked:
            return False
        if self.min_x != other.min_x:
            return False
        if self.max_x != other.max_x:
            return False
        if self.min_y != other.min_y:
            return False
        if self.max_y != other.max_y:
            return False
        if self.timestamp != other.timestamp:
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
    def blockage_id(self):
        """Message field 'blockage_id'."""
        return self._blockage_id

    @blockage_id.setter
    def blockage_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'blockage_id' field must be of type 'str'"
        self._blockage_id = value

    @builtins.property
    def is_blocked(self):
        """Message field 'is_blocked'."""
        return self._is_blocked

    @is_blocked.setter
    def is_blocked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_blocked' field must be of type 'bool'"
        self._is_blocked = value

    @builtins.property
    def min_x(self):
        """Message field 'min_x'."""
        return self._min_x

    @min_x.setter
    def min_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_x = value

    @builtins.property
    def max_x(self):
        """Message field 'max_x'."""
        return self._max_x

    @max_x.setter
    def max_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_x = value

    @builtins.property
    def min_y(self):
        """Message field 'min_y'."""
        return self._min_y

    @min_y.setter
    def min_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_y = value

    @builtins.property
    def max_y(self):
        """Message field 'max_y'."""
        return self._max_y

    @max_y.setter
    def max_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_y = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value
