#!/usr/bin/python3
"""
Conatins function that returns the
perimeter of the island described in grid
"""


def island_perimeter(grid):
    m, n = len(grid), len(grid[0])
    land, water = 0, 0
    for i in range(m):
        for j in range(m):
            if grid[i][j] == 1:
                land += 1
                if i < m - 1 and grid[i+1][j] == 1:
                    water += 1
                if j < n - 1 and grid[i][j+1] == 1:
                    water += 1
    return (land * 4) - (2 * water)
