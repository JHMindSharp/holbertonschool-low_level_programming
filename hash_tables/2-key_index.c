#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key string.
 * @size: Size of the hash table's array.
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table.
 *
 * Description: This function calculates the index of a key
 * within the hash table's array based on its hash value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val, index;

	hash_val = hash_djb2(key);
	index = hash_val % size;

	return (index);
}
