#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = k = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;


	ptr = malloc(sizeof(char) *(i + k + 1));
	if (ptr == 0)
	{
		return (NULL);
	}

	i = k = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	
	while (s2[k] !='\0')
	{
		ptr[i] = s2[k];
		i++,k++;
	}
	ptr[i] = '\0';

	return ptr;
}


