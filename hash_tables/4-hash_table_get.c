#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: the key to look for
 * Return: the value associated with the key, or NULL if key not found
 * This function searches for the key in the hash table and returns
 * the corresponding value if found. If the key does not exist in the
 * hash table, it returns NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);


	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);

}

