#include "main.h"

/**
 * _memset - memory set
 * @s: character to to tested with
 * @b: char to be testec wit
 * @n: n
 * Return: n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
