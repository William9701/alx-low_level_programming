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
	int c = 0;

	for (i = 0; a[i] < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}

