#include "search_algos.h"
#include <math.h>
/**
 * jump_list - jump_list
 * @list: list
 * @size: size of the list
 * @value: the tergeted value o search
 * Return: the found value or Null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list;
	listint_t *current = list;
	size_t i;

	if (list == NULL || size == 0)
		return (NULL);

	for (i = 0; i < step && current->next != NULL; i++)
		current = current->next;

	while (current->index < size && current->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;
		if (prev->n == value)
			return (prev);
		if (current->next == NULL || prev == current)
		{
			break;
		}
	}
	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);

	while (prev->index <= current->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->next == NULL || prev == current)
			break;
		prev = prev->next;
	}
	return (NULL);
}
