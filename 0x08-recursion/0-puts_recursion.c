#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: Input string
 *
 * Recursively prints characters of the input string.
 * Returns when encountering a null terminator.
 */
void _puts_recursion(char *s)


{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
