#include "search_algos.h"
/**
 * binary_search_ - Searches val by using Binary search
 * @array: ptr for fist elemnets
 * @left: Left index
 * @right: Right index
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found
 */
int binary_search_(int *array, size_t left, size_t right, int value)
{
	size_t start = left, end = right;
	size_t mid, x;

	if (!array)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (x = start; x <= end; x++)
		{
			printf("%d", array[x]);
			if (x < end)
				printf(", ");
		}
		printf("\n");
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - Performs exponential search on a sorted array
 * @array: Ptr to the first elemet
 * @size: Number of elements
 * @value: Value to search for
 *
 * Return: Idx where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t rt, i = 1;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	rt = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, rt);
	return (binary_search_(array, i / 2, rt, value));
}
