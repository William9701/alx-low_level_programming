#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: head
 * Return: freed number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}

