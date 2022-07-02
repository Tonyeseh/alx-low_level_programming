#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings to concatenate form s2 to s1
 *
 * Return: NULL or pointer to new string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, index;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = n;
	for (index = 0; s1[index]; index++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		ptr[len] = s1[index];
		len++;
	}
	for (index = 0; s2[index] && index < n; index++)
	{
		ptr[len] = s2[index];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
