#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 * Return: Pointer to the copied memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

