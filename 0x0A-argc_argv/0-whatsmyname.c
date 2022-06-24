#include <stdio.h>

/**
 * main - prints its name and a new line
 *
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 1 always
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
