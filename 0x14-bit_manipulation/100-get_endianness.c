#include <stdio.h>
#include "main.h"

/**
 * get_endianness - get_endianness
 * Return: 0
 */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	if (*p == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
