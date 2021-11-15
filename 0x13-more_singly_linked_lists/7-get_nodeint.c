#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node.
 * @index: position of the node to return.
 *
 * Return: the node in the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int n = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		n += 1;
	}
	if (index > n)
		return (NULL);
	for (tmp = head ; index > 0 ; index--)
		tmp = tmp->next;
	return (tmp);
}
