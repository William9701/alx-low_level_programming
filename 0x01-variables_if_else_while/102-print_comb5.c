#include <stdio.h>
/**
 * main - main
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 00; i < 100; i++)
	{
		for (j = 00; j < 100; j++)
		{
			if (i < j && i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i + j != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
