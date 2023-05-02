#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cnt = 0;
	listint_t *ptr1, *ptr2, *total;
	listint_t *current;

	ptr1 = NULL;
	while (*h != NULL)
	{
		ptr2 = malloc(sizeof(listint_t));

		if (ptr2 == NULL)
			exit(98);

		ptr2->n = (void *)*h;
		ptr2->next = ptr1;
		ptr1 = ptr2;

		total = ptr1;

		while (total->next != NULL)
		{
			total = total->next;
			if (*h == total->n)
			{
				*h = NULL;
				free_listint2(&ptr1);
				return (cnt);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		cnt++;
	}

	*h = NULL;
	free_listint2(&ptr1);
	return (cnt);
}
