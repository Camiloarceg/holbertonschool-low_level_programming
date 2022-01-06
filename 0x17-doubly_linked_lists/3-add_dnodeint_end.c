#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list.
 * @n: number of the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->n = n;
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->n = n;
		tmp->next = new_node;
		new_node->prev = tmp;
		new_node->next = NULL;
	}
	return (new_node);
}
