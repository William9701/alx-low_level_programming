#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - string_nconcat
 * @s1: input
 * @s2: input
 * @n: input
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
		{
			ptr[i] = s1[i];
		}
	for (i = 0; i < n; i++)
	{
		ptr[strlen(s1) + i] = s2[i];
	}
	ptr[strlen(s1) + n] = '\0';

	return (ptr);
}
