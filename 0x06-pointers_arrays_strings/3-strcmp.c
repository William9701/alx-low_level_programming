#include "main.h"

/**
 * _strcmp - _strcmp
 * @s1: sourcre 1
 * @s2: s2
 * Return: flag
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	flag = 0;
	while (s1[flag] == s2[flag] && s1[flag] != '\0')
	{
		flag++;
	}
	i = s1[flag] - s2[flag];
	return (i);
}
