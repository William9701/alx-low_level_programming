#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - _realloc
 * @old_size: input
 * @new_size: input
 * @ptr: input
 * Return: pionter
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr1;
	unsigned int i, j;

	 j = new_size > old_size ? new_size : old_size;

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size * (sizeof(int)));
		if (ptr1 == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < new_size; i++)
			ptr1[i] = i;
		return (ptr);

	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size * (sizeof(int)));
	if (ptr1 == 0)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		ptr1 = ptr;
	}
	free (ptr);

	return (ptr1);
}
