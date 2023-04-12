#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - argstostr
 * @ac: ac
 * @av: input
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (ac + 51));
	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (ptr);
}
