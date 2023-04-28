#include <stdio.h>
#include "lists.h"

/**
 * list_len - print number of the elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int ind = 0;
	list_t *curr = h;

	while (curr)
	{
		curr = curr->next;
		ind++;
	}
	return (ind);
}
