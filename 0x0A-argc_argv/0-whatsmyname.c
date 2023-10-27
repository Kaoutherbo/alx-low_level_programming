#include <stdio.h>

/**
 * main - print program name.
 * @argc: arguments count.(int)
 * @argv: arguments vector.(list)
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
