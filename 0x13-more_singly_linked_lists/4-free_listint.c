#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free_listint
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
	p = head;
	head = head->next;
	free(p);
	}
}
