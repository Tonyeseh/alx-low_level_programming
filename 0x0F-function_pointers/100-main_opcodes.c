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
	int (*main_ptr)(int, char **);
	unsigned char code;

	main_ptr = main;
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

	for (i = 0; i < bytes; i++)
	{
		code = *(unsigned char *)main_ptr;
		printf("%.2x ", code);
		if (i == bytes - 1)
			break;
		printf(" ");
		main_ptr++;
	}
	printf("\n");
	return (0);
}
