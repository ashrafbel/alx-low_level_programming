#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: Input string.
 * @accept: Set of bytes to search for.
 * Return: Pointer to the first occurrence in s of any byte in accept, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}

	return ('\0');
}

