#include "lists.h"

/**
 * listint_len - function that calculates the number
 * of elements in a linked list_t list.
 *
 * @h: list
 * Return: the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (0);
	while  (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
