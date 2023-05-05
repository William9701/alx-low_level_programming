#include <stdio.h>
#include "main.h"

/**
 * set_bit - set_bit
 * @n: input
 * @index: position to set at
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;

	return (1);
}
