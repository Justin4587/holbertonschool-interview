#!/usr/bin/python3
"""
Main file for validating
Lets see if the solution I found works
"""


def validUTF8(data):
    """ should verify utf8 status """
    if not (type(data) is list and all([isinstance(n, int) for n in data])):
        return False
    data = [n + 256 if n < 0 and n > -129 else n for n in data]
    data = [n & 0xff if n >= 0 else n for n in data]

    try:
        bytes(data).decode(encoding='utf-8', errors='strict')
    except (ValueError, UnicodeDecodeError):
        return False
    return True
