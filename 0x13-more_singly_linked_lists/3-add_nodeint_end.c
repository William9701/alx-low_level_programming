#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add_nodeint_end
 * @head: head
 * @n: n
 * Return: p
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
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
		listint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = p;
	}
	return (p);
}

