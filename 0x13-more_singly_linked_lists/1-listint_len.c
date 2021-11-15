#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first element of the list.
 *
 * Return: nuber of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t n = 0;

	tmp = h;
	while (tmp != NULL)
	{
		n += 1;
		tmp = tmp->next;
	}
	return (n);
}
