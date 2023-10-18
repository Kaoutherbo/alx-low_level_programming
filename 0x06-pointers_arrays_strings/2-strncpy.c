#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string.
 * @dest: The string to be copy
 * @src: The string to be copy
 * @n: The size of the string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
