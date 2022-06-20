#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @n: number of times to write the byte in memory
 * @b: byte to write
 * @s: memory to b to
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
