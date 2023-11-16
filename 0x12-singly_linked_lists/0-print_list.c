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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
