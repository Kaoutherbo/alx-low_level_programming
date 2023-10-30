#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int i, count1, count2;
	char *concatStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count1 = strlen(s1);
	count2 = strlen(s2);
	concatStr = (char *)malloc(sizeof(char) * (count1 + count2) + 1);
	if (concatStr == NULL)
		return (NULL);
	for (i = 0 ; i < count1; i++)
		concatStr[i] = s1[i];
	for (i = 0 ; i < count2; i++)
		concatStr[count1 + i] = s2[i];
	return (concatStr);
}

