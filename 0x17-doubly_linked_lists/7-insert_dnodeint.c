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

	if (idx <= size + 1)
	{
		if (idx == 0)
		{
			new_node = add_dnodeint(h, n);
		}
		else if (idx == size + 1)
		{
			new_node = add_dnodeint_end(h, n);
		}
		else
		{
			head = *h;
			while (i < (idx - 1))
			{
				head = head->next;
				i++;
			}
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = head->next;
			new_node->prev = head;
			head->next->prev = new_node;
			head->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
