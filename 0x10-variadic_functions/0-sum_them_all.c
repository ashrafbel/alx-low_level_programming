#include "variadic_functions.h"
/**
 * sum_them_all - the sum vari arg
 * @n: number of arg
 * @...: integer to sum
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ar;
unsigned int b = 0;
int m = 0;

if (!n)
return (0);

va_start(ar, n);

for (b = 0; b < n; b++)
{
m += va_arg(ar, int);
}
va_end(ar);
return (m);
}

