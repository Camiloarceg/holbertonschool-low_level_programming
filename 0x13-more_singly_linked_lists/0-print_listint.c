#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the first element of the linked list.
 *
 * Return: amount of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t n = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n += 1;
	}
	return (n);
}
