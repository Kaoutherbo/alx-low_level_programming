#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *rot13(char *s)
{
	int i, j;
	char *str1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *str2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; str1[j] != '\0' ; j++)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
		}
	}
	return (s);
}
