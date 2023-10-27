#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * Description: main function takes the argc & argv
 * then prints the sum of the input numbers
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 for success 1 for fail
 */

int main(int argc, char const *argv[])
{
	int i, sum, j;

	sum = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
