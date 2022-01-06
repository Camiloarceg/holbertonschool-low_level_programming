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
	dlistint_t *new_node, *tmp = *h;
	size_t i;

	if (!h || (int)idx < 0)
	{
		return (NULL);
	}
	if (idx == 0 || !*h)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; tmp->next; i++)
	{
		if ((i + 1) == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);

			new_node->next = tmp->next;
			tmp->next->prev = new_node;
			tmp->next = new_node;
			new_node->prev = tmp;
			new_node->n = n;
			return (new_node);
		}
		tmp = tmp->next;
	}
	if ((i + 1) == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
