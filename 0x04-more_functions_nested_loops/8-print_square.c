#include <stdio.h>
#include "main.h"

/**
 * print_square - print squares
 * @size: number to be checked with
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			putchar('#');
		}
		putchar('#');
		putchar('\n');
	}
}
