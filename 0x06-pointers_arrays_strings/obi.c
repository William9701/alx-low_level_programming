#include <stdio.h>

void main()
{
	int c;
	int i;

	for (i = 0; i < 13; i++)
	{
	for (c = 0; c <= 20; c++)
		if (c > 9)
		{
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
		}
		else
		{
			putchar(c + '0');
		}
	if (c != (c-1))
		putchar(',');
	putchar('\n');
	}
}
