#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to the first element in list
 * @n: a number
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (temp == NULL)
		*head = new_node;

	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		temp = new_node;
	}
	return (*head);
}
