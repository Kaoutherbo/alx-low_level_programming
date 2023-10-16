#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers
 * @a:parameter to be checked
 * @n:parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n-1)
			printf(", ");
	}
	printf("\n");
}
