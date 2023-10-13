#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print strings separated by a delimiter, with newline.
 * @separator: String between strings (or NULL if no separator).
 * @n: Number of strings to print.
 * @...: Strings to be printed.
 *
 * Description: Replaces NULL strings with (nil).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int i = 0;

va_start(strings, n);

while (i < n)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

i++;
}

printf("\n");

	va_end(strings);
}

