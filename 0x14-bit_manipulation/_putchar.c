#include "main.h"
#include <unistd.h>
/**
 * _putchar_custom - Writes the character 'c' to the standard output.
 * @c: The character to be printed.
 *
 * Return: Returns 1 on success. On error, returns -1 and sets the appropriate errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
