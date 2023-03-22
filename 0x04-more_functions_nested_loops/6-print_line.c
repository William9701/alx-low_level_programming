#include <stdio.h>
#include "main.h"

/**
 * print_line - print dash lines
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
}
