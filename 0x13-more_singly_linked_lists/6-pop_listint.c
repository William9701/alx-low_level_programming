#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop_listint
 * @head: head
 */
int pop_listint(listint_t **head)
{
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	return (p->n);
}
