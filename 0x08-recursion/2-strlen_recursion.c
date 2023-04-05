#include "main.h"

/**
 * _strlen_recursion - _strlen_recursion
 * @s: input
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}

	return (lent);
}
