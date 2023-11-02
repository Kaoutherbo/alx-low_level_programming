#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from n2 to concatenate
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, lenS1, lenS2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenS1 = strlen(s1);
	lenS2 = strlen(s2);
	if (n < lenS2)
		str = malloc(sizeof(char) * (lenS1 + n + 1));
	else
		str = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < lenS1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
