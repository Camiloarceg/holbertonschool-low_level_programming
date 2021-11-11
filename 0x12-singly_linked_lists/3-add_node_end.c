#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: points to head in main.
 * @str: to add the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new_n;

	if (!head || !str)
		return (NULL);
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = strlen(str);
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
