#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 *
 * @head: Pointer to list beginning
 * @n: Value of the new node
 *
 * Return: Address of new node or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (!(*head))
	{
		node->next = NULL;
	}
	else
	{
		(*head)->prev = node;
		node->next = *head;
	}
	*head = node;

	return (node);
}
