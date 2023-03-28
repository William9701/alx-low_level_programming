#include "main.h"
#include <stdio.h>

/**
 * rev_string - rev_string
 * @s: the string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, index = 0;

	char tp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tp;
	}
}

