#include "lists.h"

/**
 * sum_dlistint - Sums all data in dlistint_t.
 * @head: pointer to the head of dlistint_t.
 *
 * Return: sum of inputed data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
