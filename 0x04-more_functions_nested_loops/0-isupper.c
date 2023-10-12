#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (isupper(c))
	return (1);
	else
	return (0); 
}
