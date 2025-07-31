#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to add
 * @value: the value associated with the key
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == "" || value == "")
		return (0);

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (ht->array[index])
	

}
