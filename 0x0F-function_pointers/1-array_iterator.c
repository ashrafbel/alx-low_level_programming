#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *L = array + size - 1;
if (array && size && action)
while (array <= L)
{
action(*array++);
}
}


