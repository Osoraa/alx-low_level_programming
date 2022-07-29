#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hashtable.
 * 
 * @ht: Pointer to hashtable.
 * @key: Hash key.
 * @value: Hash value.
 * 
 * Return: 1 on successful add, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t hash_key;
	hash_node_t *node, *location;

	if (!ht || !key)
		return (0);

	hash_key = key_index((unsigned char *) key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	location = ht->array[hash_key];
	node->next = location;
	location = node;

	return (1);
}
