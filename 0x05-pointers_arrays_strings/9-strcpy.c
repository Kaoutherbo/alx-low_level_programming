#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies the string pointed
 * @dest: The string to print
 * @src: The string to be copied
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
