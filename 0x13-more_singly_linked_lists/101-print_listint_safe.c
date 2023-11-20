#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n_tmp = NULL;
	const listint_t *l = NULL;
	size_t count = 0;
	size_t n_new;

	n_tmp = head;
	while (n_tmp)
	{
		printf("[%p] %d\n", (void *)n_tmp, n_tmp->n);
		count++;
		n_tmp = n_tmp->next;
		l = head;
		n_new = 0;
		while (n_new < count)
		{
			if (n_tmp == l)
			{
				printf("-> [%p] %d\n", (void *)n_tmp, n_tmp->n);
				return (count);
			}
			l = l->next;
			n_new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
