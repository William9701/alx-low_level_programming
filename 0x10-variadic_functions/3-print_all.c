#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - all
 * @format: input
 * @*:t
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *p = "";
	va_list list;

	va_start(list, format);
if (format)
{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", p, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", p, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", p, va_arg(list, double));
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
printf("\n");
	va_end(list);
}
