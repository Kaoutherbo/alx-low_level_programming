#include<stdio.h>

/**
 * print_to_98 -  function that prints all natural numbers from n to 98
 * @n: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	} else if (n == 98)
	{
		printf("98\n");
	} else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
}
