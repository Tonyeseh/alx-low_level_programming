#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len, index;

	index = 0;
	len = lenstr(s);

	return (check_palindrome(s, len, index));
}

/**
 * lenstr - finds the length of a string
 *
 * @s: string
 *
 * Return: length of string
 */

int lenstr(char *s)
{
	if (*s)
	{
		return (1 + lenstr(s + 1));
	}
	else
	{
		return (0);
	}
}


/**
 * check_pandlindrome - checks if a string is a palindrome
 *
 * @s: string
 * @len: length of string
 * @index: starts from 0
 *
 * Return: 1 s is a palindrome and 0 if not
 */

int check_palindrome(char *s, int len, int index)
{
	if (index >= len)
	{
		return (1);
	}
	if (s[index] == s[len - 1])
	{
		return (check_palindrome(s, len - 1, index + 1));
	}
	else
	{
		return (0);
	}
}
