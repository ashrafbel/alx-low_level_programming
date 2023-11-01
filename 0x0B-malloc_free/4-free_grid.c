#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: 2D array grid
 * @height: Height dimension of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
int g = 0;
while (g < height)
{
free(grid[g]);
g++;
}
free(grid);
}


