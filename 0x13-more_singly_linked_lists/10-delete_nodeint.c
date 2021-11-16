#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of
 *			      a listint_t linked list.
 * @head: pointer that points to the pointer to first node.
 * @index: position to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *tmp = *head, *new_n;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	else
	{
		for (n = 0; n < index - 1; n++)
		{
			if (tmp == NULL)
				return (-1);

			tmp = tmp->next;
		}

		new_n = tmp;

		new_n = new_n->next->next;
		free(tmp->next);
		tmp->next = new_n;
	}
	return (1);
}
