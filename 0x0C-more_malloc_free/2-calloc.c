#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements
 *@size: size of elements.
 *
 * Return: the pointer to the location in memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(size * nmemb);
	if (p == 0)
		return (0);
	for (i = 0 ; i < nmemb * size ; i++)
	{
		p[i] = '\0';
	}
	return (p);
}

