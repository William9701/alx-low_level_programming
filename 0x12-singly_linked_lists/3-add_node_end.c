#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add_node_end
 * @head: head
 * @str: char
 * Return: pionter
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *h;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	if (!p->str)
	{
		return (NULL);
	}
	p->len = strlen(str);
	p->next = NULL;


	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		h = *head;
		while (h->next)
		{
			h = h->next;
		}
		h->next = p;
	}

	return (p);
}
