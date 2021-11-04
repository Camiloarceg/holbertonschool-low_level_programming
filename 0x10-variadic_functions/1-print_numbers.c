#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: the string separator.
 * @n: numbers to print,
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	for (i = 0 ; i < (n - 1) ; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
