#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop_listint
 * @head: head
 * Return: i
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		p = *head;
		*head = (*head)->next;
		free(p);
		p->next = NULL;
	}
	return (i);
}
