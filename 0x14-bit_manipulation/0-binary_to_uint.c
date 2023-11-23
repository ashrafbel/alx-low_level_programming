#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int r = 0;

if (b == NULL)
{
return (0);
}

while (*b != '\0')
{
if (*b == '0' || *b == '1')
{
r = r * 2 + (*b++ - '0');
}
else
{
return (0);
}
}
return (r);
}
