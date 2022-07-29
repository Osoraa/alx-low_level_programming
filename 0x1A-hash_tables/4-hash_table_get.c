#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value from a hashtable.
 *
 * @ht: Hashtable.
 * @key: Hash key.
 *
 * Return: Value found or NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	if (!(ht->array[index]))
		return (NULL);

	return (ht->array[index]->value);
}
