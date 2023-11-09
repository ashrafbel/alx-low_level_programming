#include "variadic_functions.h"
/**
 * print_strings - Print strings separated
 * @separator: String between strings
 * @n: Number of strings to print.
 * @...: Strings to be print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list stg;
char *s;
unsigned int k = 0;
va_start(stg, n);

while (k < n)
{
s = va_arg(stg, char *);

if (!s)
printf("(nil)");
else
printf("%s", s);

if (k != (n - 1) && separator != NULL)
printf("%s", separator);

k++;
}

printf("\n");

va_end(stg);
}


