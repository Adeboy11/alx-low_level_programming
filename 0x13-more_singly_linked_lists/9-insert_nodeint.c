#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to the list
 * @idx: index of new node to insert.
 * @n: new node data
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	listint_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = tmp;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	while (cnt != idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		cnt++;
	}
	new_node->next = tmp->next;
	new_node->n = n;
	tmp->next = new_node;
	return (new_node);
}
