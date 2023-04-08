#include "main.h"

/**
 * _isalpha - checkes for aphabetic character
 * @c: the character to be checked
 * Return: 1 for alphabetic character 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 123))
	{
		return (1);
	}
	return (0);
}
