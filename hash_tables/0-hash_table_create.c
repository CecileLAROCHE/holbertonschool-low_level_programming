#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array to be created
 * Return: a pointer to the newly created hash table,
 * or NULL if an error occurred
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *ht = calloc(1, sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = array;

	return (ht);
}

