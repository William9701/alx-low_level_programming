#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: head
 * @idx: index
 * @n: n
 * Return: ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *p;

	ptr = malloc(sizeof(listint_t));
	if (!ptr ||!head)
	{
		return (NULL);
	}

	ptr->n = n;


	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	p = *head;

	while (p && idx != 0)
	{
		p = p->next;
		idx--;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
	ptr->next = p->next;
	p->next = ptr;
	}

	return (ptr);
}
