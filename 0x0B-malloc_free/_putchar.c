#include "main.h"		
#include <unistd.h>


/**
 * _putchar - Writes 'c' to stdout.
 * @c: Character to be printed.
 * Return: 1 on success, -1 on error (errno set).
 */
int _putchar(char c)
{

	return (write(1, &c, 1));

}


