#include "lists.h"

/**
 * print_list - this function that prints all the elements of a list_t list.
 *
 * @h: list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
