#include <stdio.h>

/**
 * main - prints all arguments it recieves
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: all arguments including the first one is printed
 * prints only one per line and ends with a new line
 *
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
