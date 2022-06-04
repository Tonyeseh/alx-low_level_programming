#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - programs starts here
 *
 * program prints checks if the last digit of an int n is greater than 5,
 * less than 6 and not 0 and
 * is 0 and prints different messages depending on the value of the last digit.
 *
 * Return: 0.
 */

int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;

	if (lastNum > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastNum);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastNum);
	}

	return (0);
}
