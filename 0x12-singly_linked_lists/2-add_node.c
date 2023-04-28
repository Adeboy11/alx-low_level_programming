#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer of pointer node
 * @str: string
 *
 * Return: new nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new_node;
	int ind = 0;

	add_new_node = malloc(sizeof(list_t));
	if (add_new_node == NULL)
		return (NULL);
	add_new_node->str = strdup(str);
	add_new_node->next = *head;
	*head = add_new_node;
	while (str[ind])
		ind++;
	add_new_node->len = ind;
	return (add_new_node);
}
