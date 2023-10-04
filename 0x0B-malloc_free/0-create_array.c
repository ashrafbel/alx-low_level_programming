#include "main.h"
#include <stdlib.h>


/**
 * create_array - Creates array of given size and assigns char c.
 * @size: Size of the array.
 * @c: Char to assign.
 * Description: Creates array of size size and assigns char c.
 * Return: Pointer to array, NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int x = 0;

s = malloc(sizeof(char) * size);

if (s == NULL || size == 0)
return (NULL);

while (x < size)
{
s[x] = c;
x++;
}

return (s);
}
