#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
	{
		return;
	}

	va_start(list, n);


	for (i = 0; i < n; i++)
		if (i != (n - 1))
		{
		printf("%d%s", va_arg(list, int), separator);
		}
		else
			printf("%d", va_arg(list, int));
	printf("\n");

	va_end(list);
}
