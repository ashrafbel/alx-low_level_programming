#include "main.h"

/**
 * string_nconcat - Concatenates to string
 * @s1: the pointer of string one
 * @s2: the ponter of string two
 * @n: Number of bytes from s2 to concatenate to s1.
 * Return: Pointer to the resulting string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

s = malloc(sizeof(char) * (len1 + n + 1));

if (s == NULL)
return (NULL);

while (x < len1)
{
s[x] = s1[x];
x++;
}

while (y < n)
{
s[x] = s2[y];
x++;
y++;
}

s[x] = '\0';

return (s);
}


