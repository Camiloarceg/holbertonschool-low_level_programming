#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer to the first node of the list.
 *
 * Return:void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (tmp = head ; tmp != NULL ;)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
