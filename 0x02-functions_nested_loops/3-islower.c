#include<ctype.h>
#include "main.h"

/**
 * _islower - cheks for lowercase character
 * @c: parameter to be checked
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{	
	return (islower(c));
}
