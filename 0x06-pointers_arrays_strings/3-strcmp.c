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
	int flag = 0;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		if (s1[i] == s2[i])
		{
			flag = 0;
			break;
		}
		if (s1[i] != s2[i] && s1[i] < s2[i])
		{
			flag = -15;
			break;
		}
		else if (s1[i] != s2[i] && s1[i] > s2[i])
		{
			flag  = 15;
			break;
		}
	}
	return (flag);
}


