#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: Source string
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
int k = 0, f = 0;

while (dest[k] != '\0')
k++;
while (src[f] != '\0')
{
dest[k] = src[f];
k++;
f++;
}

dest[k] = '\0';
return (dest);
}


