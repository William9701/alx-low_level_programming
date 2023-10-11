#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: Index of the first element to print in array
 * @right: Index of the last element to print in array
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search_recursive - Recursively y
 *
 * @array: Pointer to the first element of the array to search in
 * @left: Index of the first element in current search space
 * @right: Index of the last element in current search space
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		else if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		else
			return (binary_search_recursive(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a vh
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

