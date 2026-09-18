# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/RollingHorizonPlan.idl
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


class Metaclass_RollingHorizonPlan(type):
    """Metaclass of message 'RollingHorizonPlan'."""

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
                'amr_fleet_msgs.msg.RollingHorizonPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rolling_horizon_plan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rolling_horizon_plan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rolling_horizon_plan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rolling_horizon_plan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rolling_horizon_plan

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class RollingHorizonPlan(metaclass=Metaclass_RollingHorizonPlan):
    """Message class 'RollingHorizonPlan'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_assigned_bundle',
        '_current_task_id',
        '_current_phase',
        '_current_goal',
        '_horizon_path',
        '_execution_path',
        '_horizon_steps',
        '_execution_window',
        '_replan_count',
        '_planning_latency_ms',
        '_is_valid',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'assigned_bundle': 'sequence<string>',
        'current_task_id': 'string',
        'current_phase': 'string',
        'current_goal': 'geometry_msgs/Point',
        'horizon_path': 'sequence<geometry_msgs/Point>',
        'execution_path': 'sequence<geometry_msgs/Point>',
        'horizon_steps': 'uint32',
        'execution_window': 'uint32',
        'replan_count': 'uint32',
        'planning_latency_ms': 'double',
        'is_valid': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.assigned_bundle = kwargs.get('assigned_bundle', [])
        self.current_task_id = kwargs.get('current_task_id', str())
        self.current_phase = kwargs.get('current_phase', str())
        from geometry_msgs.msg import Point
        self.current_goal = kwargs.get('current_goal', Point())
        self.horizon_path = kwargs.get('horizon_path', [])
        self.execution_path = kwargs.get('execution_path', [])
        self.horizon_steps = kwargs.get('horizon_steps', int())
        self.execution_window = kwargs.get('execution_window', int())
        self.replan_count = kwargs.get('replan_count', int())
        self.planning_latency_ms = kwargs.get('planning_latency_ms', float())
        self.is_valid = kwargs.get('is_valid', bool())

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
        if self.assigned_bundle != other.assigned_bundle:
            return False
        if self.current_task_id != other.current_task_id:
            return False
        if self.current_phase != other.current_phase:
            return False
        if self.current_goal != other.current_goal:
            return False
        if self.horizon_path != other.horizon_path:
            return False
        if self.execution_path != other.execution_path:
            return False
        if self.horizon_steps != other.horizon_steps:
            return False
        if self.execution_window != other.execution_window:
            return False
        if self.replan_count != other.replan_count:
            return False
        if self.planning_latency_ms != other.planning_latency_ms:
            return False
        if self.is_valid != other.is_valid:
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
    def assigned_bundle(self):
        """Message field 'assigned_bundle'."""
        return self._assigned_bundle

    @assigned_bundle.setter
    def assigned_bundle(self, value):
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
                "The 'assigned_bundle' field must be a set or sequence and each value of type 'str'"
        self._assigned_bundle = value

    @builtins.property
    def current_task_id(self):
        """Message field 'current_task_id'."""
        return self._current_task_id

    @current_task_id.setter
    def current_task_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_task_id' field must be of type 'str'"
        self._current_task_id = value

    @builtins.property
    def current_phase(self):
        """Message field 'current_phase'."""
        return self._current_phase

    @current_phase.setter
    def current_phase(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_phase' field must be of type 'str'"
        self._current_phase = value

    @builtins.property
    def current_goal(self):
        """Message field 'current_goal'."""
        return self._current_goal

    @current_goal.setter
    def current_goal(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'current_goal' field must be a sub message of type 'Point'"
        self._current_goal = value

    @builtins.property
    def horizon_path(self):
        """Message field 'horizon_path'."""
        return self._horizon_path

    @horizon_path.setter
    def horizon_path(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'horizon_path' field must be a set or sequence and each value of type 'Point'"
        self._horizon_path = value

    @builtins.property
    def execution_path(self):
        """Message field 'execution_path'."""
        return self._execution_path

    @execution_path.setter
    def execution_path(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'execution_path' field must be a set or sequence and each value of type 'Point'"
        self._execution_path = value

    @builtins.property
    def horizon_steps(self):
        """Message field 'horizon_steps'."""
        return self._horizon_steps

    @horizon_steps.setter
    def horizon_steps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'horizon_steps' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'horizon_steps' field must be an unsigned integer in [0, 4294967295]"
        self._horizon_steps = value

    @builtins.property
    def execution_window(self):
        """Message field 'execution_window'."""
        return self._execution_window

    @execution_window.setter
    def execution_window(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'execution_window' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'execution_window' field must be an unsigned integer in [0, 4294967295]"
        self._execution_window = value

    @builtins.property
    def replan_count(self):
        """Message field 'replan_count'."""
        return self._replan_count

    @replan_count.setter
    def replan_count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'replan_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'replan_count' field must be an unsigned integer in [0, 4294967295]"
        self._replan_count = value

    @builtins.property
    def planning_latency_ms(self):
        """Message field 'planning_latency_ms'."""
        return self._planning_latency_ms

    @planning_latency_ms.setter
    def planning_latency_ms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'planning_latency_ms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planning_latency_ms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planning_latency_ms = value

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value
