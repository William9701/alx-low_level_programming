#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

#include <stdlib.h>

void free_list(listint_t *list);

/**
 * create_list - Creates a single linked list
 *
 * @array: Pointer to the array to use to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list (NULL on failure)
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
#include <stdlib.h>

/**
 * free_list - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
#include <stdio.h>

/**
 * print_list - Prints the content of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step;
	size_t i;
	listint_t *current;
	listint_t *prev;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	jump_step = sqrt(size);

	current = list;
	prev = NULL;


	while (current != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump_step && current->next != NULL; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);


	while (prev != NULL && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return prev;

		prev = prev->next;
	}

	return NULL;
}

int main(void)
{
	listint_t *list, *res;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_list(array, size);
	print_list(list);

	res = jump_list(list, size, 53);
	printf("Found %d at index: %lu\n\n", 53, res->index);
	res = jump_list(list, size, 2);
	printf("Found %d at index: %lu\n\n", 2, res->index);
	res = jump_list(list, size, 999);
	printf("Found %d at index: %p\n", 999, (void *)res);

	free_list(list);
	return (EXIT_SUCCESS);
}
