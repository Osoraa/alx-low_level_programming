#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list.
 *
 * @head: Beginning of the linked list.
 * @index: index of the node to get starting at zero.
 *
 * Return: Node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len = listint_len(head);;

	if (!head || index > len - 1)
		return (NULL);

	return (get_intnode_at_index(head, index));
}

listint_t *get_intnode_at_index(listint_t *head, size_t index)
{
	if (!index)
		return (head);

	return (get_intnode_at_index(head->next, --index));
}
