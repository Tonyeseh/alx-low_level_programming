#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including null byte (\0)
 * to a destination
 *
 * @dest: destination for string to be copied
 * @src: source of string
 *
 * Return: char *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
