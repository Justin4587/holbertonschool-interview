#!/usr/bin/python3
"""
Main file for validating
Lets see if the solution I found works
"""

def validUTF8(data):
    """ should verify utf8 status """
    successive_10 = 0
    for d in data:
        d = bin(d).replace('0b', '').rjust(8, '0')
        if successive_10 != 0:
            successive_10 -= 1
            if not d.startswith('10'):
                return False
        elif d[0] == '1':
            successive_10 = len(d.split('0')[0]) - 1
    return True
 