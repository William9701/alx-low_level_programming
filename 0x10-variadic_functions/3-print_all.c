#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - all
 * @fomart: input
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
	float f;
	char *s, *p;
	va_list list;

	va_start(list, format);


if (format)
{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%s%c", p, c);
				break;
				
			case 'i':
				i = va_arg(list, int);
				printf("%s%d", p, i);
				break;

			case 'f':
				f = va_arg(list, double);
				printf("%s%f", p, f);
				break;

			case 's':
				s = va_arg(list, char*);
				if (!s)
				{
					s = "(nil)";
				}
					printf("%s%s", p, s);
				break;

			default:
				i++;
				continue;
		}
		p = ", ";
		i++;
	}
}

	va_end(list);
	printf("\n");
}
