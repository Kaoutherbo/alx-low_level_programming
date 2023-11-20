#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 *
 * @head: pointer to the head element of list
 * @idx: the index of the list where the new node should be added
 * @n: number of new node
 * Return: pointer to the new list after insert
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *newNode;
	unsigned int  i = 0;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	p = *head;
	while (i != idx - 1 && p != NULL)
	{
		i++;
		p = p->next;
	}
	if (i == idx - 1 && p != NULL)
	{
		newNode->next = p->next;
		p->next = newNode;
		return (newNode);
	}
	return (NULL);
}
