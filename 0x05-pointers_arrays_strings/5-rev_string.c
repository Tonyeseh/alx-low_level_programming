#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, k;

	i = 0;
	while (s[i])
	{
		i++;
	}

	j = i - 1;
	for (k = 0; k <= j / 2; k++)
	{
		tmp = s[k];
		s[k] = s[j - k];
		s[j - k] = tmp;
	}
}
