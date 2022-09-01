#include "lists.h"

/**
 * sum_dlistint - sums all the data(n) of a dlistint_t list
 *
 * @head: head of a dlistint_t list
 *
 * Return: 0 if the list is empty or sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
