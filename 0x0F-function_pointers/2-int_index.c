#include "function_pointers.h"
/**
 * int_index - Sfunction that searches for an integer.
 * @array: Array to search.
 * @size: Number of elements in the array.
 * @cmp: pointer to a function that compares integers.
 * Return: Index of the first matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array && size && cmp)
for (k = 0; k < size; k++)
{
if (cmp(array[k]))
return (k);
}
return (-1);
}

