# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/CommunicationProfile.idl
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


class Metaclass_CommunicationProfile(type):
    """Metaclass of message 'CommunicationProfile'."""

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
                'amr_fleet_msgs.msg.CommunicationProfile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__communication_profile
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__communication_profile
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__communication_profile
            cls._TYPE_SUPPORT = module.type_support_msg__msg__communication_profile
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__communication_profile

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


class CommunicationProfile(metaclass=Metaclass_CommunicationProfile):
    """Message class 'CommunicationProfile'."""

    __slots__ = [
        '_header',
        '_profile_name',
        '_enabled',
        '_latency_ms',
        '_jitter_ms',
        '_loss_probability',
        '_burst_loss_probability',
        '_outage_duration_s',
        '_seed',
        '_isolated_robots',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'profile_name': 'string',
        'enabled': 'boolean',
        'latency_ms': 'double',
        'jitter_ms': 'double',
        'loss_probability': 'double',
        'burst_loss_probability': 'double',
        'outage_duration_s': 'double',
        'seed': 'uint32',
        'isolated_robots': 'sequence<string>',
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
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.profile_name = kwargs.get('profile_name', str())
        self.enabled = kwargs.get('enabled', bool())
        self.latency_ms = kwargs.get('latency_ms', float())
        self.jitter_ms = kwargs.get('jitter_ms', float())
        self.loss_probability = kwargs.get('loss_probability', float())
        self.burst_loss_probability = kwargs.get('burst_loss_probability', float())
        self.outage_duration_s = kwargs.get('outage_duration_s', float())
        self.seed = kwargs.get('seed', int())
        self.isolated_robots = kwargs.get('isolated_robots', [])

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
        if self.profile_name != other.profile_name:
            return False
        if self.enabled != other.enabled:
            return False
        if self.latency_ms != other.latency_ms:
            return False
        if self.jitter_ms != other.jitter_ms:
            return False
        if self.loss_probability != other.loss_probability:
            return False
        if self.burst_loss_probability != other.burst_loss_probability:
            return False
        if self.outage_duration_s != other.outage_duration_s:
            return False
        if self.seed != other.seed:
            return False
        if self.isolated_robots != other.isolated_robots:
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
    def profile_name(self):
        """Message field 'profile_name'."""
        return self._profile_name

    @profile_name.setter
    def profile_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'profile_name' field must be of type 'str'"
        self._profile_name = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def latency_ms(self):
        """Message field 'latency_ms'."""
        return self._latency_ms

    @latency_ms.setter
    def latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latency_ms = value

    @builtins.property
    def jitter_ms(self):
        """Message field 'jitter_ms'."""
        return self._jitter_ms

    @jitter_ms.setter
    def jitter_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'jitter_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'jitter_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._jitter_ms = value

    @builtins.property
    def loss_probability(self):
        """Message field 'loss_probability'."""
        return self._loss_probability

    @loss_probability.setter
    def loss_probability(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'loss_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loss_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loss_probability = value

    @builtins.property
    def burst_loss_probability(self):
        """Message field 'burst_loss_probability'."""
        return self._burst_loss_probability

    @burst_loss_probability.setter
    def burst_loss_probability(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'burst_loss_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'burst_loss_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._burst_loss_probability = value

    @builtins.property
    def outage_duration_s(self):
        """Message field 'outage_duration_s'."""
        return self._outage_duration_s

    @outage_duration_s.setter
    def outage_duration_s(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'outage_duration_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'outage_duration_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._outage_duration_s = value

    @builtins.property
    def seed(self):
        """Message field 'seed'."""
        return self._seed

    @seed.setter
    def seed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'seed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'seed' field must be an unsigned integer in [0, 4294967295]"
        self._seed = value

    @builtins.property
    def isolated_robots(self):
        """Message field 'isolated_robots'."""
        return self._isolated_robots

    @isolated_robots.setter
    def isolated_robots(self, value):
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
                "The 'isolated_robots' field must be a set or sequence and each value of type 'str'"
        self._isolated_robots = value
