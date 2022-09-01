#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlsitint_t list
 *
 * @head: head pointer to a dlistint_t list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!h)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = new_node;
		new_node->prev = h;
	}
	return (new_node);
}
