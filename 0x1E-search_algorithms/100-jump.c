#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump_search
 * @array: the array to chk
 * @size: the size of the array
 * @value: the value of the array
 * Return: the value searched or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = (int)sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);


	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += (int)sqrt(size);
		if (prev >= size)
		{
			printf("Value not present in the array\n");
			return (-1);
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev - (int)sqrt(size), prev);


	for (i = prev - (int)sqrt(size); i <= prev; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
