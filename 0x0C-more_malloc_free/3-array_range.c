#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 *
 * @min: an integer to min value of array
 * @max: an integer to max value of array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min < max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
