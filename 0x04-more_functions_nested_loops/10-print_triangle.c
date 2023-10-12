#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (k = size - i ; k > 1 ; k--)
				_putchar(' ');
			for (j = 0 ; j <= i ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
