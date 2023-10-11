#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name's print by use pointer to function
 * @name: the name of string
 * @f: pointer to function
 * Return: viod
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

