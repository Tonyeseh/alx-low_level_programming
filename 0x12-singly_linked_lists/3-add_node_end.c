#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @str: str to be added
 * @head: pointer ot the pointer that stores the address of head
 *
 * Description: str is duplicated with strdup
 *
 * Return: the address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; dup_str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
