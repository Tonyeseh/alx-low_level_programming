#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to first node of a listint_t
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *node;

	tmp = head;
	if (head != NULL)
	{
		while (tmp != NULL)
		{
			node = tmp;
			tmp = tmp->next;
			free(node);
		}
	}
}
