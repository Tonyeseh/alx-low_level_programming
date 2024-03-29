#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrives a value associated with a key
 *
 * @ht: hash table otu want to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the element,
 *	or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_list;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hash_list = ht->array[index];

	while (hash_list)
	{
		if (!strcmp(hash_list->key, (char *)key))
			return (hash_list->value);
		hash_list = hash_list->next;
	}
	return (NULL);
}
