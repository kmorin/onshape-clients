# coding: utf-8

"""
    Onshape REST API

    The Onshape REST API consumed by all clients.  # noqa: E501

    OpenAPI spec version: 1.93
    Contact: api-support@onshape.zendesk.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class BTWorkflowStateInfo(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'name': 'str',
        'value': 'int',
        'display_name': 'str'
    }

    attribute_map = {
        'name': 'name',
        'value': 'value',
        'display_name': 'displayName'
    }

    def __init__(self, name=None, value=None, display_name=None):  # noqa: E501
        """BTWorkflowStateInfo - a model defined in OpenAPI"""  # noqa: E501

        self._name = None
        self._value = None
        self._display_name = None
        self.discriminator = None

        if name is not None:
            self.name = name
        if value is not None:
            self.value = value
        if display_name is not None:
            self.display_name = display_name

    @property
    def name(self):
        """Gets the name of this BTWorkflowStateInfo.  # noqa: E501


        :return: The name of this BTWorkflowStateInfo.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this BTWorkflowStateInfo.


        :param name: The name of this BTWorkflowStateInfo.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def value(self):
        """Gets the value of this BTWorkflowStateInfo.  # noqa: E501


        :return: The value of this BTWorkflowStateInfo.  # noqa: E501
        :rtype: int
        """
        return self._value

    @value.setter
    def value(self, value):
        """Sets the value of this BTWorkflowStateInfo.


        :param value: The value of this BTWorkflowStateInfo.  # noqa: E501
        :type: int
        """

        self._value = value

    @property
    def display_name(self):
        """Gets the display_name of this BTWorkflowStateInfo.  # noqa: E501


        :return: The display_name of this BTWorkflowStateInfo.  # noqa: E501
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """Sets the display_name of this BTWorkflowStateInfo.


        :param display_name: The display_name of this BTWorkflowStateInfo.  # noqa: E501
        :type: str
        """

        self._display_name = display_name

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, BTWorkflowStateInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other