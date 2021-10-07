#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, m;

	for (i = 1 ; (i <= n)  && (n > 0) ; i++)
	{
		for (m = 1 ; m <= i ; m++)
		{
			if ((i != 1) && (m != i))
				_putchar(' ');
			if ((m == i) || (i == 1))
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	if (n <= 0)
		_putchar('\n');
}
