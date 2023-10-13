#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum vari arg.
 * @n: number of arrg.
 * @...: A variable number of paramters.
 *
 * Return: If n == 0, return 0. Otherwise, the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int k = 0;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);
while (k < n)
{
sum += va_arg(args, int);
k++;
}
va_end(args);

return (sum);
}

