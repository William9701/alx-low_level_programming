#include "main.h"

/**
 * _strlen_recursion - _strlen_recursion
 * @s: input
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i;
	int lent = 0;

	for (i = 0; s[i] != '\0'; i++)
		lent++;
	return (lent);
}
