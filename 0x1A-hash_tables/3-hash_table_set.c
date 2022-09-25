#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"


/**
 * check_replace_node - checks and replace node value if it already exits
 *
 * @head: pointer to linked list head
 * @key: key of the node
 * @value: value to add in node
 *
 * Return: 1 if it finds and replaces or 0 if it doesn't
 */

int check_replace_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp = *head;

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}


/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: value asociated with the key. Value must be duplicated
 *	and value can be an empty string
 *
 * Description: Incase of collision, add the new node at the beginning
 *		of the list
 *
 * Return: 1 if it succeeded, or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_dup, *key_dup;
	hash_node_t *hash_node;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (0);

	value_dup = strdup(value);
	key_dup = strdup(key);
	if ((value_dup == NULL) || (key_dup == NULL))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_replace_node(&ht->array[index], key, value))
		return (1);

	/* Creating element  and inserting it in array*/
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = key_dup;
	hash_node->value = value_dup;
	hash_node->next = ht->array[index];

	ht->array[index] = hash_node;

	return (1);
}
