#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string to be encoded
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i, j;
	char *string = "aeotlAEOTL";
	char *code = "4307143071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (string[j] != '\0')
		{
			if (str[i] == string[j])
			{
				str[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
