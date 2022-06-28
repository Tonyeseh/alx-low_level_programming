#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argtostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Description: each argument is followed by a new line
 *
 * Return: NULL or pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = k = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	ptr = (char *)malloc((len + ac) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k++] = av[i][j];
		}
		ptr[k++] = '\n';
	}
	ptr[k++] = '\0';
	return (ptr);
}
