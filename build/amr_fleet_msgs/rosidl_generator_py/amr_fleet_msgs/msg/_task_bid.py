# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/TaskBid.idl
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


class Metaclass_TaskBid(type):
    """Metaclass of message 'TaskBid'."""

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
                'amr_fleet_msgs.msg.TaskBid')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_bid
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_bid
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_bid
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_bid
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_bid

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


class TaskBid(metaclass=Metaclass_TaskBid):
    """Message class 'TaskBid'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_task_id',
        '_bid_value',
        '_path_cost',
        '_allocation_epoch',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'task_id': 'string',
        'bid_value': 'double',
        'path_cost': 'double',
        'allocation_epoch': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.task_id = kwargs.get('task_id', str())
        self.bid_value = kwargs.get('bid_value', float())
        self.path_cost = kwargs.get('path_cost', float())
        self.allocation_epoch = kwargs.get('allocation_epoch', int())

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
        if self.task_id != other.task_id:
            return False
        if self.bid_value != other.bid_value:
            return False
        if self.path_cost != other.path_cost:
            return False
        if self.allocation_epoch != other.allocation_epoch:
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
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value

    @builtins.property
    def bid_value(self):
        """Message field 'bid_value'."""
        return self._bid_value

    @bid_value.setter
    def bid_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bid_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bid_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bid_value = value

    @builtins.property
    def path_cost(self):
        """Message field 'path_cost'."""
        return self._path_cost

    @path_cost.setter
    def path_cost(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'path_cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_cost = value

    @builtins.property
    def allocation_epoch(self):
        """Message field 'allocation_epoch'."""
        return self._allocation_epoch

    @allocation_epoch.setter
    def allocation_epoch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'allocation_epoch' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'allocation_epoch' field must be an unsigned integer in [0, 18446744073709551615]"
        self._allocation_epoch = value
