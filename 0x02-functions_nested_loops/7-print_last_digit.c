#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (n < 0)
		result = -result;
	_putchar(result + '0');
	return (result);
}
