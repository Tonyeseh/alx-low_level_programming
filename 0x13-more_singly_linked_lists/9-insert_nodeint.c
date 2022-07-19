#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @idx: index of the list where the new node should be added
 * @head: pointer to the pointer of the first node
 * @n: integer to be inserted in the new node
 *
 * Description: index starts at 0
 * if it is not possible to add the new node at idx, do not add the new node
 * and return NULL
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int count, i;

	tmp = *head;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (*head == NULL)
		return (NULL);

	if (idx > count)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	
	new->next = tmp->next;
	new->n = n;
	tmp->next = new;

	return (new);
}
