#include "main.h"

/**
 * print_times_table - print the time table
 * @n: number to be tested with
 * Return: ...
 */
void print_times_table(int n)
{
	int x, y, z, u, d;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; x++)
		{
			z = x * y;

			if (z > 9)
			{
				d = z / 10;
				u = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + 0);
			}
		}
	_putchar('\n');
	}
}
