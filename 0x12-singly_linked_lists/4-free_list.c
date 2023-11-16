#include "lists.h"

/**
 * free_list - procedure that frees a list_t list.
 *
 * @head: pointer to the first element in the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
