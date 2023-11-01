#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * consisting of characters from accept
 * @s: Input string
 * @accept: Characters to match
 * Return: Number of characters in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}


