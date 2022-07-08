#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string to be printed between th strings
 * @n: number of strings ppassed into the function
 *
 * Description: if separator is NULL don't print
 * if one of the string is NULL print nil instead
 *
 * Return: Nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list words;
	char *str;

	va_start(words, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(words, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(words);
}
