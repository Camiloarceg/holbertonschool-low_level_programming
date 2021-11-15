#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer that points to the pointer that points to the first node.
 * @idx: the index to the new node.
 * @n: the value for the new node.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new_n;
	unsigned int len = 0;
	listint_t *prev;

	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len += 1;
	}
	if (idx > len)
		return (NULL);
	for (tmp = *head ; idx > 0 ; idx--)
	{
		if (idx == 1)
			prev = tmp;
		tmp = tmp->next;
	}
	new_n->next = tmp;
	new_n->n = n;
	prev->next = new_n;
	return (new_n);
}
