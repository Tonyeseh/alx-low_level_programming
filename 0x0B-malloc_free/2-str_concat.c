#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL or pointer to concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, j;
	char *ptr;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (!(s1 == NULL && s2 == NULL))
	{
		for (i = 0; i < len1; i++)
		{
			*(ptr + i) = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			*(ptr + len1 + j) = s2[j];
		}
	}
	*(ptr + len1 + len2) = '\0';
	return (ptr);

}
