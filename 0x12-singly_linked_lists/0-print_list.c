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

	size_t n = 1;

	if (h->str == NULL)
	{
		printf("[%d] %s \n", 0, "(nil)");
	}
	else
		printf("[%d] %s \n", h->len, h->str);
	while (h->next != NULL)
	{
		h = h->next;
		printf("[%d] %s \n", h->len, h->str);
		n += 1;
	}
	return (n);
}
