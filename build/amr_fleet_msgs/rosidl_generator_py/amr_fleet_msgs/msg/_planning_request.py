# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/PlanningRequest.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningRequest(type):
    """Metaclass of message 'PlanningRequest'."""

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
                'amr_fleet_msgs.msg.PlanningRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_request

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


class PlanningRequest(metaclass=Metaclass_PlanningRequest):
    """Message class 'PlanningRequest'."""

    __slots__ = [
        '_header',
        '_robot_id',
        '_start_pose',
        '_goal_pose',
        '_horizon_steps',
        '_execution_window',
        '_task_id',
        '_sub_goal_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'robot_id': 'string',
        'start_pose': 'geometry_msgs/Point',
        'goal_pose': 'geometry_msgs/Point',
        'horizon_steps': 'uint32',
        'execution_window': 'uint32',
        'task_id': 'string',
        'sub_goal_type': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        from geometry_msgs.msg import Point
        self.start_pose = kwargs.get('start_pose', Point())
        from geometry_msgs.msg import Point
        self.goal_pose = kwargs.get('goal_pose', Point())
        self.horizon_steps = kwargs.get('horizon_steps', int())
        self.execution_window = kwargs.get('execution_window', int())
        self.task_id = kwargs.get('task_id', str())
        self.sub_goal_type = kwargs.get('sub_goal_type', str())

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
        if self.start_pose != other.start_pose:
            return False
        if self.goal_pose != other.goal_pose:
            return False
        if self.horizon_steps != other.horizon_steps:
            return False
        if self.execution_window != other.execution_window:
            return False
        if self.task_id != other.task_id:
            return False
        if self.sub_goal_type != other.sub_goal_type:
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
    def start_pose(self):
        """Message field 'start_pose'."""
        return self._start_pose

    @start_pose.setter
    def start_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'start_pose' field must be a sub message of type 'Point'"
        self._start_pose = value

    @builtins.property
    def goal_pose(self):
        """Message field 'goal_pose'."""
        return self._goal_pose

    @goal_pose.setter
    def goal_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'goal_pose' field must be a sub message of type 'Point'"
        self._goal_pose = value

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
    def sub_goal_type(self):
        """Message field 'sub_goal_type'."""
        return self._sub_goal_type

    @sub_goal_type.setter
    def sub_goal_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sub_goal_type' field must be of type 'str'"
        self._sub_goal_type = value
