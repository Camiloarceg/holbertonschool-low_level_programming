#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of the linked list.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		n += 1;
	}
	return (n);
}
