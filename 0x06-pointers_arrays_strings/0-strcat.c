#include "main.h"

/**
 * _strcat - concatenates tow strings
 *
 * @dest: destination string
 * @src: src string
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int len, i, j;

	len = i = j = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
		if (src[j] == '\0')
		{
			dest[len] = '\0';
		}
	}
	return (dest);
}
