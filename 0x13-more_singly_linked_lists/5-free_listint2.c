#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer that points to a pointer to a node.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

