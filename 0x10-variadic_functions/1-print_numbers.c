#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers with a specified
 * @separator: string to separate numbers
 * @n: Number of integers
 * @...: Variable numbers .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list k;
unsigned int j = 0;

va_start(k, n);

while (j < n)
{
printf("%d", va_arg(k, int));
if (j != (n - 1) && separator != NULL)
printf("%s", separator);
j++;
}
printf("\n");
va_end(k);
}


