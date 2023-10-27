#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: The string to be concatenate
 * @src: The string to be concatenate
 * @n: The size of the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
