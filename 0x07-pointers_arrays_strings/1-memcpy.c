#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory to copy bytes to
 * @src: memory to copy bytes from
 * @n: number of byes to copy from src to dest
 *
 * Return: dest\
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
