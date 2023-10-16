#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	int i, count = strlen(s);

	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
