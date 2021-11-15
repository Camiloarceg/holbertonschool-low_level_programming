#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer that points to head in main.
 * @n: value for new node.
 *
 * Return:the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = *head;
	*head = new_n;
	return (*head);
}
