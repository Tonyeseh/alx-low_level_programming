#include "main.h"

/**
 * _abs - returns absolute value of nnumbers
 *
 * @n: the number to be changed to absolute value
 *
 * Return: the absolute value of a the number passed in
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	n = n * -1;
	return (n);
}
