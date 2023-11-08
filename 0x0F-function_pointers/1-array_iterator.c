#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
