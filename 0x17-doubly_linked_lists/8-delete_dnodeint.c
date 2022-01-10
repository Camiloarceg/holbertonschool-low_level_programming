#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a linked list.
 *
 * @head: Doubly linked list.
 * @index: The index of the node that should be deleted.
 *         Index starts at 0.
 *
 * Return: (1) if it succeeded, (-1) if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int n_node;

	tmp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	else
	{
		for (n_node = 0; n_node < index; n_node++)
		{
			if (!tmp)
				return (-1);
			tmp = tmp->next;
		}

		if (!tmp)
			return (-1);

		if (!tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
