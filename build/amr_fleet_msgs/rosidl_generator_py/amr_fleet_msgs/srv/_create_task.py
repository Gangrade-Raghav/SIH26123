# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_fleet_msgs:srv/CreateTask.idl
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


class Metaclass_CreateTask_Request(type):
    """Metaclass of message 'CreateTask_Request'."""

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
                'amr_fleet_msgs.srv.CreateTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateTask_Request(metaclass=Metaclass_CreateTask_Request):
    """Message class 'CreateTask_Request'."""

    __slots__ = [
        '_task_id',
        '_pickup_x',
        '_pickup_y',
        '_dropoff_x',
        '_dropoff_y',
        '_priority',
        '_deadline',
        '_requested_robot',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
        'pickup_x': 'double',
        'pickup_y': 'double',
        'dropoff_x': 'double',
        'dropoff_y': 'double',
        'priority': 'int32',
        'deadline': 'double',
        'requested_robot': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.task_id = kwargs.get('task_id', str())
        self.pickup_x = kwargs.get('pickup_x', float())
        self.pickup_y = kwargs.get('pickup_y', float())
        self.dropoff_x = kwargs.get('dropoff_x', float())
        self.dropoff_y = kwargs.get('dropoff_y', float())
        self.priority = kwargs.get('priority', int())
        self.deadline = kwargs.get('deadline', float())
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
        if self.task_id != other.task_id:
            return False
        if self.pickup_x != other.pickup_x:
            return False
        if self.pickup_y != other.pickup_y:
            return False
        if self.dropoff_x != other.dropoff_x:
            return False
        if self.dropoff_y != other.dropoff_y:
            return False
        if self.priority != other.priority:
            return False
        if self.deadline != other.deadline:
            return False
        if self.requested_robot != other.requested_robot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def pickup_x(self):
        """Message field 'pickup_x'."""
        return self._pickup_x

    @pickup_x.setter
    def pickup_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pickup_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pickup_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pickup_x = value

    @builtins.property
    def pickup_y(self):
        """Message field 'pickup_y'."""
        return self._pickup_y

    @pickup_y.setter
    def pickup_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pickup_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pickup_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pickup_y = value

    @builtins.property
    def dropoff_x(self):
        """Message field 'dropoff_x'."""
        return self._dropoff_x

    @dropoff_x.setter
    def dropoff_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dropoff_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dropoff_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dropoff_x = value

    @builtins.property
    def dropoff_y(self):
        """Message field 'dropoff_y'."""
        return self._dropoff_y

    @dropoff_y.setter
    def dropoff_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dropoff_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dropoff_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dropoff_y = value

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
    def deadline(self):
        """Message field 'deadline'."""
        return self._deadline

    @deadline.setter
    def deadline(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'deadline' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deadline' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deadline = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CreateTask_Response(type):
    """Metaclass of message 'CreateTask_Response'."""

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
                'amr_fleet_msgs.srv.CreateTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateTask_Response(metaclass=Metaclass_CreateTask_Response):
    """Message class 'CreateTask_Response'."""

    __slots__ = [
        '_accepted',
        '_task_id',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'task_id': 'string',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.accepted = kwargs.get('accepted', bool())
        self.task_id = kwargs.get('task_id', str())
        self.message = kwargs.get('message', str())

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
        if self.accepted != other.accepted:
            return False
        if self.task_id != other.task_id:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

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
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CreateTask_Event(type):
    """Metaclass of message 'CreateTask_Event'."""

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
                'amr_fleet_msgs.srv.CreateTask_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__create_task__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__create_task__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__create_task__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__create_task__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__create_task__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CreateTask_Event(metaclass=Metaclass_CreateTask_Event):
    """Message class 'CreateTask_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<amr_fleet_msgs/CreateTask_Request, 1>',
        'response': 'sequence<amr_fleet_msgs/CreateTask_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['amr_fleet_msgs', 'srv'], 'CreateTask_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['amr_fleet_msgs', 'srv'], 'CreateTask_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from amr_fleet_msgs.srv import CreateTask_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, CreateTask_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CreateTask_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from amr_fleet_msgs.srv import CreateTask_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, CreateTask_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CreateTask_Response'"
        self._response = value


class Metaclass_CreateTask(type):
    """Metaclass of service 'CreateTask'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('amr_fleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amr_fleet_msgs.srv.CreateTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__create_task

            from amr_fleet_msgs.srv import _create_task
            if _create_task.Metaclass_CreateTask_Request._TYPE_SUPPORT is None:
                _create_task.Metaclass_CreateTask_Request.__import_type_support__()
            if _create_task.Metaclass_CreateTask_Response._TYPE_SUPPORT is None:
                _create_task.Metaclass_CreateTask_Response.__import_type_support__()
            if _create_task.Metaclass_CreateTask_Event._TYPE_SUPPORT is None:
                _create_task.Metaclass_CreateTask_Event.__import_type_support__()


class CreateTask(metaclass=Metaclass_CreateTask):
    from amr_fleet_msgs.srv._create_task import CreateTask_Request as Request
    from amr_fleet_msgs.srv._create_task import CreateTask_Response as Response
    from amr_fleet_msgs.srv._create_task import CreateTask_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
