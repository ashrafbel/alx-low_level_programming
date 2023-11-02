#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Allocates memory using malloc
 * @b: number of bytes
 * Return:pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(90);
	return (k);
}
