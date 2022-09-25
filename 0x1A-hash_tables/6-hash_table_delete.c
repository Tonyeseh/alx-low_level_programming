#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_node, *node_tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array != NULL)
		{
			node_tmp = ht->array[i];
			while (node_tmp != NULL)
			{
				hash_node = node_tmp;
				node_tmp = node_tmp->next;
				free(hash_node->value);
				free(hash_node->key);
				free(hash_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
