#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete node from list
 * @head: pointer to list
 *
 * Return: node
 */

int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	ret = tmp->n;
	*head = tmp->next;
	if (tmp != NULL)
	{
		free(tmp);
		return (ret);
	}
	return (ret);
}
