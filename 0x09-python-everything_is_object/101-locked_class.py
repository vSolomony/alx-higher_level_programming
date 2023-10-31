#!/usr/bin/python3
"""Defines a locked class."""


class LockedClass:
    """
    Prevent the user from instantiating a new locked class attribute
    for anything but attribute called 'first_name'
    """


    __slots__ = ["first_name"]
