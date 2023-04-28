#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements in the list
 * @h: at position h
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int ind = 0;

	while (h != NULL)
	{
		ind++;
		if (h[0].str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h[0].len, h[0].str);
		h = h->next;
	}
	return (ind);
}
