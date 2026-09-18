# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/TaskEvent.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskEvent(type):
    """Metaclass of message 'TaskEvent'."""

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
                'amr_fleet_msgs.msg.TaskEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_event

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


class TaskEvent(metaclass=Metaclass_TaskEvent):
    """Message class 'TaskEvent'."""

    __slots__ = [
        '_header',
        '_task_id',
        '_event_type',
        '_previous_state',
        '_new_state',
        '_robot_id',
        '_timestamp',
        '_details',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'task_id': 'string',
        'event_type': 'string',
        'previous_state': 'string',
        'new_state': 'string',
        'robot_id': 'string',
        'timestamp': 'builtin_interfaces/Time',
        'details': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
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
        self.event_type = kwargs.get('event_type', str())
        self.previous_state = kwargs.get('previous_state', str())
        self.new_state = kwargs.get('new_state', str())
        self.robot_id = kwargs.get('robot_id', str())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.details = kwargs.get('details', str())

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
        if self.event_type != other.event_type:
            return False
        if self.previous_state != other.previous_state:
            return False
        if self.new_state != other.new_state:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.details != other.details:
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
    def event_type(self):
        """Message field 'event_type'."""
        return self._event_type

    @event_type.setter
    def event_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'event_type' field must be of type 'str'"
        self._event_type = value

    @builtins.property
    def previous_state(self):
        """Message field 'previous_state'."""
        return self._previous_state

    @previous_state.setter
    def previous_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'previous_state' field must be of type 'str'"
        self._previous_state = value

    @builtins.property
    def new_state(self):
        """Message field 'new_state'."""
        return self._new_state

    @new_state.setter
    def new_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'new_state' field must be of type 'str'"
        self._new_state = value

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

    @builtins.property
    def details(self):
        """Message field 'details'."""
        return self._details

    @details.setter
    def details(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'details' field must be of type 'str'"
        self._details = value
