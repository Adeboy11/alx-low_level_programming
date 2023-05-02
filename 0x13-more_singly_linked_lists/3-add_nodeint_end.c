#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a linked list
 * @head: pointer node
 * @n: value at insertion point
 *
 * Return: new linked element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t newNode;
	listint_t endNode;

	newNode = malloc(sizeof(listint_t));
	endNode = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (endNode->next != NULL)
		endNode = endNode->next;
	endNode->next = newNode;
	return (newNode);
}
