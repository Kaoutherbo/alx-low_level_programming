#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 *
 * @format:  list of types of arguments passed to the function
 * Retrun: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "", *str;
	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				case 'i':
					printf("%s%i", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
