#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - print_strings
 * @separator: separator
 * @n: n
 * Return:
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	if (separator == NULL)
	{
		return;
	}


	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(list, char *);
	if (strcmp(str, "") == 0)
	{
		str = "(nil)";
	}
	if (i != (n - 1))
	{

		printf("%s%s", str, separator);
	}
	else
		printf("%s", str);
	}
	printf("\n");

	va_end(list);
}
