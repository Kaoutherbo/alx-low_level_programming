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
	int i, k = 0, count = 0;
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
		strcpy(&str[k], av[i]);
		k += strlen(av[i]);
		str[k] = '\n';
		k++;
	}
	return (str);
}
