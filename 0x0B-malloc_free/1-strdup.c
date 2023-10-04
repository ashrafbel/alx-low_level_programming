#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - Duplicates input string to a new memory space.
 * @str: Input string.
 * Return: Pointer to duplicated string, or NULL if fails.
 */


char *_strdup(char *str)
{
char *z;
int x, y;
if (str == NULL)
return (NULL);
x = 0;
while (str[x] != '\0')
x++;


z = malloc(sizeof(char) * (x + 1));
if (z == NULL)
return (NULL);
for (y = 0; str[y]; y++)
z[y] = str[y];
return (z);
}

