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
	int lent;

	lent = 0;
	while (dest[lent] != '\0')
	{
		lent++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, lent++)
	{
		dest[lent] = src[i];
	}
	dest[lent] = '\0';
	return (dest);
}
