#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node in dlistint_t.
 * @head: head of dlistint_t.
 * @index: index of node to find.
 *
 * Return: returns NULL if fails or the address of the node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
