#include <stdio.h>

/**
 * main - prints the number of arguments passed to this program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 1
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc);
	return (0);
}
