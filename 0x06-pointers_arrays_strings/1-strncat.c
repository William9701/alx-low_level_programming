#include "main.h"
#include <string.h>
/**
 * _strncat - _strncat
 * @dest:  destination
 * @src:  source
 * @n: number of time
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
