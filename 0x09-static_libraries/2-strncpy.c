#include "main.h"

/**
 * _strncpy - Copies the first n characters of a string.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of characters to copy.
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}

