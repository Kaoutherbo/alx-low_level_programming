#include<stdio.h>
#include"main.h"

/**
 * positive_or_negative - prints if integer is positive or negative
 * @n: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
