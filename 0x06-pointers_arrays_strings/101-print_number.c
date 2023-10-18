#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		num = n;
		_putchar('-');
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((unsigned int) n % 10 + '0');
}
