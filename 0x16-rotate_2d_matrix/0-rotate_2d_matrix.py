#!/usr/bin/python3
"""
Test 0x16 - Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """Rotate it 90 degrees"""
    N = len(matrix)

    """nested loop to swap places"""
    for i in range(int(N / 2)):
        for j in range(i, int(N - i - 1)):

            temp = matrix[i][j]
            """matrix[i][j] is starting point.
            using the len we find the corresponding spot and swap."""
            matrix[i][j] = matrix[N - 1 - j][i]
            matrix[N - 1 - j][i] = matrix[N - 1 - i][N - 1 - j]
            matrix[N - 1 - i][N - 1 - j] = matrix[j][N - 1 - i]
            matrix[j][N - 1 - i] = temp
