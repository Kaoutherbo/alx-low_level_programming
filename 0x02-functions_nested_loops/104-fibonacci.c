#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int term1	= 1;
	unsigned long int term2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, %lu, ", term1,term2);
	for (i = 3 ; i <= 98 ; i++)
	{
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		printf("%lu",next);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
