
#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - which is a duplicate of the string
 * @str: Input string.
 * Return: Pointer to duplicated string, or null
 */

char *_strdup(char *str)
{
char *k;
int x, y;
if (str == NULL)
return (NULL);
x = 0;
while (str[x] != '\0')
x++;

k = malloc(sizeof(char) * (x + 1));
if (k == NULL)
return (NULL);
for (y = 0; str[y]; y++)
k[y] = str[y];
return (k);
}

