#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1 ; x <= square ; x++)
	{
		if (number % x == 0)
			maxf = number / x;
	}
	printf("%ld\n", maxf);
	return (0);
}
