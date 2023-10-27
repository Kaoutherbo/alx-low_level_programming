#include"main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
{
	int result;

	if (n < 0)
		result = n * -1;
	else
		result = n;
	return (result);
}
