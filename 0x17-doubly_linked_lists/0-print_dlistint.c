#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print_list
 * @h: input
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
	if (h->n == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", h->n);
	}
		count++;
		h = h->next;
	}
	return (count);
}
