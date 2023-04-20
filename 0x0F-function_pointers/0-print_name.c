#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name
 * @f: ptr
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
