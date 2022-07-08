#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a doubly linked list.
 *
 * @head: Pointer to List beginning.
 * @index: Index at which to remove node.
 *
 * Return: 1 if seccessful, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (index >= dlistint_len(*head))
		return (-1);

	if (index)
		return (delete_dnodeint_at_index(&((*head)->next), index - 1));

	if ((*head)->prev)
	{
		(*head)->prev->next = (*head)->next;
		(*head)->next->prev = (*head)->prev;
	} else 
	{
		(*head)->next->prev = NULL;
		*head = (*head)->next;
	}

	return (1)
}

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: List beginning.
 *
 * Return: Integer representing the length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);

	return (1 + dlistint_len(h->next));
}
