#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		 and returns the head node’s data (n).
 * @head:pointer that pooints to the pointer to the first node.
 *
 * Return: the data in n.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	tmp = *head;
	return (n);
}
