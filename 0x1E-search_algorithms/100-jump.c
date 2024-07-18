#include "search_algos.h"
/**
 * jump_search - searches val by using
 * Jump search algorithm
 * @array: ptr for fist elemnets
 * @size: num of element
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sp = sqrt(size);
	size_t pv = 0, cr = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (cr < size && array[cr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", cr, array[cr]);
		pv = cr;
		cr += sp;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pv, cr);
	if (cr < size)
		cr = cr;
	else
		cr = size - 1;
	while (pv <= cr)
	{
		printf("Value checked array[%lu] = [%d]\n", pv, array[pv]);
		if (array[pv] == value)
			return (pv);
		pv++;
	}
	return (-1);
}
