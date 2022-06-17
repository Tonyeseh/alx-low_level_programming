#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @str: string to be encoded
 *
 * Return: string encoded
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = ((((str[i] - 65) + 13) % 26) + 65);
				i++;
				continue;
			}
			str[i] = ((((str[i] - 97) + 13) % 26) + 97);
			i++;
		}
		i++;
	}
	return (str);
}
