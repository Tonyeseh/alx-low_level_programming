#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: print result followed a new line
 * if no numver is passed return 0
 * if one of the number contains symbols not digits print Error and return 1
 * all numbers and the result are assumed to be stored in an int
 *
 * Return: 0 or 1
 */


int main(int argc, char *argv[])
{
	int result, i, j;

	result = 0;

	/* runs through the arguments passed except the name of program*/
	for (i = 1; i < argc; i++)
	{
		/*runs through each charcter of the arguments passed*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			/* checks if any charcter in the string is not an integer*/
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
