#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
	if (array == NULL || action == NULL)
	return;
{
for (k = 0; k < size; k++)
{
action(array[k]);
}
}
