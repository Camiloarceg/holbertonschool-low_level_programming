#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer that points to a pointer to a node.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return;
	while (tmp != NULL)
	{
		*head = (*head)->next;
		free(tmp);
		tmp = *head;
	}
	*head = NULL;
}

