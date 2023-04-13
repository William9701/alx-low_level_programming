#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - malloc_checked
 * @b: input
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
