#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * of money
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints 0 if the argument passed is negative
 *
 * Return: 1 if the aguments passed is not 2
 * 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, change, num;
	int cents[] = {25, 10, 5, 2, 1};

	i = num = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (i < 5 && change > 0)
	{
		while (change >= cents[i])
		{
			change -= cents[i];
			num++;
		}
		i++;
	}
	printf("%d\n", num);
	return (0);
}
