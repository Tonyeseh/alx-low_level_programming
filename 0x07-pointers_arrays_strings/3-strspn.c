#include "main.h"

/**
 * _strspn - finds the number of bytes in s that are in accept
 * stops when it meets a character not in accept
 *
 * @s: string
 * @accept: the strings to be accepted
 *
 * Return: number of bytes only from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (i);
			}
			j++;
		}
	}
	return (0);
}
