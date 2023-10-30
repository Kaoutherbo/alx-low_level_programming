#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: array of string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, count;
	char *newStr;

	if (str == NULL)
		return (NULL);
	count = strlen(str);
	newStr = (char *)malloc(sizeof(char) * count + 1);
	if (newStr == NULL)
		return (NULL);
	for (i  = 0 ; i < count; i++)
		newStr[i] = str[i];
	return (newStr);
}
