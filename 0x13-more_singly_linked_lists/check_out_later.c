#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - print_listint_safe
 * @head: head
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p;
	size_t count;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		p = head;
		head = head->next;
		if (p <= head)
		{
			 printf("-> [%p] %d\n", (void *)head, head->n);
			 exit(98);
		}
	}
	return (count);
}
