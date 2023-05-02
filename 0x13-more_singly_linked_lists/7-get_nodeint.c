#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - nth node
 * @head: pointer to list
 * @index: index of node at 0
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (ind == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		ind++;
	}
	return (NULL);
}

