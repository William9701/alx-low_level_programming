#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add_nodeint
 * @head: bead
 * @n: n
 * Return: ptr
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
	p->next = (*head)->next;
	(*head)->next = p;
	}

	return (p);
}
