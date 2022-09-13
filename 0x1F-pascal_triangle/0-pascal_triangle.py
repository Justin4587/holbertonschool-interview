#!/usr/bin/python3
"""pascal triangle generator"""


def pascal_triangle(n):
    """Generate a triangle"""

    list = []

    if n <= 0:
        return list

    for each_row in range(n):
        row = [None for _ in range(each_row + 1)]
        row[0] = 1
        row[-1] = 1

        for i in range(1, len(row) - 1):
            row[i] = list[each_row - 1][i - 1] + list[each_row - 1][i]

        list.append(row)

    return list
