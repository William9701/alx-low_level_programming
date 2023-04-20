#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: input
 * @size: size
 * @action: action
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}