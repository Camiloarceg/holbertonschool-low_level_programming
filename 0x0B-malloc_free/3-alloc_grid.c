#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width.
 *@height: height.
 *
 * Return: doble pointer.
 */
int **alloc_grid(int width, int height)
{
	int i, m;
	int **p;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **)malloc(sizeof(int *) * height);
	if (p == 0)
		return (0);
	for (i = 0 ; i < height ; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (m = 0 ; m < i ; m++)
				free(p[m]);
			free(p);
			return (0);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (m = 0 ; m < width ; m++)
		{
			p[i][m] = 0;
		}
	}
	return (p);
}
