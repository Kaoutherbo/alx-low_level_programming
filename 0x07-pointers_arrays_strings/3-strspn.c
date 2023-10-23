#include "main.h"
#include <string.h>

/**
 * _strspn -  function that concatenates two strings.
 * @s: Prameter to be checked
 * @accept: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
