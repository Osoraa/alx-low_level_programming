#include "lists.h"

/**
 * list_len - Calculates number of elements in a linked list recursively.
 * @h: beginning of list.
 *
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (1 + list_len(h->next));
}
