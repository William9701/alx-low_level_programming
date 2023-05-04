#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: b
 * Return: i
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			i <<= 1;
			i += (*b - '0');
			b++;
		}

	}
	return (i);
}
