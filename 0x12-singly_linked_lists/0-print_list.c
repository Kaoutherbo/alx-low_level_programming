#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", p->len, p->str);

		nodes++;
		p = p->next;
	}
	return (nodes);
}
