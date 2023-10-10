#include<ctype.h>
#include"main.h"

/**
 * _isalpha - cheks for alphabetic character
 * @c: parameter to be chacked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	int result;

	if (isalpha(c))
		result = 1;
	else
		result = 0;
	return (result);
}
