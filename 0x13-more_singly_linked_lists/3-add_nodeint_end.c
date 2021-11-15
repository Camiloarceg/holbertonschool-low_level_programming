#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer who points to the first node.
 * @n: value to set the new node to.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *tmp = *head;

	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_n;
	return (new_n);
}
