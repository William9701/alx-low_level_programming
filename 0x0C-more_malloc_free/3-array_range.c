#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array_range
 * @min: input
 * @max: input
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

		ptr[i] = min + i;

	return (ptr);
}
