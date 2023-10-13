#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Print various data types from a format string.
 * @format: List of argument types.
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *s = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					k++;
					continue;
			}
			s = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(list);
}

