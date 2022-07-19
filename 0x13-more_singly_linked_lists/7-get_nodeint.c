#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the first node of a listint_t list
 * @index: the index of the node
 *
 * Description: index of the node starts at 0
 *
 * Return: NULL if node does not exist or the address of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, count;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	count = 0;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	if (index > count)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);

}
