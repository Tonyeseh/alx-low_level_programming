#include "lists.h"

/**
 * print_dlisint - prints all the elemnts of a dlistint_t list
 *
 * @h - head of a dlistint_t list
 *
 * Return: Number of nodes in a dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
