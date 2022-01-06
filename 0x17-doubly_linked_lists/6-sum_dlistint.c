#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *			 of a dlistint_t linked list.
 * @head: head of the list.
 *
 * Return: the sum, if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
