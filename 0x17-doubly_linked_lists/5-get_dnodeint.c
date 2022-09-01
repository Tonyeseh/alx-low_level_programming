#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 *
 * @head: head of a dlistint_t list
 * @index: index of the nth node
 *
 * Description: index starting from 0
 *
 * Return: NULL if node does not exist, or the address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head;

	while (h)
	{
		if (i == index)
			return (h);

		h = h->next;
		i++;
	}
	return (NULL);
}
