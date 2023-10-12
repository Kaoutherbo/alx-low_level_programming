#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
