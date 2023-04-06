#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - cal
 * @n: input
 * @i: iterate
 * Return: sqr root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
