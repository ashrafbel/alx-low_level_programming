#include "main.h"
#include <stdlib.h>




/**
 * create_array - creates an array of char and initializes
 * @size: the size of the array
 * @c: char  initializes
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int x = 0;

s = malloc(sizeof(char) * size);
if (s == NULL || size == 0)
return (NULL);
for (x = 0; x < size; x++)
{
s[x] = c;
}
return (s);
}
