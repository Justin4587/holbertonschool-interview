#!/usr/bin/python3
""" should return value for perimeter
    guidance for this function provided by TutorialCup
    implementing the effective counting solution"""


def island_perimeter(grid):
    """ checks 2 neighbors instead of 4, moves to the right and down"""
    gridLength = len(grid)
    gridRow = len(grid[0])
    units = 0

    for r in range(gridLength):
        for c in range(gridRow):
            if grid[r][c] == 1:
                units += 4

                if r > 0 and grid[r-1][c] == 1:
                    units -= 2

                if c > 0 and grid[r][c - 1] == 1:
                    units -= 2

    return units
