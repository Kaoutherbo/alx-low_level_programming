#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: The string to be print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
