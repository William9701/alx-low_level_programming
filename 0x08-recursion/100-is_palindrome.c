#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: input
 * Return: lenght of sting
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - compare
 * @s: input
 * @n1: smalest
 * @n2: big num
 * Return: 0
 */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - is_palindrome
 * @s: input
 * Return: 1 if is palidrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
			return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}

