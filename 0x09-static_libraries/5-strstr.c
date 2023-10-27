#include "main.h"
#include <string.h>

/**
 * _strstr - function that copies memory area.
 * @haystack: Prameter to be checked
 * @needle: Prameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
