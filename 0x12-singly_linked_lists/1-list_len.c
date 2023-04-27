#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list_len
 * @h: input
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		count++;
		h = h->next;
	}
	}
	return (count);
}
