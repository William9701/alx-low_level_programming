#include "main.h"

/**
 * cap_string - cap_string
 * @a: a
 * Return: a
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == 9 || a[i - 1] == '.')
		{
			if (a[i] >= 97 && a[i] <= 122)
				a[i] = a[i] - 32;
		}
	}
	return (a);
}
