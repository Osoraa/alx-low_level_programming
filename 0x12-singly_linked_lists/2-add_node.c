#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a linked list.
 *
 * @head: List beginning.
 * @str: String to populate new node with.
 *
 * Return: Address of updated list or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	/* Case where str is NULL */
	node->str = str == NULL ? NULL : strdup(str);
	node->len = str == NULL ? 0 : strlen(str);

	/* Make the new node the list head. */
	node->next = *head;
	*head = node;

	return (node);
}
