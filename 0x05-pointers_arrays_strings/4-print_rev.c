#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - print_rev
 * @s: charcter to be teste
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
