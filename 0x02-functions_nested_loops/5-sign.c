#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	} else if (n == 0)
	{
		_putchar('0');
		result = 0;
	} else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
