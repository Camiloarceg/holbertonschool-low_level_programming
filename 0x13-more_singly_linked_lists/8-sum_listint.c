#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 *		 of a listint_t linked list.
 * @head: pointer to first node.
 *
 * Return: the sum of the data if empty then return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
