#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a 2D grid using nested loops.
 * @width: Width of the grid.
 * @height: Height of the grid.
 * Return: Pointer to the 2D array.
 */

int **alloc_grid(int width, int height)
{

int **kira;
int a, b;
if (width <= 0 || height <= 0)
return (NULL);
kira = malloc(sizeof(int *) * height);
if (kira == NULL)
return (NULL);


for (a = 0; a < height; a++)
{
kira[a] = malloc(sizeof(int) * width);
if (kira[a] == NULL)
{
for (; a >= 0; a--)
free(kira[a]);
free(kira);
return (NULL);
}
}

a = 0;
while (a < height)
{
b = 0;
while (b < width)
{
kira[a][b] = 0;
b++;
}
a++;
}
return (kira);
}
