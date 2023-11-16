#include "lists.h"

void _print_first(void)__attribute__ ((constructor));

/**
 * _print_first - function that runs before the main function
 *
 * Return: void
 */

void _print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
