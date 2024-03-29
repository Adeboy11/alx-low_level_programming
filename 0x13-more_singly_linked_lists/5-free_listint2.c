#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to a linked list
 *
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
