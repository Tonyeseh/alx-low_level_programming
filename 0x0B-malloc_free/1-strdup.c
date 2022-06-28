#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies the string to another momery space in the heap section
 *
 * @str: string passed
 *
 * Return: NULL or pointer to the string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	len = 0;
	if (!(str == NULL))
	{
		len = strlen(str);
	}
	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ptr[i] = str[i];
	}

	*(ptr + len) = '\0';
	return (ptr);
}
