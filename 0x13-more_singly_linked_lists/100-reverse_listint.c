#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse_listint
 * @head: head
 * Return: ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *t = NULL;

	while (*head != NULL)
	{
		t = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = t;
	}
	*head = p;

	return (*head);
}

