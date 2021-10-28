#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 *@min: minimun value
 *@max:maximun value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, num = 0;
	int *p;

	if (min > max)
		return (NULL);
	for (i = min ; i <= max ; i++)
	{
		num += 1;
	}
	p = malloc(sizeof(*p) * num);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < num ; i++)
	{
		p[i] = min;
		min += 1;
	}
	return (p);
}
