#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - slits a string into words
 *
 * @str: string
 *
 * Description: Words are seperated by spaces
 * each element of the array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 *
 * Return: NULL if str is NULL or empty or if function fails
 *	OR pointer to an array of strings
 */

char **strtow(char *str)
{
	char **tow, *strcopy, *tok;
	int i = 0, len = 1;

	if (str != NULL && *str)
	{
		strcopy = strdup(str);
		tok = strtok(strcopy, " ");
		while(tok)
		{
			len++;
			tok = strtok(NULL, " ");
		}
		free(strcopy);

		strcopy = strdup(str);
		tow = malloc(sizeof(char *) * len);
		if (tow != NULL)
		{
			tok = strtok(strcopy, " ");
			while (tok)
			{
				tow[i] = tok;
				tok = strtok(NULL, " ");
				i++;
			}
			return (tow);
		}
	}
	return (NULL);
}
