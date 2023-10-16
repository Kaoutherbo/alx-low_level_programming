#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string, followed by a new line.
 * @str: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	int i;

	for( i = 0 ; str[i] != '\0' ; i++ )
		_putchar(str[i]);
	_putchar('\n');
}
