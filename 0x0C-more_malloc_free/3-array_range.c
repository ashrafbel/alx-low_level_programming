#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers within the specified range.
 * @min: Minimum value (inclusive) of the range.
 * @max: Maximum value (inclusive) of the range and number of elements.
 *
 * Return: Pointer to the new array or NULL if invalid input or memory failure.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, index;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ptr[index] = min++;

	return (ptr);
}

