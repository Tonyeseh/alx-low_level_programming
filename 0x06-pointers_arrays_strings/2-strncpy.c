#include "main.h"

/**
 * _strncpy - copies n number of bytes from src to dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to destnationstion string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j, i;

	i = j = 0;

	while (i < n)
	{
		if (src[j] == '\0')
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[j];
			j++;
		}
		i++;
	}
	return (dest);
}
