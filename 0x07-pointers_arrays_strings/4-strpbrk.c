#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes
 *
 * @s: string to be searched in
 * @accept: string to be found
 *
 * Return: NULL or pointer to byte in s that matches one btye in acce[t
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return ((s + i));
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
