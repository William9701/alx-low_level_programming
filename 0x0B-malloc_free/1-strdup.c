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

	if (str == NULL)
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

	ptr[i] = '\0';

return (ptr);
}
