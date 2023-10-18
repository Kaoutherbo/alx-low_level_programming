#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: The array to be reverse
 * @n: The size of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
