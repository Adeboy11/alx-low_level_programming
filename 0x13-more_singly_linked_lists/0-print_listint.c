#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elemnets
 * @h: number of elements in the list
 *
 * Return: number of pointer nodes
 */

size_t print_listint(const listint_t *h)
{
	int ind = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		ind++;
	}
	return (ind);
}
