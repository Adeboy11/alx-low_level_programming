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

	while (h != NULL)
	{
		h = h->next;
		ind++;
	}
	return (ind);
}
