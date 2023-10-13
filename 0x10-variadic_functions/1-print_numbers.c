#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers with a specified separator and newline.
 * @separator: The string to separate numbers.
 * @n: Number of integers to be printed.
 * @...: Variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i = 0;

va_start(nums, n);

while (i < n)
{
printf("%d", va_arg(nums, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

i++;
}

printf("\n");

va_end(nums);
}

