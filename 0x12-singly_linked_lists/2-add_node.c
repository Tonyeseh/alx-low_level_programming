#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to a pointer that stores head
 * @str: str to be put in the struct
 *
 * Description: str is duplicated with strdup
 *
 * Return: address of the new elemetn, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dup_str;
	int len;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dup_str;
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (temp);
}
