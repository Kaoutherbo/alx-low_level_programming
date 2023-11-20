#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list.
 * Return: address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *SLOW = head;
	listint_t *FAST = head;

	if (!head)
		return (NULL);

	while (SLOW && FAST && FAST->next)
	{
		FAST = FAST->next->next;
		SLOW = SLOW->next;
		if (FAST == SLOW)
		{
			SLOW = head;
			while (SLOW != FAST)
			{
				SLOW = SLOW->next;
				FAST = FAST->next;
			}
			return (FAST);
		}
	}

	return (NULL);
}
