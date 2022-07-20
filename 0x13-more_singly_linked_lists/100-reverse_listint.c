#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to pointer to the first node on the list
 *
 * Description: not allowed to use malloc, free, or arrays
 * Not allowed to use more than one loop
 * Maximum of two variables
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode, *nextnode;

	if (head == NULL)
		return (NULL);
	nextnode = currentnode = *head;
	*head = NULL;
	while (currentnode != NULL)
	{
		nextnode = currentnode->next;
		currentnode->next = *head;
		*head = currentnode;
		currentnode = nextnode;
	}
	return (*head);
}
