#include "lists.h"

/**
 * sum_dlistint - getting the sum of all n in nodes
 *
 * @head: the head of the list
 * Return: the sum of all n in nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum = 0;

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
