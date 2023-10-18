#include "main.h"
#include <stdio.h>

/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: The string to be capitalize
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *str)
{
	int i, j;
	char spword[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		for (j = 0 ; j < 13 ; j++)
		{
			if (str[i] == spword[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
