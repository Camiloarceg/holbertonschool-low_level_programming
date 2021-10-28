#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 *@ptr: the pointer
 *@old_size: the old size
 *@new_size: the new size
 *
 * Return: a void pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	free(ptr);

	return (p);
}
