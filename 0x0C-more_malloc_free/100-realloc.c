#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void pointer to allocate new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *oldPtr = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return (newPtr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	newPtr = malloc(new_size);
	if (!newPtr)
		return (NULL);
	for (i = 0; i < old_size; i++)
		newPtr[i] = oldPtr[i];
	free(ptr);
	return (newPtr);
}

