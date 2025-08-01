#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * This function prints the key/value pairs in the hash table.
 * The output format is a list of key/value pairs,
 * where each pair is separated by a comma and a space.
 * The pairs are enclosed in curly braces.
 * If the hash table is empty, it prints an empty set of braces.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int first;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	first = 1;
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (first == 0)
				printf(", ");
			printf("\"%s\": \"%s\"", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}

	printf("}\n");
}
