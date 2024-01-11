#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 * @head: head of the list
 * @index: the index to get the dnodeint from
 * Return: the node in that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	curr = head;

	while (index > 0 && curr)
	{
		index--;
		curr = curr->next;
	}
	return (curr);
}
