#include "main.h"

/**
 * _isupper - check for alphabet case
 * @c: character to be checked with
 * Return: 1 if the letter is upper case and 0 if the letter is lower case
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
