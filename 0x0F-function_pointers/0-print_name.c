#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: name to be printed
 * @f: pointer to a function passed
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
