#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a given function.
 * @array: Array to search.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that compares integers.
 * Return: Index of the first matching element, or -1 if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array == NULL || size <= 0 || cmp == NULL)
return(-1);
for (k = 0; k < size; k++)
{
if (cmp(array[k]))
return (k);
}
return (-1);
}
