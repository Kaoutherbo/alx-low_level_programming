#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);

		nodes++;
		p = p->next;
	}
	return (nodes);
}
