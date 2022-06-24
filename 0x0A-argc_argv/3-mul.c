#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Descriptin: prints the product of two numbers followed by a new line
 * prints error if there are no 2 arguments
 *
 * Return: 0 if 2 number are passed and 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1])) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
