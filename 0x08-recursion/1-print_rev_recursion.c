#include "main.h"


/**
 * print_rev_recursion - print the string with reverse
 * @s: the pointer of string
 * Return: viod
 */
void _print_rev_recursion(char *s)
{       
if (*s != '\0')
{       
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
