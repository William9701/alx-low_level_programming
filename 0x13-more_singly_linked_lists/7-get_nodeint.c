#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: head
 * @index: index
 * Return: ptr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	ptr = head;

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
		return (ptr);
}
