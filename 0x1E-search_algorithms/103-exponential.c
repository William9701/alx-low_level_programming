#include "search_algos.h"
/**
 * exponential_search - exponential_search
 * @array: the array to chk
 * @size: the size of the array
 * @value: the value of the array
 * Return: the value searched or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i = 1;

	if (array == NULL || size == 0)
		return (-1);

	while (i < right - left + 1 && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", i / 2, i <
	right ? i : right);

	return (b_search(array, i / 2, i < right ? i : right, value));
}

/**
 * b_search - binary_search
 * @array: the array to chk
 * @left: the left of the array
 * @right: the right of the array
 * @value: the value of the array
 * Return: the value searched or -1 if not found
 */
int b_search(int *array, int left, int right, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
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

