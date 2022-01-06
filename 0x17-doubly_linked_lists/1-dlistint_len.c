#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		i += 1;
		tmp = tmp->next;
	}
	return (i);
}
