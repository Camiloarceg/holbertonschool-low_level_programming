#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer to the first node.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp->next != NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
	free(tmp);
}
