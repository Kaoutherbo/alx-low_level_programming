#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	int i;

	if (str[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(str[0]);
		for (i = 1 ; str[i] != '\0' ; i++)
		{
			if (i % 2 == 0)
				_putchar(str[i]);
		}
		_putchar('\n');
	}
}
