#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 *
 * @head: pointer to the head of listint_t
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int num;

	if ((*head) == NULL)
		return (0);
	num = (*head)->n;
	*head = (*head)->next;
	free(p);
	return (num);
}
