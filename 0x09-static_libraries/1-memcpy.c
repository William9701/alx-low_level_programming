#include "main.h"

/**
 * _memcpy - memcopy
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int k = n;

	for (; i < k; i++)
	{
		dest[i] = src[k];
		n--;
	}
	return (dest);
}
