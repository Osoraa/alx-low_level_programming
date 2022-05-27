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
	size_t len = listint_len(*head);

	if (idx >= len || (int) idx < 0)
		return (NULL);

	return (insert_intnode_at_index(*head, idx, n));
}

/**
 * insert_nodeint_at_index - Inserts a listint_t node in a listint_t list.
 *
 * @head: Double Pointer to the list's beginning.
 * @idx: Index at where the new node should be inserted.
 * @n: Value for data field of new node.
 *
 * Return: Node's address or NULL on failure.
 */
listint_t *insert_intnode_at_index(listint_t *head, size_t idx, int n)
{
	listint_t *node;

	if (idx)
		return (insert_intnode_at_index(head->next, idx - 1, n));

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = head;
	head = node;

	return (node);
}

/**
 * listint_len - Calculates the number of nodes in a linked list.
 * @h: Linked list's head.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (1 + listint_len(h->next));
}
