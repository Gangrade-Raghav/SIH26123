# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:msg/ConflictReport.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConflictReport(type):
    """Metaclass of message 'ConflictReport'."""

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
                'amr_fleet_msgs.msg.ConflictReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__conflict_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__conflict_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__conflict_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__conflict_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__conflict_report

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


class ConflictReport(metaclass=Metaclass_ConflictReport):
    """Message class 'ConflictReport'."""

    __slots__ = [
        '_header',
        '_conflict_type',
        '_robot_a',
        '_robot_b',
        '_cell_x',
        '_cell_y',
        '_time_step',
        '_resolved',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'conflict_type': 'string',
        'robot_a': 'string',
        'robot_b': 'string',
        'cell_x': 'int32',
        'cell_y': 'int32',
        'time_step': 'int32',
        'resolved': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.conflict_type = kwargs.get('conflict_type', str())
        self.robot_a = kwargs.get('robot_a', str())
        self.robot_b = kwargs.get('robot_b', str())
        self.cell_x = kwargs.get('cell_x', int())
        self.cell_y = kwargs.get('cell_y', int())
        self.time_step = kwargs.get('time_step', int())
        self.resolved = kwargs.get('resolved', bool())

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
        if self.conflict_type != other.conflict_type:
            return False
        if self.robot_a != other.robot_a:
            return False
        if self.robot_b != other.robot_b:
            return False
        if self.cell_x != other.cell_x:
            return False
        if self.cell_y != other.cell_y:
            return False
        if self.time_step != other.time_step:
            return False
        if self.resolved != other.resolved:
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
    def conflict_type(self):
        """Message field 'conflict_type'."""
        return self._conflict_type

    @conflict_type.setter
    def conflict_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'conflict_type' field must be of type 'str'"
        self._conflict_type = value

    @builtins.property
    def robot_a(self):
        """Message field 'robot_a'."""
        return self._robot_a

    @robot_a.setter
    def robot_a(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot_a' field must be of type 'str'"
        self._robot_a = value

    @builtins.property
    def robot_b(self):
        """Message field 'robot_b'."""
        return self._robot_b

    @robot_b.setter
    def robot_b(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot_b' field must be of type 'str'"
        self._robot_b = value

    @builtins.property
    def cell_x(self):
        """Message field 'cell_x'."""
        return self._cell_x

    @cell_x.setter
    def cell_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cell_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cell_x' field must be an integer in [-2147483648, 2147483647]"
        self._cell_x = value

    @builtins.property
    def cell_y(self):
        """Message field 'cell_y'."""
        return self._cell_y

    @cell_y.setter
    def cell_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cell_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cell_y' field must be an integer in [-2147483648, 2147483647]"
        self._cell_y = value

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
    def resolved(self):
        """Message field 'resolved'."""
        return self._resolved

    @resolved.setter
    def resolved(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'resolved' field must be of type 'bool'"
        self._resolved = value
