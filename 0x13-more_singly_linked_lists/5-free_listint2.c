#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the first node of a lintint_t list
 *
 * Description: frees a listint_t list and sets head to NULL
 *
 * Return: Nothing
 */


void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *node;

	if (*head != NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			node = tmp;
			tmp = tmp->next;
			free(node);
		}
		*head = NULL;
	}

}
