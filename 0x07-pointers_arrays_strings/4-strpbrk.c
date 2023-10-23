#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @accept: Prameter to be checked
 * @s: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
