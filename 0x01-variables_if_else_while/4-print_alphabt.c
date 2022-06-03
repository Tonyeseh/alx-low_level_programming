#include <stdio.h>
/**
 * main - program starts here
 *
 * displays all alphabets lower case save q and e
 *
 * Return: 0
 */

int main(void) {
	int c = 'a';
    
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
	}
    putchar('\n');
    return 0;
}
