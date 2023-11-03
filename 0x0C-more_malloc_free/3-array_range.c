#include "main.h"
/**
 * array_range -  creates an array of integers
 * @min: Minimum value  of the range
 * @max: Maximum value  of the range and number of elements
 *
 * Return: Pointer to the new array or NULL if invalid input or memory failure.
 */
int *array_range(int min, int max)
{

int *k;
int size, index;

if (min > max)
return (NULL);

size = max - min + 1;

k = malloc(sizeof(int) * size);

if (k == NULL)
return (NULL);

for (index = 0; index < size; index++)
k[index] = min++;

return (k);
}


