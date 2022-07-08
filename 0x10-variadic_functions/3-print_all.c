#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Description: in format c-char, i-integer, f-float, s-char *
 * if string is NULL, print (nil)
 * all other char should be ignored
 *
 * Return: Nothing
 *
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;

			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
