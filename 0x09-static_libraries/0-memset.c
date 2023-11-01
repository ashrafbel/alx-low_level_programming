#include "main.h"



/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of memory to be filled.
 * @b:  desired value.
 * @n: number of bytes to be changed.
 * Return: modified array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)

{
int k = 0;
for (; n > 0; k++)
{
s[k] = b;
n--;
}
return (s);
}


