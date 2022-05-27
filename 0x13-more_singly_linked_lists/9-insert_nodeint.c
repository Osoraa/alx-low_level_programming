#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a listint_t node in a listint_t list.
 *
 * @head: Double pointer to the list's beginning.
 * @idx: Index at where the new node should be inserted.
 * @n: Value for data field of new node.
 *
 * Return: Node's address or NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	if (!(*head) || (int) idx < 0)
		return (NULL);

	if (idx)
		return (insert_nodeint_at_index(&((*head)->next), --idx, n));

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
