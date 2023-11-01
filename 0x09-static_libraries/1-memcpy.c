#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: Destination memory
 * @src: source memory
 * @n: coppy the number of byte
 * Return: Pointer to the copied memory with n bytes changed
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


