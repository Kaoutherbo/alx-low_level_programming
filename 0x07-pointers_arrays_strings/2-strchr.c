#include "main.h"
#include <string.h>

/**
 * _strchr -  function that locates a character in a string..
 * @c: Prameter to be checked
 * @s: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
