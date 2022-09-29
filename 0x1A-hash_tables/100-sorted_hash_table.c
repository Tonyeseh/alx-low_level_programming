#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 *
 * @size: size of array
 *
 * Return: pointer to the newly created hash table if it succeeded
 *	or return NULL if something goes wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}



/**
 * insert_node - adds node to the hash table sorted list
 *
 * @ht: hash table
 * @hash_node: hash node
 *
 * Return: Nothing
 */

void insert_node(shash_table_t *ht, shash_node_t *hash_node)
{
	shash_node_t *head = ht->shead;

	if (hash_node && ht)
	{
		if (!head || strcmp(hash_node->key, head->key) < 0)
		{
			ht->shead = hash_node;
			if (!head)
				ht->stail = hash_node;

			else
			{
				head->sprev = hash_node;
				hash_node->snext = head;
			}
		}
		else
		{
			while (head->snext && strcmp(hash_node->key, head->snext->key) > 0)
				head = head->snext;
			hash_node->sprev = head;
			if (!head->snext)
				ht->stail = hash_node;
			else
				head->snext->sprev = hash_node;
			hash_node->snext = head->snext;
			head->snext = hash_node;
		}
	}
}

/**
 * check_replace_node - checks and replace node value if it already exits
 *
 * @head: pointer to linked list head
 * @key: key of the node
 * @value: value to add in node
 *
 * Return: 1 if it finds and replaces or 0 if it doesn't
 */

int check_replace_node(shash_node_t *head, const char *key, const char *value)
{
	shash_node_t *tmp = head;

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
 * shash_table_set - adds an element to the hash table.
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
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_dup, *key_dup;
	shash_node_t *hash_node;

	if ((ht == NULL) || (key == NULL) || (key[0] == '\0'))
		return (0);

	value_dup = strdup(value);
	key_dup = strdup(key);
	if ((value_dup == NULL) || (key_dup == NULL))
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_replace_node(ht->array[index], key, value))
		return (1);

	/* Creating element and inserting it in array*/
	hash_node = malloc(sizeof(shash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = key_dup;
	hash_node->value = value_dup;
	hash_node->next = ht->array[index];

	ht->array[index] = hash_node;

	insert_node(ht, hash_node);

	return (1);
}

/**
 * shash_table_get - retrives a value associated with a key
 *
 * @ht: hash table otu want to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the element,
 *	or NULL if key couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *hash_list;

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


/**
 * shash_table_print - prints a shash_table_t using the sorted list.
 *
 * @ht: hash table
 *
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead;

	if (ht)
	{
		printf("{");
		while (tmp)
		{
			printf("%s: %s", tmp->key, tmp->value);
			if (tmp->snext)
				printf(", ");
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints a shash_table_t in reverse order.
 *
 * @ht: hash table
 *
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->stail;

	if (ht)
	{
		printf("{");
		while (tmp)
		{
			printf("%s: %s", tmp->key, tmp->value);
			if (tmp->sprev)
				printf(", ");
			tmp = tmp->sprev;
		}

		printf("}\n");
	}
}



/**
 * shash_table_delete - deletes a shash_table_t table.
 *
 * @ht: hash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp_node, *node;

	if (ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				tmp_node = node;
				node = node->next;
				free(tmp_node->value);
				free(tmp_node->key);
				free(tmp_node);
			}
		}
	free(ht->array);
	}
	free(ht);
}
