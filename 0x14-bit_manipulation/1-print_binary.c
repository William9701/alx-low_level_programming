#include <stdio.h>
#include "main.h"

/**
 * print_binary - print_binary
 * @n: n
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 7);
	unsigned long int i;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while ((m & n) == 0 && m != 0)
	{
		m >>= 1;
	}

	for (i = 0; i < sizeof(unsigned long int) * 8 && m != 0; i++)
	{
		if ((m & n) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		m >>= 1;
	}
}
