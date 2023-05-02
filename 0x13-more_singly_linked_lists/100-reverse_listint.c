#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: variable head
 *
 * Return: pointer to reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *_tmp = NULL;
	listint_t *_tmp_next = NULL;

	while (*head != NULL)
	{
		_tmp_next = (*head)->next;
		(*head)->next = _tmp;
		_tmp = *head;
		*head = _tmp_next;
	}
	*head = _tmp;
	return (*head);
}
