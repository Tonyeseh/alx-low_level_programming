#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @c: value of int
 *
 * Description: returns 1 if c is a letter, lower or uppercase and 0 otherwise
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
