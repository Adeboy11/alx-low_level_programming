#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to head
 *
 * Return: nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;
	listint_t *firt = (void *)head, *tmp = 0;
	int flag = 0;

	while (aux != NULL)
	{
		if (flag == 0)
		{
			tmp = first;
			printf("[%p] %d\n", (void *)first, first->n);
		}
		if (flag == 1)
		{
			if (tmp <= first)
			{
				printf("-> [%p] %d\n", (void *)first, first->n);
				return (cnt);
			}
			printf("[%p] %d\n", (void *)first, first->n);
		}
		cnt += 1;
		tmp = first;
		first = first->next;
		flag = 1;
	}
	return (cnt);
}
