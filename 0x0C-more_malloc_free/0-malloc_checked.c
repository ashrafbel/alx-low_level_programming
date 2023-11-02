#include "main.h"
/**
 * *malloc_checked - malloc allocated memory
 * @b: number of bytes
 * Return:pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *kira;

	kira = malloc(b);
	if (kira == 0)
		exit(90);
	return (kira);
}
