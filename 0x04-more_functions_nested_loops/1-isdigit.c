#include "main.h"

/**
 * _isdigit - checkes for digits
 * @c: char to be checked with
 * Return: returns 1 for digits and 0 for anyother thing
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
