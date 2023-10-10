#include "search_algos.h"
/**
 * binary_search - binary_search
 * @array: the array to chk
 * @size: the size of the array
 * @value: the value of the array
 * Return: the value searched or -1 if not found
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
