#include "search_algos.h"
/**
 * binary_search - Searches val by using Binary search
 * @array: ptr for fist elemnets
 * @size: num of element
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	int midd;
	size_t x;

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
		midd = start + (end - start) / 2;
		if (array[midd] == value)
		{
			return (midd);
		}
		else if (array[midd] < value)
		{
			start = midd + 1;
		}
		else
		{
			end = midd - 1;
		}
	}
	return (-1);
}
