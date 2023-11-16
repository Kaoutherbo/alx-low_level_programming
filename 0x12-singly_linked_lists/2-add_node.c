#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: pointer to first element in list
 * @str: a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
