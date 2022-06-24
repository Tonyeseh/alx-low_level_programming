#include "main.h"

/**
 * _isupper - tells if the character passed is an uppercase letter
 *
 * @c: the character passed
 *
 * Description: returns 1 if the cahracter is an uppercase letter
 * and 0 if it is a lowercase character
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
