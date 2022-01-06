#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		i += 1;
		tmp = tmp->next;
	}
	return (i);
}
