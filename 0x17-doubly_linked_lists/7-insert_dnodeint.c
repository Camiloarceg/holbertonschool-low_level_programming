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
	size_t i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (!h || (int)idx < 0)
	{
		return (NULL);
	}
	if (idx == 0 || !*h)
	{
		return (add_dnodeint(h, n));
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
	if ((i + 1) == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
