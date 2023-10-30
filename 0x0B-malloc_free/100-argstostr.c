#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *newStr = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (strlen(av[ac]) + 1);
	newStr = (char *) malloc(sum + 1);
	if (newStr != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				newStr[j + temp] = av[k][j];
			newStr[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		newStr[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (newStr);
}
