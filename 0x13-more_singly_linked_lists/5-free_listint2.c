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
	listint_t *ptr;
	listint_t *next;

	ptr = *head;
	while (ptr != NULL)
	{
	next = ptr->next;
	free(ptr);
	ptr = next;
	}
	
	*head = NULL;
}

