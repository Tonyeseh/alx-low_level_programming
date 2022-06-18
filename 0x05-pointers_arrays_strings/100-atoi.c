#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 *
 * Return: integer number.
 */

int _atoi(char *s)
{
	int num, sign, i;
	
	num = i = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num  = (num * 10) + (s[i] - '0');

			if (s[i + 1] < '0' || s[i] > '9')
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
