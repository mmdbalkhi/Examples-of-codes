#!/bin/python3
"""
    Find factorial num with python
    >>> factorail(4) = 24
"""


def factorail(input_number: int) -> int:
    """
    Find factorial num with python
    >>> factorail(4) = 24
    """
    if input_number == 1:
        return 1
    if input_number == 2:
        return 2

    return factorail(input_number - 1) * input_number


print(factorail(4))
