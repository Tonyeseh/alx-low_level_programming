#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string to be capitalized
 *
 * Return: pointer to the string
 */

char *string_toupper(char *str)
{
	int i, range;

	i = 0;
	range = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - range;
		}
		i++;
	}
	return (str);
}
