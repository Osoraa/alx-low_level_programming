#include "lists.h"

/**
 * free_list - Frees a list-t.
 * @head: List beginning.
 *
 * Return: None.
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
