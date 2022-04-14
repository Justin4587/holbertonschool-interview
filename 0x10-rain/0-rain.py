#!/usr/bin/python3
"""how much can it hold"""


def rain(walls):
    """given integers determine amount of water collected"""
    amount = 0
    for i in range(len(walls)):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
        right = walls[i]
        for j in range(i + 1, len(walls)):
            right = max(right, walls[j])
        amount += min(left, right) - walls[i]
    return amount
