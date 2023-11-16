#include "lists.h"

/**
 * list_len - function that calculates the number
 * of elements in a linked list_t list.
 *
 * @h: list
 * Return: the number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (0);
	while  (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
