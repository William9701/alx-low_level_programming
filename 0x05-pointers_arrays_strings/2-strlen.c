#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - _strlen
 * @s: letter to be checked with
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
