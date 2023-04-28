#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node to the end
 * @head: pointer of pointer node
 * @str: string
 *
 * Return: new node element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	int ind = 0;

	new_node = malloc(sizeof(list_t));
	last = *head;
	if (new_node == NULL)
		return (NULL);
	while (str[ind])
		ind++;
	new_node->len = ind;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
