#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Input string.
 * @c: Character to locate.
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (NULL);
}

