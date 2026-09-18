# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/FleetMetrics.idl
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


class Metaclass_FleetMetrics(type):
    """Metaclass of message 'FleetMetrics'."""

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
                'amr_fleet_msgs.msg.FleetMetrics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fleet_metrics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fleet_metrics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fleet_metrics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fleet_metrics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fleet_metrics

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


class FleetMetrics(metaclass=Metaclass_FleetMetrics):
    """Message class 'FleetMetrics'."""

    __slots__ = [
        '_header',
        '_active_robots',
        '_completed_tasks',
        '_throughput',
        '_p50_planning_latency_ms',
        '_p95_planning_latency_ms',
        '_p99_planning_latency_ms',
        '_total_network_bytes',
        '_deadlock_count',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'active_robots': 'uint32',
        'completed_tasks': 'uint32',
        'throughput': 'double',
        'p50_planning_latency_ms': 'double',
        'p95_planning_latency_ms': 'double',
        'p99_planning_latency_ms': 'double',
        'total_network_bytes': 'uint64',
        'deadlock_count': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.active_robots = kwargs.get('active_robots', int())
        self.completed_tasks = kwargs.get('completed_tasks', int())
        self.throughput = kwargs.get('throughput', float())
        self.p50_planning_latency_ms = kwargs.get('p50_planning_latency_ms', float())
        self.p95_planning_latency_ms = kwargs.get('p95_planning_latency_ms', float())
        self.p99_planning_latency_ms = kwargs.get('p99_planning_latency_ms', float())
        self.total_network_bytes = kwargs.get('total_network_bytes', int())
        self.deadlock_count = kwargs.get('deadlock_count', int())

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
        if self.active_robots != other.active_robots:
            return False
        if self.completed_tasks != other.completed_tasks:
            return False
        if self.throughput != other.throughput:
            return False
        if self.p50_planning_latency_ms != other.p50_planning_latency_ms:
            return False
        if self.p95_planning_latency_ms != other.p95_planning_latency_ms:
            return False
        if self.p99_planning_latency_ms != other.p99_planning_latency_ms:
            return False
        if self.total_network_bytes != other.total_network_bytes:
            return False
        if self.deadlock_count != other.deadlock_count:
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
    def active_robots(self):
        """Message field 'active_robots'."""
        return self._active_robots

    @active_robots.setter
    def active_robots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'active_robots' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'active_robots' field must be an unsigned integer in [0, 4294967295]"
        self._active_robots = value

    @builtins.property
    def completed_tasks(self):
        """Message field 'completed_tasks'."""
        return self._completed_tasks

    @completed_tasks.setter
    def completed_tasks(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'completed_tasks' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'completed_tasks' field must be an unsigned integer in [0, 4294967295]"
        self._completed_tasks = value

    @builtins.property
    def throughput(self):
        """Message field 'throughput'."""
        return self._throughput

    @throughput.setter
    def throughput(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throughput' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throughput' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throughput = value

    @builtins.property
    def p50_planning_latency_ms(self):
        """Message field 'p50_planning_latency_ms'."""
        return self._p50_planning_latency_ms

    @p50_planning_latency_ms.setter
    def p50_planning_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'p50_planning_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p50_planning_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p50_planning_latency_ms = value

    @builtins.property
    def p95_planning_latency_ms(self):
        """Message field 'p95_planning_latency_ms'."""
        return self._p95_planning_latency_ms

    @p95_planning_latency_ms.setter
    def p95_planning_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'p95_planning_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p95_planning_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p95_planning_latency_ms = value

    @builtins.property
    def p99_planning_latency_ms(self):
        """Message field 'p99_planning_latency_ms'."""
        return self._p99_planning_latency_ms

    @p99_planning_latency_ms.setter
    def p99_planning_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'p99_planning_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p99_planning_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p99_planning_latency_ms = value

    @builtins.property
    def total_network_bytes(self):
        """Message field 'total_network_bytes'."""
        return self._total_network_bytes

    @total_network_bytes.setter
    def total_network_bytes(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_network_bytes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'total_network_bytes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._total_network_bytes = value

    @builtins.property
    def deadlock_count(self):
        """Message field 'deadlock_count'."""
        return self._deadlock_count

    @deadlock_count.setter
    def deadlock_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'deadlock_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'deadlock_count' field must be an unsigned integer in [0, 4294967295]"
        self._deadlock_count = value
