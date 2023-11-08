#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  function that prints a name
 *
 * @name: name to print
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
