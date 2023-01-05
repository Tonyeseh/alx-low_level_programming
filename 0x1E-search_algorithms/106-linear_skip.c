#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: a pointer on the first node where value is located
 *	or NULL if list NULL or value not present
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *step = list;

	if (!list)
		return (NULL);

	if (list->n == value)
		return (list);

	while (step->n < value && step->next)
	{
		prev = step;
		if (!step->express)
		{
			while (step->next)
				step = step->next;
			break;
		}
		step = step->express;
		printf("Value checked at index [%ld] = [%d]\n", step->index, step->n);
	}

	printf("Value found between indexes [%ld] ", prev->index);
	printf("and [%ld]\n", step->index);
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
