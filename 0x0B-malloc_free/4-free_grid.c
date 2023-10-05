#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory of a 2D array grid.
 * @grid: 2D array grid.
 * @height: Height dimension of the grid.
 * Description: Frees memory occupied by the grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int r = 0;
while (r < height)
{
free(grid[r]);
r++;
}
free(grid);
}

