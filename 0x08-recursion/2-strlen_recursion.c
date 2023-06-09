#include "main.h"

/**
 * _strlen_recursion - _strlen_recursion
 * @s: input
 * Return: 0
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	if (*s >= 'a' || *s <= 'z')
		return (1 + _strlen_recursion(s + 1));
	return (_strlen_recursion(s + 1));
}
