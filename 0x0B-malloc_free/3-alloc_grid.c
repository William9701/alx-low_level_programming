#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc_grid
 * @width: width
 * @height: input
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	ptr = malloc(sizeof(int*) * width);
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * width);
	ptr[i] = 0;
	
	return (ptr);
}
