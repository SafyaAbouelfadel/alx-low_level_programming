#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented by a 2D grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island,
            where 1 denotes land and 0 denotes water.

    Returns:
        int: The perimeter of the island.
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for k in range(height):
        for j in range(width):
            if grid[k][j] == 1:
                size += 1
                if (j > 0 and grid[k][j - 1] == 1):
                    edge += 1
                if (k > 0 and grid[k - 1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
