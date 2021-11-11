#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head of the linked list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		n += 1;
	}
	return (n);
}
