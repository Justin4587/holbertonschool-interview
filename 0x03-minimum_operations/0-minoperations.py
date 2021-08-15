#!/usr/bin/python3
"""
Main file for testing
"""

def minOperations(n):
    min = 0
    
    if n <= 1:
        return (0)
    
    for i in range(2, (n + 1)):
        while (n % i == 0):
            min = min + i
            n = n / i

    return (min)
