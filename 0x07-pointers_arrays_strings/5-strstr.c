#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 * haystack. the terminating null byes are not compared
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: NULL or pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');

}
