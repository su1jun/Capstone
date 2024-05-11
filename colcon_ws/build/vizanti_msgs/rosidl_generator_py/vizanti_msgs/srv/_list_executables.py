# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vizanti_msgs:srv/ListExecutables.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ListExecutables_Request(type):
    """Metaclass of message 'ListExecutables_Request'."""

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
                'vizanti_msgs.srv.ListExecutables_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_executables__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_executables__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_executables__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_executables__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_executables__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListExecutables_Request(metaclass=Metaclass_ListExecutables_Request):
    """Message class 'ListExecutables_Request'."""

    __slots__ = [
        '_package',
    ]

    _fields_and_field_types = {
        'package': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.package = kwargs.get('package', str())

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
        if self.package != other.package:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def package(self):
        """Message field 'package'."""
        return self._package

    @package.setter
    def package(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'package' field must be of type 'str'"
        self._package = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ListExecutables_Response(type):
    """Metaclass of message 'ListExecutables_Response'."""

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
                'vizanti_msgs.srv.ListExecutables_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_executables__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_executables__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_executables__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_executables__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_executables__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListExecutables_Response(metaclass=Metaclass_ListExecutables_Response):
    """Message class 'ListExecutables_Response'."""

    __slots__ = [
        '_executables',
    ]

    _fields_and_field_types = {
        'executables': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.executables = kwargs.get('executables', [])

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
        if self.executables != other.executables:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def executables(self):
        """Message field 'executables'."""
        return self._executables

    @executables.setter
    def executables(self, value):
        if __debug__:
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
                "The 'executables' field must be a set or sequence and each value of type 'str'"
        self._executables = value


class Metaclass_ListExecutables(type):
    """Metaclass of service 'ListExecutables'."""

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
                'vizanti_msgs.srv.ListExecutables')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__list_executables

            from vizanti_msgs.srv import _list_executables
            if _list_executables.Metaclass_ListExecutables_Request._TYPE_SUPPORT is None:
                _list_executables.Metaclass_ListExecutables_Request.__import_type_support__()
            if _list_executables.Metaclass_ListExecutables_Response._TYPE_SUPPORT is None:
                _list_executables.Metaclass_ListExecutables_Response.__import_type_support__()


class ListExecutables(metaclass=Metaclass_ListExecutables):
    from vizanti_msgs.srv._list_executables import ListExecutables_Request as Request
    from vizanti_msgs.srv._list_executables import ListExecutables_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
