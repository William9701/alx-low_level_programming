#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: head
 * @index: index
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *t;

	p = *head;
	t = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	else
	{
	while (index != 0)
	{
		p = t;
		t = t->next;
		index--;
	}
	p->next = t->next;
	free(t);
	t = NULL;
	}
	return (1);
}
