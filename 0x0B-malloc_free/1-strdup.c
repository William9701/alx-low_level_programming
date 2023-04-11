#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - _strdup
 * @str: input
 * Return: ptr
 */

char *_strdup(char *str)
{
	int i;
	int lenght = strlen(str);
	char *ptr;

	if (lenght == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(lenght * sizeof(char) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < lenght; i++)
	ptr[i] = str[i];

return (ptr);
}
