#include "search_algos.h"
/**
 * linear_search - linear_search
 * @array: the array to check
 * @size: size of the array
 * @value: the value to check
 * Return: the found item or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
