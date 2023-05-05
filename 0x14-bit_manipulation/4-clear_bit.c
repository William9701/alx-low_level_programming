#include <stdio.h>
#include "main.h"


/**
 * clear_bit - clear_bit
 * @n: input
 * @index: index
 * Return: 1 on suc and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
