#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: address of first integer to be swapped
 * @b: address of second integer to be swapped
 *
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *a;

}
