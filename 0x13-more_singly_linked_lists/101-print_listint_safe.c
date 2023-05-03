#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * looped_listint_len - Counts nodes in a looped listint_t linked list.
 * @head: A ptr to the head of the listint_t to check.
 * Return: 0
 */
size_t looped_listint(const listint_t *head)
{
	const listint_t *t, *h;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = h;
			while (t != h)
			{
				count++;
				t = t->next;
				h = h->next;
			}
			t = t->next;
			while (t != h)
			{
				count++;
				t = t->next;
			}
			return (count);
		}
		t = t->next;
		h = (h->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, idx = 0;

	count = looped_listint(head);
	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		while (idx < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			idx++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
