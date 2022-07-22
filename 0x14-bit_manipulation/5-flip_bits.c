#include "main.h"

/**
 * returns the number of bits you would need to flip to get from one number
 * to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: thenumber of bits flipped
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int nm;

	nm = n ^ m;
	while (nm)
	{
		i += nm & 1;
		nm = nm >> 1;
	}
	return (i);
}
