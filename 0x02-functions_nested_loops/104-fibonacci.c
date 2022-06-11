#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int frnum1 = 0, bknum1 = 1, frnum2 = 0, bknum2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bknum1, bknum2);
	for (count = 2; count < 98; count++)
	{
		if (bknum1 + bknum2 > LARGEST || frnum2 > 0 || frnum1 > 0)
		{
			hold1 = (bknum1 + bknum2) / LARGEST;
			hold2 = (bknum1 + bknum2) % LARGEST;
			hold3 = frnum1 + frnum2 + hold1;
			frnum1 = frnum2, frnum2 = hold3;
			bknum1 = bknum2, bknum2 = hold2;
			printf("%lu%010lu", frnum2, bknum2);
		}
		else
		{
			hold2 = bknum1 + bknum2;
			bknum1 = bknum2, bknum2 = hold2;
			printf("%lu", bknum2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
