#include <unistd.h>
/**
 * _putchar - Writes 'c' to stdout.
 * @c: the print Character
 * Return: 1 on success, -1 on error
 */


int _putchar(char c)
{
return (write(1, &c, 1));
}


