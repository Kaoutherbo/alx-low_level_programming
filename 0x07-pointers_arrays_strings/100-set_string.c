#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: Prameter to be checked
 * @to: Parameter to be checked
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void set_string(char **s, char *to)
{
*s = to;
}
