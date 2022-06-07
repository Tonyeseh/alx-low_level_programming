#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: a character with type int
 *
 * Description:
 * This function takes a character and return 1 if it lowercase
 * and 0 otherwise
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
