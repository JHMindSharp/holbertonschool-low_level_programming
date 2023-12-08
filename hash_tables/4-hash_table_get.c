#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table.
 * @ht: The hash table to search into.
 * @key: The key string to search for.
 *
 * Return: The value associated with the key, or NULL if not found.
 *
 * Description: This function retrieves a value associated with a key in the
 * hash table. It searches through the table and returns the value if found,
 * otherwise, it returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
