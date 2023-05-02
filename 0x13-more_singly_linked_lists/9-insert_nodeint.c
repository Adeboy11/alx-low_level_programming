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
	listint_t *newnode, *tmp;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = tmp;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	while (cnt != idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		cnt++;
	}
	newnode->next = tmp->next;
	newnode->n = n;
	tmp->next = newnode;
	return (newnode);
}
