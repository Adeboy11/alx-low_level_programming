#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all node
 * @head: pointer to list
 *
 * Return: sum of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	sum += tmp->n;
	return (sum);
}
