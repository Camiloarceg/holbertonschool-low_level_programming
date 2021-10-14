#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *@a: pointer to an array og int
 *@n: number of elements of the array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *b = a;
	int tmp;

	a = &a[n - 1];
	while (b < a)
	{
		tmp = *b;
		*b = *a;
		*a = tmp;
		b++;
		a--;
	}

}
