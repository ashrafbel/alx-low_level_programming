#include "variadic_functions.h"
/**
 * print_all - Print anyting from a format string.
 * @format: format string
 */
void print_all(const char * const format, ...)
{
int k = 0;
char *s, *sp = "";
va_list ar;

va_start(ar, format);
if (format)
{
while (format[k])
{
switch (format[k])
{
case 'c':
printf("%s%c", sp, va_arg(ar, int));
break;
case 'i':
printf("%s%d", sp, va_arg(ar, int));
break;
case 'f':
printf("%s%f", sp, va_arg(ar, double));
break;
case 's':
s = va_arg(ar, char *);
if (!s)
s = "(nil)";
printf("%s%s", sp, s);
break;
default:
k++;
continue;
}
sp = ", ";
k++;
}
}
printf("\n");
va_end(ar);
}


