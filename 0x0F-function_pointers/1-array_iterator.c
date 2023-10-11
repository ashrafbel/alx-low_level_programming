#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        int *end = array + size - 1;
        if (array && size && action)
                while (array <= end)
                        ection(*array++);
}
   
