#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to head of a dlistint_t lsit
 * @idx: index of the list
 * @n: integer
 *
 * Return: address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head = *h;
	unsigned int size = 0, i = 0;

	while (head)
	{
		size++;
		head = head->next;
	}

	if (idx <= size)
	{
		new_node = malloc(sizeof(dlistint_t));
		head = *h;
		if (!new_node)
			return (NULL);
		new_node->n = n;
		while (i < idx)
		{
			i++;
			head = head->next;
		}
		if (size == 0)
		{
			new_node->prev = NULL;
			new_node->next = NULL;
			*h = new_node;
		}
		else if (size == idx)
		{
			new_node->next = NULL;
			new_node->prev = head;
			head->next = new_node;
		}
		else
		{
			new_node->next = head->next;
			new_node->prev = head;
			head->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
