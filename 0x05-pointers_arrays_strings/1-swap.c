#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: parameter to be checked
 * @b: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
