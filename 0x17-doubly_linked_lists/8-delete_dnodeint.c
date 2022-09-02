#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: pointer to head of a dlistint_t list
 * @index: index of the node that should be deleted:: Index starts at 0
 *
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int size = 0, i = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	if (size >= index && *head)
	{
		h = *head;
		while (i < index)
		{
			h = h->next;
			i++;
		}
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
		}
		else if (index == size)
			h->prev->next = NULL;
		else
		{
			h->prev->next = h->next;
			h->next->prev = h->prev;
		}
		free(h);
		return (1);
	}
	return (-1);
}
