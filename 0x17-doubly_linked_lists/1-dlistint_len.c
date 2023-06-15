#include "lists.h"

/**
 * dlistint_len - Counts the elements in a linked dlistint_t
 * @h: head of dlistint_t list.
 *
 * Return: no of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a_nodes = 0;

	while (h)
	{
		a_nodes++;
		h = h->next;
	}

	return (a_nodes);
}
