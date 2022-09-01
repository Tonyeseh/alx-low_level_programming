#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 *
 * @h: head pointer to a dlistint_t list
 *
 * Return: number of elements in a dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
