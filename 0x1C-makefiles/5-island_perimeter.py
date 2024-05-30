#!/usr/bin/python3
"""Module island_perimeter"""


def island_perimeter(grid):
    "Calculates the perimeter of the island in the grid."
    Pr = 0
    Rw = len(grid)
    COL_S = len(grid[0]) if Rw > 0 else 0
    for X in range(Rw):
        for Y in range(COL_S):
            if grid[X][Y] == 1:
                if X == 0 or grid[X-1][Y] == 0:
                    Pr += 1
                if X == Rw-1 or grid[X+1][Y] == 0:
                    Pr += 1
                if Y == 0 or grid[X][Y-1] == 0:
                    Pr += 1
                if Y == Rw-1 or grid[X][Y+1] == 0:
                    Pr += 1
    return Pr
