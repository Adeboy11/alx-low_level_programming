#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer head
 * @index: index of the node to be deleted
 *
 * Return: success, and failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 1;
	listint_t *tmp, *delete;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (cnt != index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		cnt++;
	}
	delete = tmp->next->next;
	free(tmp->next);
	tmp->next = delete;
	return (1);
}
