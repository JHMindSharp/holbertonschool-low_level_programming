#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Description: This function deallocates memory used by the hash table,
 * freeing each node and the array itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *next_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next_node = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
