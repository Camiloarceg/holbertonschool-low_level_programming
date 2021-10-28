#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 *@b: space of memory to be allocated.
 *
 * Return: 0 if sucess, 98 if fail.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == 0)
		exit(98);
	return (0);
}
