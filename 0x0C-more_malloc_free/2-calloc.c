#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_memset(char *c, char b, unsigned int n);
/**
 * _memset - _memset
 * @c: input
 * @b: input
 * @n: input
 * Return: pointr
 */

char *_memset(char *c, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = b;
	}
	return (c);
}
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
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
