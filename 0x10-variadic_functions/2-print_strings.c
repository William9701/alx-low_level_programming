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

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(list, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else

		printf("%s", str);
	if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
