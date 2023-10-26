#include "main.h"


/**
 * -strlen_recursion - returns the length of a string
 * s@: the string of pointer
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
