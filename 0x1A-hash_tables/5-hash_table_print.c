#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node_list;
	unsigned long int i;
	int comma = 0;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node_list = ht->array[i];
		while (node_list != NULL)
		{
			if (comma == 1)
				printf(", ");

			printf("'%s': '%s'", node_list->key, node_list->value);
			node_list = node_list->next;
			comma = 1;
		}
	}
	printf("}\n");
}
