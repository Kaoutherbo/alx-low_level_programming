#include "main.h"

/**
 * print_most_numbers -  function that prints
 * the numbers except 2 and 4
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');	
	}
	_putchar('\n');
}
