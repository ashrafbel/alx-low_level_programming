#include "main.h"

/**
 * _strncpy - copies the first n characters of a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;

while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}


