#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers
 * Return: alwys return 0
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
}
