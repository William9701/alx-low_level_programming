#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip_bits
 * @n: input
 * @m: input
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int d = n ^ m;

	while (d != 0)
	{
		count++;
		d &= d - 1;
	}

	return (count);
}
