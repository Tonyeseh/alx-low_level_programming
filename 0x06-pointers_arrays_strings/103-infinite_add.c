#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 *
 * @str: string to be calculated
 *
 * Return: 0 or length of string
 *
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * infinite_add - adds two numbers passedas strings
 *
 * @n1: first number
 * @n2: second number
 * @r: result number
 * @size_r: size of the array r
 *
 * Description: all numbers are passed and returned as strings
 *
 * Return: the string r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1, len_n2, hold, larger;

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	hold = 0;
	larger = len_n1;
	/* checks if n1 is greater than n2 */
	if (len_n2 > len_n1)
		larger = len_n2;

	/* checks if the size of the buffer is less than the resut of n1 + n2 */
	if (size_r < larger + 2)
		return (0);

	larger++, len_n1--, len_n2--;
	r[larger] = '\0';
	while (larger > 0)
	{
		if ((len_n1) < 0 && (len_n2) < 0 && hold == 0)
			break;
		else if ((len_n1) < 0 && (len_n2) < 0 && hold > 0)
			r[larger - 1] = hold + '0';
		else if ((len_n2) < 0)
		{
			r[larger - 1] = (((n1[len_n1] - '0') + hold) % 10) + '0';
			hold = ((n1[len_n1] - '0') + hold) / 10;
		}
		else if ((len_n1) < 0)
		{
			r[larger - 1] = (((n2[len_n2]  - '0') + hold) % 10) + '0';
			hold = ((n2[len_n2] - '0') + hold) / 10;
		}
		else
		{
			r[larger - 1] = ((n1[len_n1] - '0' + (n2[len_n2] - '0') + hold) % 10) + '0';
			hold = ((n2[len_n2] - '0') + (n1[len_n1] - '0') + hold) / 10;
		}
		larger--, len_n1--, len_n2--;
	}
	return (r + larger);
}
