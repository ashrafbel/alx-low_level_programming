#include "search_algos.h"
/**
 * linear_search - Searches for a val in an array of integers
 * by using the linear search algorithm.
 * @array: Pointer to the first element
 * @size: Number of elements
 * @value: Val to search for
 * Return: The first or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int j;

	if (!array)
		return (-1);
	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
