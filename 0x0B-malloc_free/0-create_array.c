#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *		  and initializes it with a specific char.
 *@size: the size of the array
 *@c: the specific char for the init
 *
 * Return: Null or the pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (0);
	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
