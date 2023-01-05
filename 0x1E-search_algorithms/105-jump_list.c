#include "search_algos.h"
#include <math.h>


/**
 * jump_list - searches for a value ina sorted list of integers
 * using jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node or NULL
 *	if head is NULL or value is not in list
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *step = list, *prev = NULL;
	int i, step_int = sqrt(size);

	if (!list)
		return (NULL);

	if (list->n == value)
		return (list);

	while (step->n < value)
	{
		prev = step;
		for (i = 0; i < step_int && step->next; i++)
			step = step->next;

		printf("Value checked at index [%ld]", step->index);
		printf(" = [%d]\n", step->n);
		if (!step->next)
			break;
	}

	printf("Value found between indexes [%ld]", prev->index);
	printf(" and [%ld]\n", step->index);
	while (prev->n < value && prev != step)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
		return (prev);

	return (NULL);
}
