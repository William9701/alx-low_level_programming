#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add_node
 * @head: head
 * @str: string
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	
	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	p->next = NULL;
	p->len = strlen(str);

	p->next = *head;
	*head = p;

	return (*head);
}
