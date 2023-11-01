#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: Input string.
 * @accept: Set of bytes to search for.
 * Return: Pointer to the first occurrence in s of any byte in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}


