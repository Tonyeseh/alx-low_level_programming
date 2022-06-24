#include "main.h"

/**
 * _isdigit - checks if a int c passed is a digit in ascii standard
 *
 * @c: int passed
 *
 * Description: returns 1 if c passed is a digit and 0 if it's not
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
