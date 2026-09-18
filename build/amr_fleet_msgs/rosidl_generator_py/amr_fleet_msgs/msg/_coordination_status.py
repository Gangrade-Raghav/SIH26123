# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/CoordinationStatus.idl
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


class Metaclass_CoordinationStatus(type):
    """Metaclass of message 'CoordinationStatus'."""

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
                'amr_fleet_msgs.msg.CoordinationStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__coordination_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__coordination_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__coordination_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__coordination_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__coordination_status

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


class CoordinationStatus(metaclass=Metaclass_CoordinationStatus):
    """Message class 'CoordinationStatus'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_priority',
        '_current_cell_x',
        '_current_cell_y',
        '_target_cell_x',
        '_target_cell_y',
        '_time_step',
        '_status',
        '_waiting_for_robot',
        '_pose_x',
        '_pose_y',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'priority': 'double',
        'current_cell_x': 'int32',
        'current_cell_y': 'int32',
        'target_cell_x': 'int32',
        'target_cell_y': 'int32',
        'time_step': 'int32',
        'status': 'string',
        'waiting_for_robot': 'string',
        'pose_x': 'double',
        'pose_y': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.priority = kwargs.get('priority', float())
        self.current_cell_x = kwargs.get('current_cell_x', int())
        self.current_cell_y = kwargs.get('current_cell_y', int())
        self.target_cell_x = kwargs.get('target_cell_x', int())
        self.target_cell_y = kwargs.get('target_cell_y', int())
        self.time_step = kwargs.get('time_step', int())
        self.status = kwargs.get('status', str())
        self.waiting_for_robot = kwargs.get('waiting_for_robot', str())
        self.pose_x = kwargs.get('pose_x', float())
        self.pose_y = kwargs.get('pose_y', float())

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
        if self.priority != other.priority:
            return False
        if self.current_cell_x != other.current_cell_x:
            return False
        if self.current_cell_y != other.current_cell_y:
            return False
        if self.target_cell_x != other.target_cell_x:
            return False
        if self.target_cell_y != other.target_cell_y:
            return False
        if self.time_step != other.time_step:
            return False
        if self.status != other.status:
            return False
        if self.waiting_for_robot != other.waiting_for_robot:
            return False
        if self.pose_x != other.pose_x:
            return False
        if self.pose_y != other.pose_y:
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

    @builtins.property
    def current_cell_x(self):
        """Message field 'current_cell_x'."""
        return self._current_cell_x

    @current_cell_x.setter
    def current_cell_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_cell_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_cell_x' field must be an integer in [-2147483648, 2147483647]"
        self._current_cell_x = value

    @builtins.property
    def current_cell_y(self):
        """Message field 'current_cell_y'."""
        return self._current_cell_y

    @current_cell_y.setter
    def current_cell_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_cell_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_cell_y' field must be an integer in [-2147483648, 2147483647]"
        self._current_cell_y = value

    @builtins.property
    def target_cell_x(self):
        """Message field 'target_cell_x'."""
        return self._target_cell_x

    @target_cell_x.setter
    def target_cell_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_cell_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_cell_x' field must be an integer in [-2147483648, 2147483647]"
        self._target_cell_x = value

    @builtins.property
    def target_cell_y(self):
        """Message field 'target_cell_y'."""
        return self._target_cell_y

    @target_cell_y.setter
    def target_cell_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_cell_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_cell_y' field must be an integer in [-2147483648, 2147483647]"
        self._target_cell_y = value

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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def waiting_for_robot(self):
        """Message field 'waiting_for_robot'."""
        return self._waiting_for_robot

    @waiting_for_robot.setter
    def waiting_for_robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'waiting_for_robot' field must be of type 'str'"
        self._waiting_for_robot = value

    @builtins.property
    def pose_x(self):
        """Message field 'pose_x'."""
        return self._pose_x

    @pose_x.setter
    def pose_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pose_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pose_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pose_x = value

    @builtins.property
    def pose_y(self):
        """Message field 'pose_y'."""
        return self._pose_y

    @pose_y.setter
    def pose_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pose_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pose_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pose_y = value
