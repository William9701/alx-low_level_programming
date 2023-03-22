#include <stdio.h>
#include "main.h"

/**
 * _isupper - check for alphabet case
 * @c: character to be checked with
 * Return: 1 if the letter is upper case and 0 if the letter is lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	return (0);
}
