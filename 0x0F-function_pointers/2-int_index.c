#include "function_pointer.h"
/**
 * int_index - Searches for an integer in an array using a given function.
 * @array: Array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that compares integers.
 * Return: Index of the first matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

