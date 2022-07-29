#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hashtable.
 *
 * @ht: Hashtable.
 * @key: Hash key.
 * @value: Hash value.
 *
 * Return: 1 on successful add, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *node;

	/* Validate input */
	if (!ht || !key || !value)
		return (0);

	/* Get key index */
	index = key_index((unsigned char *) key, ht->size);

	/* Create hash node */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	/* Populate node with values */
	node->key = strdup(key);
	node->value = strdup(value);

	/* Insert node in hashtable */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
