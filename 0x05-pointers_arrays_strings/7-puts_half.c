#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints the second half of string
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i, count = strlen(str);

	if (count%2 == 0)
	{
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	}
       	else 
	{
		for (i = (count - 1) / 2 + 1; i < count; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
