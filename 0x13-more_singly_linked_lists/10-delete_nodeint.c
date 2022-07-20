#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 *
 * @head: pointer to pointer to the first node of a listint_t list
 * @index: index of the node that should be deleted
 *
 * Description: Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int len;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	else
	{
		tmp = *head;
		len = 0;
		while (tmp)
		{
			len++;
			tmp = tmp->next;
		}
		if (index > len - 1)
			return (-1);

		tmp = *head;
		for (len = 0; len < index - 1; len++)
			tmp = tmp->next;

		node = tmp->next;
		tmp->next = (tmp->next)->next;
		free(node);
	}
	return (1);
}
