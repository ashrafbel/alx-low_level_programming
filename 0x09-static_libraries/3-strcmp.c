#include "main.h"

/**
 * _strcmp - Compares string values.
 * @s1: First string.
 * @s2: Second string.
 * Return: Difference of first differing characters in s1 and s2.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}

