#include "main.h"

/**
 * _strncat - concatenates two strings with most n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Return: pointer to destionation string
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, full, len;

	len = j = full = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (n > full)
	{
		if (src[j] == '\0')
		{
			dest[len] = '\0';
		}
		else
		{
			dest[len] = src[j];
			j++;
		}
		len++;
		full++;
	}
	return (dest);
}
