#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: pointer to buffer
 * @size: size of buffer
 *
 * Description: prints the conents size bytes of the buffer pointed by b
 * output 10bytes per line
 * Each line starts with the first byte of the line in hexadecimal(8 chars)
 * starting with 0
 * Each line shows the hexadecimal content(2 chars) of the buffer, 2bytes
 * at a time seperated by space
 * Each line shows the content of the buffer. If the byte is a printtable
 * charcter print character if not print .
 * Each line ends with a new line
 * If size is 0 or less the output should be new line only
 *
 * Return: Nothing
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	i = 0;
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		k = i;

		for (j = 0; j < 10; j++, i++)
		{
			if (i < size)
				printf("%02x", b[i]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; k < i && k < size && j < 10; j++, k++)
		{
			if (b[k] >= ' ' && b[k] <= '~')
				printf("%c", b[k]);
			else
				printf(".");
		}
		if (size > i)
			printf("\n");
	}
	printf("\n");
}
