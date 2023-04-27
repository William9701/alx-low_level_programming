#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free_list
 * @head: to be freed
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
