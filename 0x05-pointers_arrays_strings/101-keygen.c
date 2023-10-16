#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	 int values[100], i, sum = 0, n;

	 srand(time(NULL));
	 for (i = 0; i < 100; i++)
	{
		values[i] = rand() % 100;
		sum += values[i];
		printf("%d ", values[i]);

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			printf("%d ", n);
			break;
		}
	}
	 return 0;
}
