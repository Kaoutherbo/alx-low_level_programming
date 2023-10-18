#include "main.h"
#include <ctype.h>

/**
 * string_toupper - function that changes lowercase letters to uppercase.
 * @str: The string to be copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *str)
{
	char *c = str;

	while (*c != '\0')
	{
		if (islower(*c))
		{
			*c = toupper(*c);
		}
		c++;
	}
	return (str);
}
