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

	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	while (len != (idx - 1))
	{
		if (tmp == NULL)
		{
			free(tmp);
			return (NULL);
		}
		tmp = tmp->next;
		len++;
	}
	new_n->next = tmp->next;
	tmp->next = new_n;
	return (new_n);
}
