#!/usr/bin/python3
""" Defines the function island perimeter"""


def island_perimeter(grid):
    """ Island perimeter function

        Args:
            grid (list of lists): list of list of integers

        Return: the perimeter of the island described in grid

        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically(not diagonally).
        Grind is rectangular, width and height dont exceed 100
        Grid is completely surrounded by water,
            and there is one island (or none)
        The island don't have lakes (water inside
            isn't connected to the water around the island)
    """
    per = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                per += 4

                if i > 0 and grid[i - 1][j] == 1:
                    per -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    per -= 1
                if i < height - 1 and grid[i + 1][j] == 1:
                    per -= 1
                if j < width - 1 and grid[i][j + 1] == 1:
                    per -= 1

    return per
