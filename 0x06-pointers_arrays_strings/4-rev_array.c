#include "main.h"

/**
 * reverse_array - reverse_array
 * @a: a
 * @n: b
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	n = n - 1;
	c = 0;
	while (c <= n)
	{
		i = a[c];
		a[c++] = a[n];
		a[n--] = i;
	}
}

