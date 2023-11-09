#include "function_pointers.h"

/**
 * print_name - prints a name by using function
 * @name: name of string
 * @f: the prints function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
