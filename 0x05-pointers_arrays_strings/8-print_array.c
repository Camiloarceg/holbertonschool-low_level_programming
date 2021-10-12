#include <stdio.h>
#include "main.h"
/**
 *print_array - prints n elements of an array of integers,
 *		followed by a new line.
 *@a: an pointer to an int
 *@n: number of elements of the array to be printed
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1 ; i < n ; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
