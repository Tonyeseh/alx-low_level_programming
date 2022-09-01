#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if all things go well
 * 1 if the number of arguments is not the correct one
 * 2 if teh number of bytes are negative
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *code_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	code_ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", code_ptr[i]);
			break;
		}
		printf("%02hhx ", code_ptr[i]);
	}
	return (0);
}
