#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangles
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}

