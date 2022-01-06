#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the list.
 * @n: value for the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		exit(EXIT_FAILURE);
	}
	if (*head == NULL)
	{
		new_node->n = n;
		*head = new_node;
		(*head)->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		new_node->n = n;
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
