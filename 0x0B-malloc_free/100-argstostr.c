#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: arguments count
 * @av: arguments vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		count += strlen(av[i]);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	return (str);
}
