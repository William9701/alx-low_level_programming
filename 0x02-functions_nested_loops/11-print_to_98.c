#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to_98
 * @n: number to be checked with
 * Return: ...
 */
void print_to_98(int n)
{

		if (n <= 98)
		{
			for (; n <= 98; n++)
			{
				if (n == 98)
				{
					printf("%d", n);
					printf("\n");
					break;
				}
				else
				{
					printf("%d, ", n);
				}
			}
		}
		else
		{
			for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
		}
}
