#!/usr/bin/python3
""" island module """


def island_perimeter(grid):
    """
       calculate the island perimeter

       Args:
           grid: map
    """

    peri = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if row == 0 or row == len(grid) - 1:
                peri += 1
            if column == 0 or column == len(grid[row]) - 1:
                peri += 1
            if (grid[row][column] == 1 and
                    row > 0 and grid[row - 1][column] == 0):
                peri += 1
            if (grid[row][column] == 1 and
                    column > 0 and grid[row][column - 1] == 0):
                peri += 1
            if (grid[row][column] == 1 and
                    column < len(grid[row]) - 1 and
                    grid[row][column + 1] == 0):
                peri += 1
            if (grid[row][column] == 1 and
                    row < len(grid) - 1 and grid[row + 1][column] == 0):
                peri += 1

    return peri
