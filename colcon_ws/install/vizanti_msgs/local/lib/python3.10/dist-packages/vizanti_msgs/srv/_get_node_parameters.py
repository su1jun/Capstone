# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vizanti_msgs:srv/GetNodeParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetNodeParameters_Request(type):
    """Metaclass of message 'GetNodeParameters_Request'."""

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
            module = import_type_support('vizanti_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vizanti_msgs.srv.GetNodeParameters_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_parameters__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_parameters__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_parameters__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_parameters__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_parameters__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeParameters_Request(metaclass=Metaclass_GetNodeParameters_Request):
    """Message class 'GetNodeParameters_Request'."""

    __slots__ = [
        '_node',
    ]

    _fields_and_field_types = {
        'node': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node = kwargs.get('node', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.node != other.node:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node(self):
        """Message field 'node'."""
        return self._node

    @node.setter
    def node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node' field must be of type 'str'"
        self._node = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetNodeParameters_Response(type):
    """Metaclass of message 'GetNodeParameters_Response'."""

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
            module = import_type_support('vizanti_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vizanti_msgs.srv.GetNodeParameters_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_node_parameters__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_node_parameters__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_node_parameters__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_node_parameters__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_node_parameters__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetNodeParameters_Response(metaclass=Metaclass_GetNodeParameters_Response):
    """Message class 'GetNodeParameters_Response'."""

    __slots__ = [
        '_parameters',
    ]

    _fields_and_field_types = {
        'parameters': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parameters = kwargs.get('parameters', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.parameters != other.parameters:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parameters' field must be of type 'str'"
        self._parameters = value


class Metaclass_GetNodeParameters(type):
    """Metaclass of service 'GetNodeParameters'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vizanti_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vizanti_msgs.srv.GetNodeParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_node_parameters

            from vizanti_msgs.srv import _get_node_parameters
            if _get_node_parameters.Metaclass_GetNodeParameters_Request._TYPE_SUPPORT is None:
                _get_node_parameters.Metaclass_GetNodeParameters_Request.__import_type_support__()
            if _get_node_parameters.Metaclass_GetNodeParameters_Response._TYPE_SUPPORT is None:
                _get_node_parameters.Metaclass_GetNodeParameters_Response.__import_type_support__()


class GetNodeParameters(metaclass=Metaclass_GetNodeParameters):
    from vizanti_msgs.srv._get_node_parameters import GetNodeParameters_Request as Request
    from vizanti_msgs.srv._get_node_parameters import GetNodeParameters_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
