#include "main.h"
#include <string.h>

/**
 * _strcat - copy strings
 * @dest: strings to be displayed
 * @src: strng to be copied from
 * Return: pionter value
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	int i;
	int j = strlen(dest);
	int k = strlen(src);

	for (i = 0; i <= k; i++)
	{
		dest[j + i] = src[i];
	}
	return (p);
}
