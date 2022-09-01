#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */

/* Standard Lib */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Struct Declaration */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* My Function */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);


#endif
