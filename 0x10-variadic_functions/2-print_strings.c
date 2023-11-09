#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char*));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
