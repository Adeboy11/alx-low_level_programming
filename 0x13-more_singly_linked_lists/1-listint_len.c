#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer
 *
 * Return: reurns total number
 */

size_t listint_len(const listint_t *h)
{
	int ind = 0;

	while (h)
	{
		ind++;
		h = h->next;
	}
	return (ind);
}
