#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free_listint2
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
	next = (*head)->next;
	free(*head);
	*head = next;
	}
	*head = NULL;
}

