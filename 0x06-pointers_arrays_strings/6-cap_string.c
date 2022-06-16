#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string passed in
 *
 * Return: string s
 */

char *cap_string(char *str)
{
	int i, sym, range;

	i =  0;
	sym = 1;
	range = 'a' - 'A';
	while (str[i] != '\0')
	{
		if (sym == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - range;
			}
		}
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case ')':
			case '(':
			case '{':
			case '}':
				sym = 1;
				break;
			default:
				sym = 0;
		}
		i++;
	}
	return (str);
}
