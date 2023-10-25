#include "main.h"
/**
 *_puts_recursion - unction that prints a string, followed by a new line.
 * @s: The string to be print.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
