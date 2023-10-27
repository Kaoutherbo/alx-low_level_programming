#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * Description: main function takes argv and argc
 * then prints the multiplication  of two numbers
 *
 * @argc:The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 for success and 1 for fail
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
