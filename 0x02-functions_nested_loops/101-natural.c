#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3 ; i <= 1024 ; i++)
	{
		if ((i % 3 == 0 || i % 5 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
