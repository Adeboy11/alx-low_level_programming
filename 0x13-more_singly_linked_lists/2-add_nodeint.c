#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node to the list
 * @head: pointer head
 * @n: node variable
 *
 * Return: pointer of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
