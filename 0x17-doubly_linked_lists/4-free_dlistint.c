#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
