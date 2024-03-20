#!/usr/bin/python3
"""
calculates perimeter of an island
"""


def island_perimeter(grid):
    """
    calculates perimeter of an island
    Args:
        grid: a list of list of integers, where 0
              represents water and 1 represent land
    """
    perimeter = 0
    for j in range(len(grid)):
        for i in range(len(grid[0])):
            if grid[j][i] == 1:
                if i > 0:
                    if grid[j][i - 1] == 0:
                        perimeter += 1
                if i < len(grid[0]) - 1:
                    if grid[j][i + 1] == 0:
                        perimeter += 1
                if j > 0:
                    if grid[j - 1][i] == 0:
                        perimeter += 1
                if j < len(grid) - 1:
                    if grid[j + 1][i] == 0:
                        perimeter += 1
    return perimeter
