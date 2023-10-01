#include "main.h"

int check_pal(char *s, int y, int lgt);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: Input string
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - Recursively verifies characters for palindrome.
 * @s: Input string
 * @y: Iterator
 * @lgt: Length of the string
 *
 * Returns 1 if palindrome, 0 if not.
 */
int check_pal(char *s, int i, int lgt)
{
	if (*(s + y) != *(s + lgt - 1))
		return (0);
	if (y >= lgt)
		return (1);
	return (check_pal(s, y + 1, lgt - 1));
}

