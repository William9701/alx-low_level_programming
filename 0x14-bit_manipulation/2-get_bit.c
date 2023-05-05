#include <stdio.h>
#include "main.h"

/**
 * get_bit - get_bit
 * @n: input
 * @index: index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
