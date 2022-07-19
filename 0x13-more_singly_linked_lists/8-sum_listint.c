#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all of the data (n) of a listint_t linked list
 *
 * @head: pointer to the first node of a listint_t list
 *
 * Return: sum of all th data (n) or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
