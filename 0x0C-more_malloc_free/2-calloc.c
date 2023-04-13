#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - _calloc
 * @nmemb: input
 * @size: input
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = 0;
	ptr = malloc((nmemb) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	return (ptr);
}
