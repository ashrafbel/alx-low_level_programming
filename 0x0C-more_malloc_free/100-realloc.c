#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated by malloc.
 * @old_size: Size of the allocated memory for ptr.
 * @new_size: New size of the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			ptr1[k] = old_ptr[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			ptr1[i] = old_ptr[k];
	}
	free(ptr);
	return (ptr1);
}

