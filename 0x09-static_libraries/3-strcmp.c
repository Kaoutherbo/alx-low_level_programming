#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: The string to be compare
 * @s2: The string to be compare
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
