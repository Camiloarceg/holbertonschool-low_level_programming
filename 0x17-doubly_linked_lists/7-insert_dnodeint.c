#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of list.
 * @idx: index of the insertion.
 * @n: value of node.
 *
 * Return: the adress of new node or null.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		*h = new_node;
		(*h)->prev = NULL;
		(*h)->next = tmp;
		return (new_node);
	}
	while (tmp != NULL)
	{
		if (count == idx)
		{
			new_node->n = n;
			(tmp->prev)->next = new_node;
			new_node->prev = tmp->prev;
			new_node->next = tmp;
			tmp->prev = new_node;

			return (tmp);
		}
		count += 1;
		tmp = tmp->next;
	}
	return (NULL);
}
