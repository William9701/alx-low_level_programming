#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at the given index
 * @head: Pointer to the head node
 * @index: Index of the node to retrieve
 * Return: Pointer to the node at the index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
