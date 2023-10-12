#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
