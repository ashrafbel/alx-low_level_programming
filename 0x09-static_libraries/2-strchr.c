#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: input string.
 * @c: Character to locate
 * Return: Pointer to the first occurrence of c in s or null if not found
 */
char *_strchr(char *s, char c)
{
int k = 0;

for (; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (&s[k]);
}
return (NULL);
}


