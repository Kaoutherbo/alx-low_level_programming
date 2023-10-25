#include "main.h"

#include "main.h"

/**
 * _pow_recursion - function that return the pow.
 * @x: parameter to be checked.
 * @y: parameter to be checked.
 * Return: pow.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
