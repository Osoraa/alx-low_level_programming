#include "lists.h"

/**
 * add_node_end - Uses a recursive method in appending a new node.
 *
 * @head: List beginning.
 * @str: String to populate new node with.
 *
 * Return: Address of updated list or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	/* Recursive case to find end of list */
	if (*head)
		return (add_node_end(&((*head)->next), str));

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	/* Case whereby str is NULL */
	node->str = str == NULL ? NULL : strdup(str);
	node->len = str == NULL ? 0 : strlen(str);
	node->next = NULL;

	*head = node;	/* New node becomes end of list */

	return (node);
}
