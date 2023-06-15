#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - list_len
 * @h: input
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
	if (h->n == 0)
	{
		return (0);
	}
	else
	{
		count++;
		h = h->next;
	}
	}
	return (count);
}
