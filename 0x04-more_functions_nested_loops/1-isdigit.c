#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character.
 * @c: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
	int result;

	if (isdigit(c))
		result = 1;
	else
		result = 0;
	return (result);
}
