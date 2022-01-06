#!/usr/bin/python3
"""
Main file for testing
"""


def minOperations(n):
    min_ = 0

    if n < 2 or type(n) != int:
        return (0)

    for i in range(2, (n + 1)):
        while (n % i == 0):
            min_ = min_ + i
            n = n / i
            if n <= 1:
                break
    if n > 1:
        min_ = min_ + int(n)

    return (min_)
