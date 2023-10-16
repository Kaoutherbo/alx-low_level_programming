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
		values[i] = rand() % 78;
		sum += values[i];
		putchar(values[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	 return 0;
}
