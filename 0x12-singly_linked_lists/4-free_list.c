#include <stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_list - free list_t
 * @head: variable head
 */

void free_list(list_t *head)
{
	list_t *curr = head;

	if (curr != NULL)
	{
		if (curr->next != NULL)
			free_list(curr->next);
		free(curr->str);
		free(curr);
	}
}
