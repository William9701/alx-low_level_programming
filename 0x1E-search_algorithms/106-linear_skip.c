#include "search_algos.h"
/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the node with the matched value, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *second = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   temp->express->index, temp->express->n);
		temp = temp->express;
	}
	second = temp;
	while (second && second->next != second->express)
		second = second->next;

	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   temp->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
			   temp->index, temp->express->index);
	}

	else
		printf("Value found between indexes [%lu] and [%lu]\n",
			   temp->index, second->index);

	while (temp != second && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
		   temp->index, temp->n);

	if (temp == second)
		return (NULL);
	return (temp);
}
