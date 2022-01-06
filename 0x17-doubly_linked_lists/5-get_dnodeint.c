#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list.
 * @index: number of the node.
 *
 * Return: retrun node if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		count += 1;
		tmp = tmp->next;
	}
	return (NULL);
}
