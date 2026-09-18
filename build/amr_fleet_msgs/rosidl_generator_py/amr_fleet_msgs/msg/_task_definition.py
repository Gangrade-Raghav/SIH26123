# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/TaskDefinition.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskDefinition(type):
    """Metaclass of message 'TaskDefinition'."""

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
                'amr_fleet_msgs.msg.TaskDefinition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_definition
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_definition
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_definition
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_definition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_definition

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class TaskDefinition(metaclass=Metaclass_TaskDefinition):
    """Message class 'TaskDefinition'."""

    __slots__ = [
        '_header',
        '_task_id',
        '_pickup_pose',
        '_dropoff_pose',
        '_priority',
        '_created_at',
        '_deadline',
        '_status',
        '_assigned_robot_id',
        '_requested_robot',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'task_id': 'string',
        'pickup_pose': 'geometry_msgs/Point',
        'dropoff_pose': 'geometry_msgs/Point',
        'priority': 'int32',
        'created_at': 'builtin_interfaces/Time',
        'deadline': 'builtin_interfaces/Time',
        'status': 'string',
        'assigned_robot_id': 'string',
        'requested_robot': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.task_id = kwargs.get('task_id', str())
        from geometry_msgs.msg import Point
        self.pickup_pose = kwargs.get('pickup_pose', Point())
        from geometry_msgs.msg import Point
        self.dropoff_pose = kwargs.get('dropoff_pose', Point())
        self.priority = kwargs.get('priority', int())
        from builtin_interfaces.msg import Time
        self.created_at = kwargs.get('created_at', Time())
        from builtin_interfaces.msg import Time
        self.deadline = kwargs.get('deadline', Time())
        self.status = kwargs.get('status', str())
        self.assigned_robot_id = kwargs.get('assigned_robot_id', str())
        self.requested_robot = kwargs.get('requested_robot', str())

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
        if self.task_id != other.task_id:
            return False
        if self.pickup_pose != other.pickup_pose:
            return False
        if self.dropoff_pose != other.dropoff_pose:
            return False
        if self.priority != other.priority:
            return False
        if self.created_at != other.created_at:
            return False
        if self.deadline != other.deadline:
            return False
        if self.status != other.status:
            return False
        if self.assigned_robot_id != other.assigned_robot_id:
            return False
        if self.requested_robot != other.requested_robot:
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
    def pickup_pose(self):
        """Message field 'pickup_pose'."""
        return self._pickup_pose

    @pickup_pose.setter
    def pickup_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'pickup_pose' field must be a sub message of type 'Point'"
        self._pickup_pose = value

    @builtins.property
    def dropoff_pose(self):
        """Message field 'dropoff_pose'."""
        return self._dropoff_pose

    @dropoff_pose.setter
    def dropoff_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'dropoff_pose' field must be a sub message of type 'Point'"
        self._dropoff_pose = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'priority' field must be an integer in [-2147483648, 2147483647]"
        self._priority = value

    @builtins.property
    def created_at(self):
        """Message field 'created_at'."""
        return self._created_at

    @created_at.setter
    def created_at(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'created_at' field must be a sub message of type 'Time'"
        self._created_at = value

    @builtins.property
    def deadline(self):
        """Message field 'deadline'."""
        return self._deadline

    @deadline.setter
    def deadline(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'deadline' field must be a sub message of type 'Time'"
        self._deadline = value

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
    def assigned_robot_id(self):
        """Message field 'assigned_robot_id'."""
        return self._assigned_robot_id

    @assigned_robot_id.setter
    def assigned_robot_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'assigned_robot_id' field must be of type 'str'"
        self._assigned_robot_id = value

    @builtins.property
    def requested_robot(self):
        """Message field 'requested_robot'."""
        return self._requested_robot

    @requested_robot.setter
    def requested_robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'requested_robot' field must be of type 'str'"
        self._requested_robot = value
