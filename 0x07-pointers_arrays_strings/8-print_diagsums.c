#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 *		    square matrix of integers.
 *@a: matrix of numbers
 *@size: dimension of the matrix
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, m;
	int sumr = 0, suml = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (m = 0 ; m < size ; m++)
		{
			if (i == m)
				sumr += a[m];
			if (m == (size - i - 1))
				suml += a[m];
		}
		a += size;
	}
	printf("%d, %d\n", sumr, suml);
}
