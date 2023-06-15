#include "lists.h"

/**
 * print_dlistint - Prints all the elements in dlistint_t list.
 * @h: head of dlistint_t list.
 *
 * Return: no the nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a_nodes = 0;

	while (h)
	{
		a_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (a_nodes);
}
