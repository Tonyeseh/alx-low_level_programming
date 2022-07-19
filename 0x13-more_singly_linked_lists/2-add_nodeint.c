#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the befinning of a listint_t list
 *
 * @h: pointer to the the pointer that stores the first
 * node of a listint_t list
 * @n: integer to be added to the node
 *
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
