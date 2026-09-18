# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/CommunicationMetrics.idl
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


class Metaclass_CommunicationMetrics(type):
    """Metaclass of message 'CommunicationMetrics'."""

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
                'amr_fleet_msgs.msg.CommunicationMetrics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__communication_metrics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__communication_metrics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__communication_metrics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__communication_metrics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__communication_metrics

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


class CommunicationMetrics(metaclass=Metaclass_CommunicationMetrics):
    """Message class 'CommunicationMetrics'."""

    __slots__ = [
        '_header',
        '_profile_name',
        '_messages_sent',
        '_messages_delivered',
        '_messages_dropped',
        '_packet_loss_rate',
        '_avg_latency_ms',
        '_p95_latency_ms',
        '_jitter_ms',
        '_burst_events_count',
        '_outage_active',
        '_stale_messages_count',
        '_expired_reservations_count',
        '_min_distance_m',
        '_collision_count',
        '_safety_interventions',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'profile_name': 'string',
        'messages_sent': 'uint64',
        'messages_delivered': 'uint64',
        'messages_dropped': 'uint64',
        'packet_loss_rate': 'double',
        'avg_latency_ms': 'double',
        'p95_latency_ms': 'double',
        'jitter_ms': 'double',
        'burst_events_count': 'uint32',
        'outage_active': 'boolean',
        'stale_messages_count': 'uint32',
        'expired_reservations_count': 'uint32',
        'min_distance_m': 'double',
        'collision_count': 'uint32',
        'safety_interventions': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.profile_name = kwargs.get('profile_name', str())
        self.messages_sent = kwargs.get('messages_sent', int())
        self.messages_delivered = kwargs.get('messages_delivered', int())
        self.messages_dropped = kwargs.get('messages_dropped', int())
        self.packet_loss_rate = kwargs.get('packet_loss_rate', float())
        self.avg_latency_ms = kwargs.get('avg_latency_ms', float())
        self.p95_latency_ms = kwargs.get('p95_latency_ms', float())
        self.jitter_ms = kwargs.get('jitter_ms', float())
        self.burst_events_count = kwargs.get('burst_events_count', int())
        self.outage_active = kwargs.get('outage_active', bool())
        self.stale_messages_count = kwargs.get('stale_messages_count', int())
        self.expired_reservations_count = kwargs.get('expired_reservations_count', int())
        self.min_distance_m = kwargs.get('min_distance_m', float())
        self.collision_count = kwargs.get('collision_count', int())
        self.safety_interventions = kwargs.get('safety_interventions', int())

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
        if self.messages_sent != other.messages_sent:
            return False
        if self.messages_delivered != other.messages_delivered:
            return False
        if self.messages_dropped != other.messages_dropped:
            return False
        if self.packet_loss_rate != other.packet_loss_rate:
            return False
        if self.avg_latency_ms != other.avg_latency_ms:
            return False
        if self.p95_latency_ms != other.p95_latency_ms:
            return False
        if self.jitter_ms != other.jitter_ms:
            return False
        if self.burst_events_count != other.burst_events_count:
            return False
        if self.outage_active != other.outage_active:
            return False
        if self.stale_messages_count != other.stale_messages_count:
            return False
        if self.expired_reservations_count != other.expired_reservations_count:
            return False
        if self.min_distance_m != other.min_distance_m:
            return False
        if self.collision_count != other.collision_count:
            return False
        if self.safety_interventions != other.safety_interventions:
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
    def messages_sent(self):
        """Message field 'messages_sent'."""
        return self._messages_sent

    @messages_sent.setter
    def messages_sent(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'messages_sent' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'messages_sent' field must be an unsigned integer in [0, 18446744073709551615]"
        self._messages_sent = value

    @builtins.property
    def messages_delivered(self):
        """Message field 'messages_delivered'."""
        return self._messages_delivered

    @messages_delivered.setter
    def messages_delivered(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'messages_delivered' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'messages_delivered' field must be an unsigned integer in [0, 18446744073709551615]"
        self._messages_delivered = value

    @builtins.property
    def messages_dropped(self):
        """Message field 'messages_dropped'."""
        return self._messages_dropped

    @messages_dropped.setter
    def messages_dropped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'messages_dropped' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'messages_dropped' field must be an unsigned integer in [0, 18446744073709551615]"
        self._messages_dropped = value

    @builtins.property
    def packet_loss_rate(self):
        """Message field 'packet_loss_rate'."""
        return self._packet_loss_rate

    @packet_loss_rate.setter
    def packet_loss_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'packet_loss_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'packet_loss_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._packet_loss_rate = value

    @builtins.property
    def avg_latency_ms(self):
        """Message field 'avg_latency_ms'."""
        return self._avg_latency_ms

    @avg_latency_ms.setter
    def avg_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'avg_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'avg_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._avg_latency_ms = value

    @builtins.property
    def p95_latency_ms(self):
        """Message field 'p95_latency_ms'."""
        return self._p95_latency_ms

    @p95_latency_ms.setter
    def p95_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'p95_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p95_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p95_latency_ms = value

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
    def burst_events_count(self):
        """Message field 'burst_events_count'."""
        return self._burst_events_count

    @burst_events_count.setter
    def burst_events_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'burst_events_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'burst_events_count' field must be an unsigned integer in [0, 4294967295]"
        self._burst_events_count = value

    @builtins.property
    def outage_active(self):
        """Message field 'outage_active'."""
        return self._outage_active

    @outage_active.setter
    def outage_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'outage_active' field must be of type 'bool'"
        self._outage_active = value

    @builtins.property
    def stale_messages_count(self):
        """Message field 'stale_messages_count'."""
        return self._stale_messages_count

    @stale_messages_count.setter
    def stale_messages_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'stale_messages_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'stale_messages_count' field must be an unsigned integer in [0, 4294967295]"
        self._stale_messages_count = value

    @builtins.property
    def expired_reservations_count(self):
        """Message field 'expired_reservations_count'."""
        return self._expired_reservations_count

    @expired_reservations_count.setter
    def expired_reservations_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'expired_reservations_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'expired_reservations_count' field must be an unsigned integer in [0, 4294967295]"
        self._expired_reservations_count = value

    @builtins.property
    def min_distance_m(self):
        """Message field 'min_distance_m'."""
        return self._min_distance_m

    @min_distance_m.setter
    def min_distance_m(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_distance_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_distance_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_distance_m = value

    @builtins.property
    def collision_count(self):
        """Message field 'collision_count'."""
        return self._collision_count

    @collision_count.setter
    def collision_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'collision_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'collision_count' field must be an unsigned integer in [0, 4294967295]"
        self._collision_count = value

    @builtins.property
    def safety_interventions(self):
        """Message field 'safety_interventions'."""
        return self._safety_interventions

    @safety_interventions.setter
    def safety_interventions(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'safety_interventions' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'safety_interventions' field must be an unsigned integer in [0, 4294967295]"
        self._safety_interventions = value
