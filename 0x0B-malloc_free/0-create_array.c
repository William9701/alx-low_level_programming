#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create_array
 * @size: size
 * @c: input
 * Return: NULL or *char
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
