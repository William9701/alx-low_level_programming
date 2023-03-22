#include <stdio.h>
#include "main.h"

/**
 * more_numbers - more numbers
 * Return: void
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar(i / 10 + '0');
			}
				putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
