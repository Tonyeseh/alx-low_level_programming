#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the pointer of the first node of a listint_t list
 *
 * Return: the head node's data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	if (tmp != NULL)
	{
		*head = (*head)->next;
		n = tmp->n;
		free(tmp);
		return (n);
	}
	return (0);
}
