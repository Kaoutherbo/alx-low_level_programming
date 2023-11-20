#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer.
 * Return: number of elements in the free list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int dff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dff = *h - (*h)->next;
		if (dff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
