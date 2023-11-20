#include "lists.h"

/**
 * free_listint - procedure that frees a list_t list.
 *
 * @head: pointer to the first element in the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
