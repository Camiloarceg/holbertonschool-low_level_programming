#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: how many numbers are going to be add.
 *
 * Return: the sum of them all.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(ap, int);
	return (sum);
}
