#include "main.h"
/**
 * print_number -  prints an integer.
 *@n: integrer to program.
 *
 * Return: void.
 */
void print_number(int n)
{
	int i, m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 1 ; i <= n ; i *= 10)
	{
	}
	i = i / 10;
	if (i == 0)
		_putchar('0');
	for (; i > 0 ; i /= 10)
	{
		m = (n / i) % 10;
		_putchar(m + '0');
	}
}
