#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Usage - calc num1 opeerator num2
 * operation s one of the following +, -, *, %, /
 *
 * Return: 98 when number of argument is wrong
 * 99 when operator is none of the above
 * 100 if user tries to divide (/ or %) by 0.
 *
 */


int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_ptr = get_op_func(argv[2]);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func_ptr(num1, num2));
	return (0);

}
